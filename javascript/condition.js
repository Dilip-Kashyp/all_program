const prompt = require('prompt-sync')();
let a = prompt("Enter  your age");
a = Number.parseInt(a);
//console.log(typeof a );
if(a>0){
    alert("This is valid age ");
}
else{
    alert("This is not a valid age ")
}