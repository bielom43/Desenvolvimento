// ignore_for_file: unused_local_variable
import 'dart:io';

void main() {
  /*Area da circunferencia = PI * raio * raio */
  const PI = 3.1415;

  

  stdout.write(
      "Informe o tamanho do raio: "); /*Para impressoes sem quebra de linha*/
  final userEntry = stdin.readLineSync();
  final raio = double.parse(userEntry.toString()); /*final (constante) */

  final area = PI * raio * raio;

  /*Usar final em todos os valores nao alterados durante o programa e bom porem
  deixa o programa mais lento por ser em tempo de runtime */

  /*Diferenca de const e final: CONST utilizada para quando pode ser definido
  em tempo de compilacao e FINAL para em tempo de runtime(tempo de execucao)*/

  print("O valor do raio e: " + area.toString());
}


