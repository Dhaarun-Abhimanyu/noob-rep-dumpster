import mongoose from "mongoose";

const sampleuser_schema = new mongoose.Schema({
    name:{type:String},
    password:{type:String}
})

const SAMPLEUSER = mongoose.model('sampleuser' ,sampleuser_schema )

const userdb = (username , password)=>{
    const newuser = new SAMPLEUSER({
        name: username,
        password: password
    })

    newuser.save()
}

export {userdb,SAMPLEUSER}