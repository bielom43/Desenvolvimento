void main(List<String> args) {
  var notes = [9.5, 4.6, 3.4, 6.4, 6.3];
  var good_notes = [];

  for (var note in notes) {
    if (note >= 6) {
      good_notes.add(note);
    }
  } //function filter

  print(good_notes);
  print(notes);
}
