
const express = require('express')
const path =require('path');
const app = express()
const port = 3000

app.use(express.static(path.join(__dirname,"public")))

app.get('/hello', (req, res) => {
    // res.status(500 )
    res.sendFile(path.join(__dirname,'index.html'))
    // res.json({"kavya":34})
})

app.get('/about', (req, res) => {
    res.send('Hello Im Kavya')
  })


// app.get('/name', (req, res) => {
//     res.send('Hello, Im Kavya ');
// });

// app.get('/name/:name', (req, res) => {
//     res.send(`Hello, I'm Kavya ${req.params.name}`);
// });

app.get('/name/:name', (req, res) => {
    res.send(`Hello, I'm Kavya` + req.params.name);
});


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})