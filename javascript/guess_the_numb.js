const prompt = require('prompt-sync')();
let x = Math.floor((Math.random() * 100) + 1);
let c = 1
let a = prompt("Guess the Number between 1 to 100 ")
a = Number.parseInt(a);

do{
  c = c + 1
  if(x>a){
  a = prompt("Your Guess is smaller  Guess the greater number  ")
  a = Number.parseInt(a);
  }
    
  else
  a = prompt("Your Guess is greater   Guess the smaller number")
  a = Number.parseInt(a);
    
}while(a!=x)

console.log("You Guess the right Number in " + c +" Attempt")

