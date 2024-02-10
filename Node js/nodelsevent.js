const EventEmitter = require('node:events');

class MyEmitter extends EventEmitter {}

const myEmitter = new MyEmitter();
myEmitter.on('waterfull', () => {
  console.log('please trun off the motar');
  setTimeout(() =>{
    console.log('please trun off the motar!! its an gentelremainder');
  }, 3000);
});

console.log("The script is still running!!")

myEmitter.emit('waterfull');
//myEmitter.emit('event');

