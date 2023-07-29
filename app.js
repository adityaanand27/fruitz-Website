const express = require("express");
const path = require("path");
const fs = require("fs");
const app = express();
const port =80;
const mongoose = require('mongoose');

main().catch(err => console.log(err));

async function main() {
  await mongoose.connect('mongodb://127.0.0.1:27017/contactpage');

  // use `await mongoose.connect('mongodb://user:password@127.0.0.1:27017/test');` if your database has auth enabled
}
const contactSchema = new mongoose.Schema({
    your: String,
    phone: String,
    email: String,
    address: String,
    number:String
  });

const Contact = mongoose.model('Contact', contactSchema);
//express stuff
app.use('/Static',express.static('static'))
app.use(express.urlencoded())
app.set('view engine', 'pug') // Set the template engine as pug
app.set('Views', path.join(__dirname, 'Views')) // Set the views directory
app.get('/', (req, res)=>{
    const params = {'title': 'Welcome to fruitZ'}
     res.status(200).render('home.pug', params);
})
app.get('/Contact', (req, res)=>{
   const params = {'title': 'Welcome to fruitZ Contact'}
    res.status(200).render('contact.pug', params);
})
/*app.post('/Contact', (req, res)=>{
    your = req.body.your
    phone = req.body.phone
    email = req.body.email
    address = req.body.address
    number = req.body.number
    console.log(req.body)
    //This is used to be last to store and produce this file any external .txt file
    let outputToWrite = `the name of the client is ${your} ,His phone no is ${phone} ,email id is ${email},Address is ${address} and membership id is ${number}`
    fs.writeFileSync('output.txt', outputToWrite)
    const params = {'message': 'Your form has been submitted successfully'}
    res.status(200).render('contact.pug', params);
    let show=document.getElementsByClassName('myForm').innerHTML=params
    console.log(params);
})*/
app.post('/Contact',(req,res)=>{
    var myData = new Contact(req.body);
    myData.save().then(() =>{
        res.send("This item is been saved to the database")}).catch(() =>{
            res.status(400).send("Item not saves")
        })


    }
)
// START THE SERVER//It is finally serving contact.pug as the final post page of the server
//The results of the input response is storing at folder name output.txt 
//For storing more number of responses,we have to store it in a file
//use---->  app.use(express.urlencoded())
app.listen(port, ()=>{
    console.log(`The application started successfully on port ${port}`);
})