//Valr generico chamado object que vai cobrir todos os tipos dentro da linguagem dart
//porem ainda nao torna esta uma funcao do tipo generic
Object second_elementv1(List list) {
  return list.length >= 2 ? list[1] : null;
}

//definindo o tipo generico em uma funcao e fazendo com que ela retorne este tipo
G? second_elementv2<G>(List<G> list) {
  return list.length >= 2 ? list[1] : null;
}

void main(List<String> args) {
  var list = [4, 45, 23, 12, 42323, 1, 23, 3];

  print(second_elementv1(list));
  print(second_elementv2(list));
  //nao necessariamente e necessario dizer o tipo que deve ser recebido(<int>), o proprio dart consegue inferir isto
  print(second_elementv2<int>(list));
}
