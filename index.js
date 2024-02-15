 //var num1=2;
//var num2=3;
//var num3=9;
//var sum=num1+num2+num3;
//console.log(sum)

//console.log("hello")
//console.log("hii")
//console.clear()
//console.log(num1+num2+num3)  
//var fname='surya';
//   console.log(fname);
var num1=3.345
//var num2=9
//var div=num2/num1
//console.log(div)
//console.log(typeof("a"*10))
//console.log('b' + 4) 
//console.log(0 / 5) 
//console.log(3 * 'a') 
//console.log('a' * 3) 
//console.log('b' + 4) 
//console.log(4 + 'b') 
//console.log(5 - 'c') 
//console.log('c' - 5) 
console.log(num1.toFixed(2))
console.clear()
 console.log(parseInt('44'))
console.log(parseInt('22.222'))
console.log(parseInt('Banana'))
console.log(parseFloat(12))
console.log(parseFloat(13.3))
var num1 = 10;
 console.log(num1.toFixed(2))
var num2 = 15.456789; 
console.log(num2.toFixed())
var num3 = 15.456789; 
console.log(num3.toFixed(2))
var num1 = 15.456789;
 console.log(num1.toFixed(3))
 console.clear()
var s="this is \"javascript\""
console.log(s)
console.log("this is'a'")
console.log('This is another \'test \'string')
console.log('I\'m gonna learn JavaScript')
console.clear()
mys="hii this is surya hii"
console.log(mys.length)
console.log(mys.indexOf("surya"))
console.log(mys.lastIndexOf("hii") )
console.log(mys.slice(0,9))
console.log(mys.substr(4,4))
console.clear()
var mStr = "This is my test string to practice the JavaScript string function concepts.This is gonna be fun."
console.log(mStr.lastIndexOf(".")- mStr.lastIndexOf("This"))
console.log(mStr.substr(12))
console.clear()
console.log(mStr.toUpperCase())
console.log(mStr.concat(mys))
var extra='surya           '
console.log(extra.trim())
console.clear()
console.log(extra.charAt(3))
console.log(mStr.split(' '))
var mNum;
console.log(mNum)
var mNum = null
console.log(mNum)

console.log(undefined == null)
console.log(undefined === null)
console.clear()
if(9<0){
 console.log(true)
}else if(6>7){
  console.log("g")
}else{
    console.log("l")
}
var len=100
var bre=100
if(len==bre){
    console.log("s")
}
var num1=5
var num2=8
var num3=20
if((num1>num2)&&(num1>num3)){
    console.log("1 g")
}else if((num2>num1)&&(num2>num3)){
    console.log("2 g")
}else{
    console.log("3 g")
}
var emarks=45
if(emarks<25){
    console.log("f")
}else if((emarks>=25)&&(emarks<=45)){
    console.log("e")
}else if((emarks>=45)&&(emarks<=50)){
    console.log("d")
}else if((emarks>=50)&&(emarks<=60)){
    console.log("c")
}else if((emarks>=60)&&(emarks<=80)){
    console.log("b")
}else{
    console.log("a")
}
var np=12
var t=np*100
if(t>1000){
    console.log("amount")
    console.log(t-(t*0.1))
}else{
    console.log(t)
}
console.clear() 
var a='e'
switch(a){
    case a:
        console.log("v")
        break;
    case 'e':
        console.log("v") 
        break; 
    case 'i':
        console.log("v")
        break;
    case 'o':
        console.log("v")
        break;
    case 'u':
        console.log("v")
        break;
    default:
        console.log("c")



}
console.clear()
var num1 = 1 + 5;
var num2 = num1 / 4;
var num3 = 1 + 5;
var num4 = num3 / 4;
console.log(num2 + " " + num4);
var a = 1;
var b = 2;
var c;
var d;
c = ++b;
d = a++;
c++;
b++;
++a;
console.log(a + " " + b + " " + c);
s=2
d=s++
console.log(s)
var input = 7;
var output1 = ++input + ++input + ++input;
var output2 = input++ + input++ + input++;
var output3 = input++ + ++input + input++;
console.log(output1 + ' ' + output2 + ' ' + output3);///
console.clear()
//assignment operators
var num = 100;
num += 5 * 10 / 2;
console.log(num)
console.clear()
if('5'!=='4'){
    console.log(true)
}
var a = 10;
var b = 5;
var c = 12;
var e = 8;
var d;
d =parseInt((a * (c - b) / e + (b + c)) <= (e * (c + a) / (b + c) + a));
console.log(d);
if (d == 1){
console.log((a * (c - b) / e + (b + c)));
} else {
console.log((e * (c + a) / (b + c) + a));
}
var n = 2;
var p = 4;
var q = 5;
var w = 3;
if ( !((p * q) /n <= (q * w) + n/p )) {
console.log( ++p + w++ + " " + ++n);
}
else {
    console.log("s")
console.log(--p + q-- + " " + --n);
}
console.clear()
console.log(true + false)
console.log(12 / "6")
console.log("number" + 15 + 3)
console.log(15 + 3 + "number")
console.log(1 > null)
console.log("foo" + + "bar")
console.log('true' == true)
console.log(false == 'false')
console.log(null == '')
console.log(!!'false' == !!'true')
console.clear()
var s=0
console.log(typeof(String(s)))
console.log(String(123))
console.log(String(123))
console.log(String(-12.3))
 console.log(String(null))
 console.log(String(undefined))
 console.log(String(true))
 console.log(String(false))
 console.log(Boolean(''))
 console.log(Boolean('hello'))
 console.log(Boolean(0))
 console.log(Boolean(200))
 console.log(Boolean(-0))
 console.log(Boolean(-200))
 console.log(Boolean(NaN))
 console.log(Boolean(null))
 console.log(Boolean(undefined))
 console.log(Boolean(false))
 console.log(Number(false))
 console.log(Number("n"))
 console.log(Boolean("\n"))
 console.clear() 
 ///Objects 
 ///var cars={
    ///speed:"320",
    ///colour:"blue",
    ///brakes:function(){
        ///setTimeout(function(){
           /// console.log("car stopped")
           /// console.clear()
        ///}/////,1000)
    ////}
 ///}
 ///console.log(cars.brakes())
 console.clear()
 Array= [NaN, 0, 15, false, -22, '',undefined, 47, null,94]
  var name=Array.pop()
console.log(name)
Array.push('3')
console.log(Array)
arr = [1,'a',2,'b',3,'c',6,'d',7,'e',8,'f']
arr.reverse()
console.log(arr)
arr.splice(0,1)
console.log(arr)
arr.splice(1,2,"4","6")
console.log(arr)
arr.splice(1,2)
console.log(arr)
console.clear()

var N=5
var n1=N
var n=18
var n2=n

while(n1!=n2){
    if(n1>n2){
        n1-=n2
    }else{
        n2-=n1
    }
}

console.log((N*n)/n1)
console.clear()
var list=[1,4,5,6,7]
var pos;
for(pos=0;pos<list.length;pos++){
    if(pos%2!==0)
    break
    console.log(list[pos])
}
var v="javascript is cool"
var s=[];
for(pos=0;pos<v.length;pos++){
     s.push(v[pos])
}
console.log(s)    
for(pos=0;pos<s.length;pos++){
    if(s[pos]==='a'){
        s[pos]='4'
        
    } else if(s[pos]==='e') {
        s[pos]='3'} else if(s[pos]==='i'){
             s[pos]='1'}else if(s[pos]==='o'){
                s[pos]='0'
             }else if(s[pos]==='s'){
                s[pos]='5'
             }else {
                continue
             }

         
}
f=''
for(pos=0;pos<s.length;pos++){
    f=f+s[pos]
}
console.log(f)
console.clear()
function hii(a){
    console.log("hello "+a)
}
hii("surya")
var n1=10
function sum(n2){
    total=n1+n2
    console.log(total)
}
sum(90)
c=10
var c;
console.log(c)   
 

 








