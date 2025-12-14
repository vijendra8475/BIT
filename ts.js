const fs = require('fs')
let fun = async() => {
    const fd = fs.readFile('ts.txt', 'utf-8');
    const fd2 = fs.readFile('ts2.txt', 'utf-8');
    console.log('file 1 data -> ' + fd);
    console.log('file 2 data -> ' + fd2);
}
fun();
console.log('End of code');