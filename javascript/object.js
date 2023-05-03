let obj = {
    harry : 98,
    rohan : 70,
    lovish : 65,
    monika : 4
  }
//   for(let i=0;i<Object.keys(obj).length;i++){    
//     console.log("mark of " + Object.keys(obj)[i] + " are " + obj[Object.keys(obj)[i]])
//   }
//  slove by foe in loops 
for( keys in obj ){
    console.log("T,he marks of " + keys + " is " + obj[keys])
}