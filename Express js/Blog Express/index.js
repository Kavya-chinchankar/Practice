const express = require('express')
const { engine } = require('express-handlebars');

const path =require('path');
const app = express()
const port = 3000

app.set('views', path.join(__dirname, 'views'));

app.engine('.hbs', engine({extname: '.hbs'}));
app.set('view engine', '.hbs');

app.use(express.static(path.join(__dirname,"static")))
app.use('/',require(path.join(__dirname,'routes/blog.js')))

app.listen(port, () => {
  console.log(`Blog app listening on port ${port}`)
})