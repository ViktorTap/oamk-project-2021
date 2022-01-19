const db = require('../database');

const tilitapahtumat={
  get: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  getById: function(idAsiakas, callback) {
    return db.query('select Paivays, Tapahtuma, Rahamaara from tilitapahtumat inner join tili ON tilitapahtumat.tili_idTili = tili.idTili inner join kortti ON kortti.idKortti = tili.idKortti where idAsiakas=?', [idAsiakas], callback);
  }
}
  module.exports = tilitapahtumat;