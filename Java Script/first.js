const student = {
    fullName: "Gurdit Singh",
    Class: "BCA",
    age: "19",
    Cgpa: "8.87",
    isPass: "true",
};
student["name"]="Gurdit Dhiman";
console.log(student["fullName"]);
console.log(student.age);

const profile = {
    username: "@thecsestudent",
    isFollow: false,
    followers: 104,
    following: 70,
    posts: 16,
};
console.log (profile);
console.log (typeof profile);
console.log (typeof profile["username"]);

//This is a single line comment
/*This is a code that prints
hello world on our window*/
console.log("hello world!");
/*Arithmeuc operators are of addition, substract, multiplication,
 divison, modulus % , exponentiation **, increment, decrement*/

 //Arithmetic Operators
 /*let a=5;
 let b=2;
 //let c=a+b; it can also be a option
 console.log ("a=",a, "&b=",b);
 console.log("a+b=",a+b);
 console.log ("a-b",a-b);
 console.log ("a*b",a*b);
 console.log ("a/b",a/b);
 console.log ("a%b",a%b);
 console.log ("a**b",a**b);
 // Increment and Decrement Operator 
 //a=a+1;
 a++; //shortcut of increment operator
 console.log ("a=",a); //6
 a=a-1; //shortcut of decrement operator
 console.log ("a=",a); //4
// Post & pre increment and decrement operator
console.log("++a=",++a); //pre increment
console.log ("a++=",a++);
console.log("a=",a); // 7
console.log("--a=",--a); //pre decrement 6 
console.log ("a--=",a--); //6
console.log("a=",a); //5
*/
/* Assignment operators include =,+=, -= , *= , %= , **= 
let a=5;
let b=2;
a += 4; //a=a+4
console.log("a=",a); //9
a -= 4; //a=a-4
console.log("a=",a); //1 but 5
a *= 4; //a=a*4
console.log("a=",a); //20
a /= 4; //a=a/4
console.log("a=",a); //1.25 but 5
a %= 4; //a=a%4
console.log("a=",a); //1
a **= 4; //a=a**4
console.log("a=",a); //625 but 1
*/
/*Comparison operators include equal to == ,not equal to != , equal to & type === ,
not equal to & type !== 
let a=5;
let b=2;
console.log ("a==b",a==b);
console.log ("a!=b",a!=b);
let c="5";
console.log ("a==c",a==c); // converts string to number here for comparison
console.log ("a===c",a===c);
console.log ("a!==c",a!==c);

//Also > greater than, >= , < ,<=
let d=3;
console.log ("a>d",a>d); //true
console.log ("a<d",a<d); //false
console.log ("a>=d",a>=d); //true
console.log ("a<=d",a<=d); //false*/

// Logical Operators
//Logical And (&&)
let a=8;
let b=12;
let c=15;
let cond1= a<b; true
let cond2= a<=b; true
let cond3= a>=c; false
console.log ("cond1 && cond2",cond1 && cond2); //true
/*console.log ("cond1 && cond2 && cond3",cond1 && cond2 || cond3); false
console.log ("cond1 && cond2",cond1 && cond3); //false -# lines of code to 1 line code:*/
console.log("cond1 && cond3",a<b && a>=c); // true false - false

// Logical OR ||
let d=6;
let e=5;
console.log ("cond1 || cond2",d>e || d<=e); //true false -- true
// LOgical NOT !

let f=9;
let g=11;
console.log ("cond 1 || cond 2",!(f<g)); //true --false

// Conditional Statements
let age=27;
if (age<18) {
    console.log("You can not vote this time!")
}
if (age>18) {
    console.log ("You can vote this time!")
}

// If else statement
// odd or even
let num=8;
if (num%2 === 0) {
console.log (num,"is even") 
} else
 {
    console.log (num,"is odd");

 }
 













