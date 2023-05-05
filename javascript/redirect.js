const prompt = require('prompt-sync')();
let age = prompt("Enter your age ")
    age = Number.parseInt(age)
    if(age > 20 ){
        location.href = "https://www.google.comm"
       
    }
    else {
        alert("sorry, you cann't access the website")
    }