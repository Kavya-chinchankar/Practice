const express = require('express')
const path =require('path')

const blogs = require('../data/blogs')

const router = express.Router()

router.get('/',(req,res) => {
    // res.sendFile(path.join(__dirname,'../templates/index.html'))

    res.render('../views/home');

})

router.get('/blog',(req,res) => {
    // blogs.forEach(e => {
    //     console.log(e.title)
    // });

    // res.sendFile(path.join(__dirname,'../templates/blogHome.html'))

    // res.render('blogHome',); // direct 

    res.render('blogHome',{
        blogs:blogs
    })
})

router.get('/blogspost/:slug',(req,res) => {

    // console.log(req.params.slug)
    myBlog = blogs.filter((e)=> {
        return  e.slug == req.params.slug
    })
    console.log(myBlog)
    // res.sendFile(path.join(__dirname,'../templates/blogpage.html'))

    res.render('blogpage',{
        title:myBlog[0].title,
        content:myBlog[0].content
    })

})

module.exports = router
