const prompt = require('prompt-sync')();
let age = prompt("Enter your age ")
age = Number.parseInt(age)

let run_again = true

while (run_again) {

    const can_drive = (age) => {
        return age >= 18 ? true : false
    }

    if (can_drive(age)) {
        alert("You can drive")
    }
    else {
        alert("Sorry , You cann't drive ")
    }

    run_again = confirm("Do you want to check again ")

}