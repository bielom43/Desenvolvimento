import '../model/2_car.dart';

main() {
  var firstCar = new Car(320); // <= (maximum speed)

  while (!firstCar.onLimit()) {
    print("Actual speed is: ${firstCar.SpeedUp()} Km/h.");
  }

  print("car at maximum speed: ${firstCar.actualSpeed} Km/h");

  while (!firstCar.isStopped()) {
    print("Actual speed is: ${firstCar.brake()} Km/h.");
  }

  print("car is stopped at actual speed: ${firstCar.actualSpeed} Km/h");
}
