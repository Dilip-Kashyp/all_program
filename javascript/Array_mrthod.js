let a = [45,56,34,23,78]
let b = [23,56,78,98,34]
let c = a.concat(b) // use to joint two or more array
//console.log(c)

b.push(45)
 
// way to sorting array 
let com = (a,b) =>{
    return a-b 
}
b.sort(com)

console.log(b)