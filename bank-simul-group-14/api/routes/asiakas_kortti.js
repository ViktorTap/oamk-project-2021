const express = require('express');
const router = express.Router();
const asiakas_kortti = require('../models/asiakas_kortti_model');

router.get('/',
 function(request, response) {
    asiakas_kortti.get(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
 });

module.exports = router;