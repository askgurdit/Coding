// Write a code which can give grades to students according to their scores.
/* let grade= prompt ("Enter your scores!")
if(grade==100 || grade>=90) {
console.log (grade, "Congrats!,Your grade is A");
} 
else if (grade===89 || grade>=70) {
    console.log (grade, "Your grade is B");
}
else if (grade===69 || grade>=60) {
    console.log (grade, "Your grade is C");
} 
else if (grade===59 || grade>=50) {
    console.log (grade, "Your grade is D");
} 
else if (grade===9 || grade>=0) {
    console.log (grade, "Your grade is E");
}  
// Not the efficent way
*/
let score=prompt ("Enter your scores");
let grades;
if (score>=90 && score<=100) {
    grades = "A";
}
else if (score>=70 && score<=89) {
    grades = "B";
}
if (score>=60 && score<=69) {
    grades = "C";
}
if (score>=50 && score<=59) {
    grades = "D";
}
if (score>=0 && score<=49) {
    grades = "F";
}

console.log("according to your scores, your grades was : ", grades);
