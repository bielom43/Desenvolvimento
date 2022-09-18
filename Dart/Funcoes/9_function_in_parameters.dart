int execute(int qtd, String Function(String) fn, String value) {
  String txt = '';

  for (int i = 0; i < qtd; i++) {
    txt += fn(value);
  }
  return txt.length;
}

void main(List<String> args) {
  var my_print = (String value) {
    print(value);
    return value;
  };

  int height = execute(20, my_print, 'Salve!');
  print('Quantidade de caracteres: $height');
}
