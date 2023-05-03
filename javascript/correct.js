const prompt = require('prompt-sync')();
let i 
let cr = 50
while(i!=cr){
 i = prompt("Enter a number ")
  if(i!=cr){
    console.log("You enter wrong number pls try again")
  }
  else {
    console.log("You enter correct number ")
  }
    
}