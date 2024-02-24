
const express = require('express')
const path =require('path');
const app = express()
const port = 3000

app.get('/', (req, res) => {
    // res.status(500 )
    res.sendFile(path.join(__dirname,'index.html'))
    // res.json({"kavya":34})
})

app.get('/about', (req, res) => {
    res.send('Hello Im Kavya')
  })

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})