import 'dart:io';

void main(List<String> args) {
  var entrada_usuario = '';

  while (entrada_usuario != 'sair') {
    //Diferente do print o stdout(Standar output) permite ao usuario digitar na mesma linha
    stdout.write('Digite algo ou sair: ');
    entrada_usuario = stdin.readLineSync().toString();
  }

  print('Finished!');
}
