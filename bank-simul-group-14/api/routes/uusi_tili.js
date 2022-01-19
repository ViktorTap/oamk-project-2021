const express = require('express');
const router = express.Router();
const uusi_tili = require('../models/uusi_tili_model.js');

router.post('/', 
function(request, response) {
  uusi_tili.add(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body); 
    }
  });
});

module.exports = router;