const prompt = require('prompt-sync')();

let run_again = true
const can_drive = (age) => {
    return age >= 18 ? true : false
}

while (run_again) {
    let age = prompt("Enter your age ")
    age = Number.parseInt(age)
    if(age < 0 ){
        console.error("Please enter valued name");
        break ;
    }


    if (can_drive(age)) {
        alert("You can drive")
    }
    else {
        alert("Sorry , You cann't drive ")
    }


    run_again = confirm("Do you want to check again ")

}