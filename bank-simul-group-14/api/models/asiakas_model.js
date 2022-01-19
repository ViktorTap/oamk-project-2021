const db = require('../database');

const asiakas={
  get: function(callback) {
    return db.query('select * from asiakas', callback);
  },

  getById: function(idAsiakas, callback) {
    return db.query('select * from asiakas where idAsiakas=?', [idAsiakas], callback);
  },

  add: function(asiakas, callback) {
      return db.query('insert into asiakas (Etunimi, Sukunimi) values(?,?)',
      [asiakas.Etunimi, asiakas.Sukunimi], callback);
    },

  delete: function(idAsiakas, callback) {
    return db.query('delete from asiakas where idAsiakas=?', [idAsiakas], callback);
  },

  update: function(idAsiakas, asiakas, callback) {
      return db.query('update asiakas set Etunimi=?, Sukunimi=? where idAsiakas=?',
      [asiakas.Etunimi, asiakas.Sukunimi, idAsiakas], callback);
  }
}

module.exports = asiakas;