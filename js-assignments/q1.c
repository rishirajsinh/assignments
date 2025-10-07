let subject1 = 85;
let subject2 = 78;
let subject3 = 92;
let subject4 = 66;
let subject5 = 74;

let totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;

let maxMarks = 5 * 100;

let percentage = (totalMarks / maxMarks) * 100;

let grade;

if (percentage >= 90) {
    grade = 'A';
} else if (percentage >= 80) {
    grade = 'B';
} else if (percentage >= 70) {
    grade = 'C';
} else if (percentage >= 60) {
    grade = 'D';
} else {
    grade = 'Fail';
}

console.log("Total Marks: " + totalMarks);
console.log("Percentage: " + percentage + "%");
console.log("Grade: " + grade);
