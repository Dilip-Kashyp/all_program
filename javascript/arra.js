let a = [34,56,34,23,76,88,]
console.log(a)

let b = a.toString()
console.log(b)

let c = a.join("_")
console.log(c)

//a.pop()// it remove a item from end
let p = a.pop() // it return poped item 
console.log(p)
console.log(a)

a.push(55)
console.log( a)

//a.shift() // it remove a item from begning
let s = a.shift() // it return shifted item 
console.log(s)

a.unshift(50) // it add a item from begning
console.log(a)
