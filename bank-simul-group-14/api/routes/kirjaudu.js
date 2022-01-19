const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const kirjaudu = require('../models/kirjaudu_model');

router.post('/', 
  function(request, response) {
    if(request.body.korttinumero && request.body.PIN){
      const korttinumero = request.body.korttinumero;
      const PIN = request.body.PIN;
        kirjaudu.checkPassword(korttinumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(PIN,dbResult[0].PIN, function(err,compareResult){
                if(compareResult || PIN == dbResult[0].PIN) {
                  console.log("succes");
                  response.json(dbResult[0].idAsiakas);
                }

                else {
                    console.log("wrong password");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("username or password missing");
      response.send(false);
    }
  }
);

module.exports=router;