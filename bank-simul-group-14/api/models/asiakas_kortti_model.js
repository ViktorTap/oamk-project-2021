const db = require('../database');

const asiakas_kortti={
  get: function(callback) {
    return db.query('select Etunimi, Sukunimi, Korttinumero from asiakas join kortti on asiakas.idAsiakas = kortti.idAsiakas;', 
    callback);
  }
}

module.exports = asiakas_kortti;