//biblioteca apenas para utilizacao de simular numero aleatorio
import 'dart:math';

void main(List<String> args) {
  //Geracao de numero randomico
  var nota = Random().nextInt(10);

  //utilizada interpolacao para colocar valor da variavel sem concatenacao
  print("Nota selecionada foi $nota.");

  if (nota >= 7) {
    print('Aprovado!');
    print('Fim!');
  } else if (nota >= 5) {
    print('Recuperacao!');
  } else {
    print('Reprovado!');
    print('Fim!');
  }
}
