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