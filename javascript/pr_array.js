const prompt = require('prompt-sync')();
let arr = [23,45,76,56]
let a 
do{
    a = prompt("Enter the number ")
    a = Number.parseInt(a)
    arr.push(a)    
}while(a!=0)
console.log(arr) 