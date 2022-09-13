void main(List<String> args) {
  var multiplicacao = (int a, int b) => {a * b};

  var adicao = (int a, int b) => /*arrow*/ a + b;
  var divisao = (int a, int b) => /*arrow*/ a / b;
  var subtracao = (int a, int b) => /*arrow*/ a - b;

  print(multiplicacao(23, 2));
  print(adicao(22, 54));
  print(subtracao(22, 54));
  print(divisao(22, 54));
}
