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
/* Assignment operators include =,+=, -= , *= , %= , **= */
let a=5;
let b=2;
a += 4; //a=a+4
console.log("a=",a); //9
a -= 4; //a=a-4
console.log("a=",a); //1
a *= 4; //a=a*4
console.log("a=",a); //20
a /= 4; //a=a/4
console.log("a=",a); //1.25
a %= 4; //a=a%4
console.log("a=",a); //1
a **= 4; //a=a**4
console.log("a=",a); //625


