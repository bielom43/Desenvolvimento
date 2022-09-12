import 'dart:io';
import 'dart:math';

void main(List<String> args) {
  stdout.write('Digite o primeiro valor da soma: ');
  var V1 = int.parse(stdin.readLineSync().toString());

  stdout.write('Digite o segundo valor da soma: ');
  var V2 = int.parse(stdin.readLineSync().toString());

  soma_com_print(V1, V2);

  soma_random();
}

void soma_com_print(int a, int b) {
  print(a + b);
}

void soma_random() {
  int n1 = Random().nextInt(100);
  int n2 = Random().nextInt(100);

  print('Os dois valores aleatorios sao $n1 e $n2');

  print(n1 + n2);
}
