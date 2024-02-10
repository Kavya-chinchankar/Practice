const { Console } = require('console');
const http = require('http');

const fs = require('fs');

const port =process.env.PORT || 5000;
// const server = http.createServer((req, res)=>{
//     // console.log(req)
//     console.log(req.url);
//     res.statusCode = 200;
//     res.setHeader('Content-Type' , 'text/html')

//     if(req.url == '/'){
//         res.statusCode = 200;
//         res.end('<h1> This is Kavya</h1> <p> Hey this is the way to rock the world!!!');
//     }
//     else if(req.url == '/about'){
//         res.statusCode = 200;
//         res.end('<h1> This is Kavya</h1> <p> Hey this is the way to rock the world!!!');
//     }
//     else{
//         res.statusCode = 400;
//         res.end('<h1> NOT FOUND</h1> <p> THIS PAGE IS NOT FOUNDs!!!');


//     }
   
// });


const server = http.createServer((req, res)=>{
    // console.log(req)
    console.log(req.url);
    res.statusCode = 200;
    res.setHeader('Content-Type' , 'text/html')

    if(req.url == '/hello'){
        res.statusCode = 200;
        res.end('<h1> This is Kavya</h1> <p>rock the world!!!');
    }
    else if(req.url == '/about'){
        res.statusCode = 200;
        res.end('<h1> This is Kavya</h1> <p> Hey this is the way to rock the world!!!');
    }
    else if(req.url == '/'){
        res.statusCode = 200;
        const data = fs.readFileSync('index.html');
        res.end(data.toString());
    }
    else{
        res.statusCode = 400;
        res.end('<h1> NOT FOUND</h1> <p> THIS PAGE IS NOT FOUNDs!!!');
    }
   
});


server.listen(port, () =>{

    console.log(`Server is listning on the port ${port}`)

});