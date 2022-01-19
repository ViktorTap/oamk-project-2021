const db = require('../database');

const kirjaudu={
  checkPassword: function(korttinumero, callback) {
      return db.query('SELECT PIN, idAsiakas FROM kortti WHERE korttinumero = ?',[korttinumero], callback); 
    }
};
          
module.exports = kirjaudu;