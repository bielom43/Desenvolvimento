import 'dart:io';
import 'dart:math';

void main(List<String> args) {
  int v1 = randomnumber(100);
  print(v1);

  int v2 = randomnumber();
  print(v2);
}

int randomnumber([int max = 52]) {
  return Random().nextInt(max);
}
