// ignore_for_file: unused_local_variable

import 'dart:io';

main() {
  stdout.write("Está chovendo? (s/N)");
  bool estaChovendo = stdin.readLineSync() == "s";

  stdout.write("Está frio? (s/N)");
  bool estaFrio = stdin.readLineSync() == "s";

  String resultado = estaChovendo && estaFrio ?/*Operador que indica inicio a operacao ternaria */ "Ficar em casa"/*Se true fara isso */ : "Sair!!!"/*Se false fara isso */;//Operacao ternaria
  print(resultado);
  print(estaChovendo && estaFrio ? "Azarado!" : "Sortudo!");
}
