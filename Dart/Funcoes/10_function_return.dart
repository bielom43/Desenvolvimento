//retornando uma funcao dentro de outra funcao, para casos de valores que tenham sido pre-carregados ja
int Function(int) plus_parcial(int a) {
  int c = 9;
  return (int b) {
    //retornando funcao anonima
    return a + b * c;
  };
}

void main(List<String> args) {
  print(plus_parcial(3)(5));

  var plus_with3 = plus_parcial(
      3); //passando variavel com primeiro parametro, so para casos em que a variavel sera sempre a mesma
  print(plus_with3(
      5)); //utilizando a segunda parte da funcao com a variavel do tipo function que foi criada a partir do primeiro parametro
}
