import 'dart:math';

void execute({Function? fn_Par, Function? fn_Impar}) {
  var value_random = Random().nextInt(20);

  print("O valor que foi escolhido desta vez foi: $value_random \n");

  value_random % 2 == 0 ? fn_Par!() : fn_Impar!(); //Operador ternario '?'
}

void main(List<String> args) {
  var Par_fn = () => print('Valor Par!');
  var Imp_fn = () => print('Valor Impar!');

  execute(fn_Par: Par_fn, fn_Impar: Imp_fn);
}
