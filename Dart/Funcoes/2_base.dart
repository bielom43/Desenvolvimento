import 'dart:math';

main() {
  int resultado = somar(2, 3);
  resultado *= 2;

  print("O dobro do resultado é $resultado");

  print("O resultado é ${somarNumerosAleatorios()}");
}

//Retornando valores com tipos utilizando funcoes
int somar(int a, int b) {
  return a + b;
}

int somarNumerosAleatorios() {
  int a = Random().nextInt(100);
  int b = Random().nextInt(100);
  return a + b;
}
