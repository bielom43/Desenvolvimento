import 'dart:io';
import 'dart:math';

void main(List<String> args) {
  var nota = Random().nextInt(11);
  print('A nota final foi $nota.');

  switch (nota) {
    case 10:
    case 9:
      print('Tinha que ser o fio do BILL!');
      break;
    default:
      print('Nota muito baixa');
  }

  print('Finish!');
}
