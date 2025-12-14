// // 'use strict'
// let num = [1, 2, 3, 4, 6, 4, 6, 3, 2, 1, 0]

// let x = num.filter((ele, temp) => ele ? true : false)
// // console.log(x);


// let transactions = [1000, 3000, -4000, -2000, -800, 3800, -4500];

// const inrtoDollar = 80;

// // transactions = transactions.forEach(ele => ele/inrtoDollar)

// // console.log(transactions.find(ele => ele < 0));
// // console.log(transactions.findIndex(ele => ele > 0));


// const conditionSatisfy = ele => ele > 0;

// // console.log(transactions.some(conditionSatisfy));
// // console.log(transactions.every(conditionSatisfy));

// // console.log(transactions.filter(conditionSatisfy));

// // let result = transactions.reduce((acc, values) => values += acc, 0)
// // let z = () => {
// //     conditionSatisfy
// // }

// // console.log(z);


// let no = [1, 2, 3, 4, 5]
// // console.log(no.reduce((acc, value) => value * acc, 1));


// // let arr = [
// //     { name: "A", age: 14, gender: "M" },
// //     { name: "B", age: 34, gender: "M" },
// //     { name: "C", age: 24, gender: "F" },
// //     { name: "D", age: 44, gender: "F" },
// //     { name: "E", age: 44, gender: "M" },
// //     { name: "I", age: 28, gender: "F" },
// //     { name: "G", age: 36, gender: "M" },
// //     { name: "H", age: 47, gender: "F" }
// // ]

// // const allMales = arr.filter(ele => ele.gender === 'M').map(ele => ele.name)
// // console.log(allMales);


// // console.log(transactions.filter(ele => ele > 0). reduce((acc, value) => value + acc, 0));


// // use strict

// // a = 10;
// // console.log(a);


// function myfun() {
//     console.log(this);
// }
// // myfun();
// // this inside method
// let myobj = {
//     name : 'vishesh',
//     wakeup : function(){
//         console.log(this);
//     }
// }
// // myobj.wakeup();
// // let myobj2 = {
// //     name : 'vijendra',
// //     myfun : function() {
// //         let childFun = function(){
// //             console.log(this);
// //         }
// //         childFun();
// //     }
// // }
// // myfun();
// // myobj2.myfun();
// // console.log(this);


// // function Person(firstName, lastName) {
// //  this.firstName = firstName;
// //  this.lastName = lastName;
// // }
// // const member = new Person('Lydia', 'Hallie');
// // Person.getFullName = function() {

// // return `${this.firstName} ${this.lastName}`;

// // };
// // console.log(member.getFullName());


// Classes in Javascript
function Person(_name, _age) {
    var name = _name
    var age = _age
    this.getName = function () {
        return name;
    }
    // this.setName = function(Gname) {
    //     name = Gname;
    // }
    // this.getAge = function() {
    //     return this.age;
    // }
    // this.setAge = function(Gage) {
    //     age = Gage;
    // }
}

class Teacher extends Person {
    constructor(name, age, subject) {
        super(age, subject)
        this.subject = subject
    }
    x = 'hii'
    myfun() {
        console.log(this);
        console.log('hello');
    }
}


// let vijju = new Person('vijju', 20)
// let vishesh = new Person('vishesh', 20)
// let vijendra = new Person('vijendra', 20)
// // let vijju = new Person('vijendra', 20)
// console.log(vijju, vishesh, vijendra);


let x = new Teacher('vishesh', 20, 'maths')
// x.name = 'steve'
// x.setName('')
// console.log(x.getName());

x = new Person('vishesh', 22)
// console.log(x.getName());


const Avenger = {
    name: "steve",
    age: 102,
    country: 'New York',

    showDetails: function () {
        console.log(`Hello, this is ${this.name}, I am ${this.age} years old. I am from ${this.country}.`)
    }
}



let printDetails = function (age, country) {
    console.log(`Hello, this is ${this}, I am ${age} years old. I am from ${country}.`);
}

// printDetails.call(Avenger, 'Tony', 43, "New York")
printDetails.apply(Avenger, ['Tony', 43, "New York"])
// const person = { name: 'vishesh', age: 22, country: 'USA' }
// Avenger.showDetails.call(person)

const myBind = printDetails.bind('vijendra', 20, "India");
myBind();