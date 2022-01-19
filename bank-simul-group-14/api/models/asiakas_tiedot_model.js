const db = require('../database');

const asiakas_tiedot={
  get: function(callback) {
    return db.query('select Etunimi, Sukunimi, Korttinumero, idTili, Tilinumero, Kortin_tyyppi, Saldo, Luottoraja from asiakas join kortti on asiakas.idAsiakas = kortti.idAsiakas join tili on tili.idKortti = kortti.idKortti;', 
    callback);
  },
  getById: function(id, callback) {
    return db.query('select Etunimi, Sukunimi, Korttinumero, idTili, Tilinumero, Kortin_tyyppi, Saldo, Luottoraja from asiakas join kortti on asiakas.idAsiakas = kortti.idAsiakas join tili on tili.idKortti = kortti.idKortti where asiakas.idAsiakas=?;', [id], callback);
}
}

module.exports = asiakas_tiedot;