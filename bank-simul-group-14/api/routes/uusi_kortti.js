const express = require('express');
const router = express.Router();
const uusi_kortti = require('../models/uusi_kortti_model.js');

router.post('/', 
function(request, response) {
  uusi_kortti.add(request.body, function(err, count) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body); 
    }
  });
});

module.exports = router;