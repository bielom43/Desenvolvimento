import 'dart:math';

class Car {
  final int maxSpeed;
  int actualSpeed = 0;

  Car([this.maxSpeed = 100]);

  int SpeedUp() {
    if (actualSpeed + 5 >= maxSpeed) {
      actualSpeed = maxSpeed;
    } else {
      actualSpeed += 5;
    }
    return actualSpeed;
  }

  int brake() {
    if (actualSpeed - 5 <= 0) {
      actualSpeed = 0;
    } else {
      actualSpeed -= 5;
    }
    return actualSpeed;
  }

  bool onLimit() {
    return actualSpeed == maxSpeed;
  }

  bool isStopped() {
    return actualSpeed == 0;
  }
}
