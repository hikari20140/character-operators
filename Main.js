process.stdin.resume();
process.stdin.setEncoding('utf8');
// Your code here!
function plas(x, y){
    var num = x + y;
    return num;
}
function minus(x, y){
    var num = x - y;
    return num;
}
function puton(x, y){
    var num = x * y;
    return num;
}
function divide(x, y){
    var num = x / y;
    return num;
}
console.log(plas(10, 10));
console.log(minus(20, 10));
console.log(puton(10, 10));
console.log(divide(100, 10));
