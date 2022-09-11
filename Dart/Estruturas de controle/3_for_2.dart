void main(List<String> args) {
  Map<String, double> temperatura = {
    'Sao Paulo': 25.6,
    'Rio de Janeiro': 37,
    'Alagoas': 23.5,
    'Goias': 30.9,
    'Joao Pessoa': 25.6,
  };

  for (String temp in temperatura.keys) {
    print("Faz ${temperatura[temp]} celsius em : $temp.");
  }

  print("");
  print("");

  for (var cidade in temperatura.entries) {
    print("A cidade ${cidade.key} esta com ${cidade.value} de graus celsius.");
  }
}
