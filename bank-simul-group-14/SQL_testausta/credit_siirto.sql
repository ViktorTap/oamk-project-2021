CREATE DEFINER=`root`@`localhost` PROCEDURE `credit_siirto`(IN first_id INT, IN second_id INT, IN summa DOUBLE )
BEGIN
  DECLARE test1, test2 INT DEFAULT 0;
  START TRANSACTION;
  
  SELECT Luottoraja INTO luottorajaParam FROM tili WHERE idTili = first_id;
  SELECT Saldo INTO saldoParam FROM tili WHERE idTili = first_id;
  
  IF (summa > luottorajaParam + saldoParam) THEN ROLLBACK;
  ELSE
  
  UPDATE tili SET Saldo = Saldo - summa WHERE idTili = first_id;
  SET test1 = ROW_COUNT();
  UPDATE tili SET Saldo = Saldo + summa WHERE idTili = second_id;
  SET test2 = ROW_COUNT();
    IF (test1 > 0 AND test2 >0) THEN   
      COMMIT;    
      INSERT INTO tilitapahtumat(tili_idTili, Tapahtuma, Rahamaara, Paivays) VALUES(first_id, 'Nosto', summa, NOW());
      INSERT INTO tilitapahtumat(tili_idTili, Tapahtuma, Rahamaara, Paivays) VALUES(second_id,'Talletus', summa, NOW());
    ELSE
      ROLLBACK;
  END IF;
  END IF;
  END