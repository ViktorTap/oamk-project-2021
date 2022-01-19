const db = require('../database');

const saltRounds=10;
const uusi_tili={

  add: function(tili, callback) {
    return db.query('insert into tili (idOmistaja, Tilinumero, Saldo, Kortin_tyyppi, Luottoraja, idKortti) values(?,?,?,?,?,?)',
    [tili.idOmistaja, tili.Tilinumero, tili.Saldo, tili.Kortin_tyyppi, tili.Luottoraja, tili.idKortti], callback);
    }
}
              
module.exports = uusi_tili;