void main(List<String> args) {
  nome_idade(nome: "Ryan", idade: 55);
  nome_idade(idade: 102, nome: "Eliza");
}

nome_idade({String? nome, int? idade}) {
  print("$nome tem $idade anos.");
}
