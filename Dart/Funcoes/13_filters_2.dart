import '4_optional_parameters.dart';

void main(List<String> args) {
  var notes_v = [8.9, 4.2, 6.7, 4.7, 4.3, 7.5, 8.5, 7.7];

  bool Function(double) good_notesFn = (double note) => note >= 7;

  var good_notes = notes_v.where(good_notesFn);

  print(good_notes);
}
