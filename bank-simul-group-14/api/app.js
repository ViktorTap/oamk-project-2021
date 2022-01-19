var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');
var app = express();

app.use(helmet());
app.use(cors());
const dotenv = require('dotenv');
dotenv.config();
const basicAuth = require('express-basic-auth');
app.use(basicAuth( { authorizer: myAuthorizer, authorizeAsync:true, } ))

function myAuthorizer(username, password, cb){
    if(username===process.env.authUser && password ===process.env.authPass){
        return cb(null, true);
    }
    else{
        return cb(null, false);
    }
}

var bookRouter = require('./routes/book');
var borrowerRouter = require('./routes/borrower');
var userRouter = require('./routes/user');
var loginRouter = require('./routes/login');
var bankRouter = require('./routes/bank');

var uusiKorttiRouter = require('./routes/uusi_kortti')
var asiakasRouter = require('./routes/asiakas');
var asiakasKorttiRouter = require('./routes/asiakas_kortti');
var uusiTiliRouter = require('./routes/uusi_tili');
var asiakasTiedotRouter = require('./routes/asiakas_tiedot');
var pankkiRouter = require('./routes/pankki');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');
var kirjauduRouter = require('./routes/kirjaudu');

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/book', bookRouter);
app.use('/borrower', borrowerRouter);
app.use('/user', userRouter);
app.use('/login', loginRouter);
app.use('/bank', bankRouter);

app.use('/uusi_kortti', uusiKorttiRouter);
app.use('/asiakas', asiakasRouter);
app.use('/asiakas_kortti', asiakasKorttiRouter);
app.use('/uusi_tili', uusiTiliRouter);
app.use('/asiakas_tiedot', asiakasTiedotRouter);
app.use('/pankki', pankkiRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/kirjaudu', kirjauduRouter);

module.exports = app;
