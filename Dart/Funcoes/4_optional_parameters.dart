import 'dart:math';

void main(List<String> args) {
  int v1 = random_number(100);
  print(v1);

  int v2 = random_number();
  print(v2);

  print_date(10, 12, 2023);
  print_date(31, 01);
  print_date(15);
  // print_date(); esta errado pois nao a nenhum valor e a funcao requer pelo menos um
}

/*Os parametros opcionais podem ser atribuidos entre conchetes 
assim tambem setando um valor padrao caso nao exista nenhum outro*/
int random_number([int max = 52]) {
  return Random().nextInt(max);
}

void print_date(int day, [int month = 1, int year = 1970]) {
  print("$day/$month/$year");
}
