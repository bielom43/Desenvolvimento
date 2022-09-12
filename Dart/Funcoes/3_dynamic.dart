main() {
  juntar(1, 9);
  juntar('Bom ', 'dia!!!');
  var resultado = juntar('O valor de PI é ', 3.1415);
  print(resultado.toUpperCase());
}

//O tipo dinamico atribui ou inferi o tipo de acordo aquilo que recebe.
//Assim como qualquer outro tipo pode fazer parte de qualquer variavel ou metodo que o utilize
String juntar(dynamic a, b) {
  print(a.toString() + b.toString());
  return a.toString() + b.toString();
}
