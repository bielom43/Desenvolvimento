void main(List<String> args) {
  for (int a = 1; a <= 20; a++) {
    print("Este laco eh o de numero $a");
  }

  print("");

  for (int a = 100; a >= 0; a -= 4) {
    print("Este laco eh o de numero $a");
  }

  print("");

  var list_nomes = ['Julio', 'Jao', 'BILL', 'Vinicius'];
  for (var i = 0; i < list_nomes.length; i++) {
    print('Nome ${i + 1}: ${list_nomes.elementAt(i)} .');
  }

  print("");

  //for in

  var numbers = [8.67, 342.34, 343.23, 231.32, 2334.33];

  for (var number in numbers) {
    print("O numero eh $numbers");
  }
}
