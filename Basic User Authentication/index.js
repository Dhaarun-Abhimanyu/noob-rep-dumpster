import express from 'express'

import connection from './db/connectdb.js';

import {userdb,SAMPLEUSER} from './models/sampleuser.js';

import bcrypt from 'bcrypt';


const app = express();

app.use(express.urlencoded({extended:false}))

app.use(express.json())

const PORT =process.env.PORT || 5000;

const DATABASE_URL = process.env.DATABASE_URL || 'mongodb://localhost:27017/sampleuser';

connection(DATABASE_URL)

app.post('/login',async (req,res)=>{
    const users = SAMPLEUSER.find()
    ;(await users).forEach((user) => {
        if(req.body.name == user.name){
            if(bcrypt.compare(req.body.password , user.password)){
                res.send('Logged in successfully')
            }
            else{
                res.send('Enter correct password')
            }
        }
        
    });


    
})

app.post('/register',async (req,res)=>{

    const hashedpassword = await bcrypt.hash(req.body.password,10)
    try{
        userdb(req.body.name , hashedpassword)
        res.send('user registered successfully')

    }catch(error){
        console.log(error)


    }

})






app.listen(PORT,()=>console.log('Server is running'))