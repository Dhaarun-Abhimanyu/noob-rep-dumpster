import mongoose from 'mongoose'

function connection(DATABASE_URL){
    mongoose.connect(DATABASE_URL).then(()=>console.log("Database Connected")).catch((error)=>console.log(error))
}

export default connection