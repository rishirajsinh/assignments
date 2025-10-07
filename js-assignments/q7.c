
let marks = 88;       
let income = 250000;  
let message;

if (marks >= 85 && income < 300000) {
  message = "Full Scholarship";
} else if (marks >= 70 && income < 500000) {
  message = "Half Scholarship";
} else {
  message = "Not eligible for scholarship";
}

console.log(message);
