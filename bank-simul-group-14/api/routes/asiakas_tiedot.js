const express = require('express');
const router = express.Router();
const asiakas_tiedot = require('../models/asiakas_tiedot_model');

// router.get('/',
//  function(request, response) {
//     asiakas_tiedot.get(function(err, dbResult) {
//       if (err) {
//         response.json(err);
//       } else {
//         response.json(dbResult);
//       }
//     });
//  });

 router.get('/:id?',
 function(request, response) {
  if (request.params.id) {
    asiakas_tiedot.getById(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
        //response.json(dbResult[0].username);
        //response.send(dbResult[0].username);
      }
    });
  } else {
    asiakas_tiedot.get(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});

module.exports = router;