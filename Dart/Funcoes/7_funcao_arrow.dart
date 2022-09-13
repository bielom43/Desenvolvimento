void main(List<String> args) {
  var multiplicacao = (int a, int b) {
    return a * b;
  };

  print(multiplicacao(23, 2));

  var adicao = (int a, int b) => /*arrow*/ a + b;

  print(adicao(22, 54));
}
