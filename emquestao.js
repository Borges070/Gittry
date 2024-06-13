var a = parseFloat(prompt("Informe A"))
var b = parseFloat(prompt("Informe B"))
var c = parseFloat(prompt("Informe C"))
var resul

var valore = [c,b,a]

if(a < b + c && b <a +c && c <a+b){
if(a == b && a == c){
    resul.innerText("triangulo equilátero\n triangulo acutangulo")
}
else if(a == b && b != c){
    resul.innerText("triangulo isosceles\n triangulo escaleno")
    
}
else if( a != b && b != c){
    resul.innerText("triangulo ")
}



}
else{
    alert("Esse não é um triangulo")
}