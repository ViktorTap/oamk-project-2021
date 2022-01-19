const db = require('../database');

const pankki = {

    debit: function(postData, callback){
        return db.query('call debit_siirto(?,?,?)',
        [postData.id1, postData.id2, postData.summa],
        callback);
    },
    credit: function(postData, callback){
        return db.query('call credit_siirto(?,?,?)',
        [postData.id1, postData.id2, postData.summa],
        callback);
    },
    laina: function(postData, callback){
        return db.query('call hae_laina(?,?)',
        [postData.id1, postData.summa],
        callback);
    },
    nosto: function(postData, callback){
        return db.query('call oma_nosto(?,?)',
        [postData.id1, postData.summa],
        callback);
    },
    talletus: function(postData, callback){
        return db.query('call oma_talletus(?,?)',
        [postData.id1, postData.summa],
        callback);
    }
};

module.exports = pankki;