void main(List<String> args) {
  var Student = [
    {'Name': 'Junior', 'Points': 9.4},
    {'Name': 'Carlos', 'Points': 6.4},
    {'Name': 'Vinicius', 'Points': 2.4},
    {'Name': 'Marcelo', 'Points': 9.9},
    {'Name': 'Bianca', 'Points': 5.4},
    {'Name': 'Angelo', 'Points': 10},
  ];

  String Function(Map) take_name = (student) => student['Name'];
  int Function(String) letters_length = (letters) => letters.length;

  var name = Student.map(take_name);
  var letters_quantity = name.map(letters_length);

  // var letters_quantity = Student
  // .map(take_name)
  // .map(letters_length);

  print(letters_quantity);
  print(name);
}
