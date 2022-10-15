List<G> filterr<G>(List<G> list, bool Function(G) fn) {
  List<G> filtered_List = [];

  for (G element in list) {
    if (fn(element)) {
      filtered_List.add(element);
    }
  }

  return filtered_List;
}

void main(List<String> args) {
  var notes = [8.8, 7.4, 7.6, 9.8, 3.6, 7.5];
  var just_high = filterr<double>(notes, (double note) => note >= 7.5);
  var just_lower = filterr(notes, (double note) => note < 7.5);

  print(just_high);
  print(just_lower);
}
