class Date {
  late int day;
  late int month;
  late int year;

  String give_date() {
    return 'Data: $day/$month/$year';
  }
}

void main(List<String> args) {
  var birth_day = new Date();

  birth_day.day = 19;
  birth_day.month = 12;
  birth_day.year = 1982;

  Date purchase_day = Date();
  purchase_day.day = 12;
  purchase_day.month = 10;
  purchase_day.year = 2022;

  print(birth_day.give_date());
  print(purchase_day.give_date());
}
