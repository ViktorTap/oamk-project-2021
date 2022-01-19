DELIMITER //
CREATE PROCEDURE testaus_credit_siirto_2(IN first_id INT, IN second_id INT, IN summa DOUBLE )
BEGIN
  DECLARE test1, test2, luottorajaParam, saldoParam, summaParam INT DEFAULT 0;
  START TRANSACTION;
  
  SELECT Luottoraja INTO luottorajaParam FROM tili WHERE idTili = first_id;
  SELECT Saldo INTO saldoParam FROM tili WHERE idTili = first_id;
  
  IF (luottorajaParam > luottorajaParam + saldoParam) THEN ROLLBACK;
  ELSE
  
  UPDATE tili SET Saldo = Saldo - summa WHERE idTili = first_id AND Saldo >= summa;
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
END //
DELIMITER ;