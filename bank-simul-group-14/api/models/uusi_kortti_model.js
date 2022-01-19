const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const uusi_kortti={

  add: function(kortti, callback) {
    bcrypt.hash(kortti.PIN, saltRounds, function(err, hash) {
      return db.query('insert into kortti (Korttinumero, PIN, idAsiakas) values(?,?,?)',
      [kortti.Korttinumero, hash, kortti.idAsiakas], callback);
    });
  }
 }
          
module.exports = uusi_kortti;