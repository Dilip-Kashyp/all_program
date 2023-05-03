let a = [1,34222,45,2,66,54,88]
console.log(a.length)
console.log(a)
delete a[0]
delete a[5]
let compare = (a,b)=>{
    return a-b
}
console.log(a.length)
console.log(a)
a.sort(compare)
//a.sort()
console.log(a)
