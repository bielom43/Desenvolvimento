class Car {
  final int maxSpeed;
  int _actualSpeed = 0;

  Car([this.maxSpeed = 100]);

  int get actualSpeed {
    return this._actualSpeed;
  } // < - Get metod for private actualSpeed information

  void set actualSpeed(int newSpeed) {
    // if (newSpeed <= maxSpeed) {
    //   this._actualSpeed = newSpeed;
    // } else {
    //   print("Invalid value!!\n Cause maximum speed is $maxSpeed .");
    // }
    bool vlid = (_actualSpeed - newSpeed).abs() <= 5;

    if (vlid && newSpeed > 0) {
      this._actualSpeed = newSpeed;
    }
  }

  int SpeedUp() {
    if (_actualSpeed + 5 >= maxSpeed) {
      _actualSpeed = maxSpeed;
    } else {
      _actualSpeed += 5;
    }
    return _actualSpeed;
  }

  int brake() {
    if (_actualSpeed - 5 <= 0) {
      _actualSpeed = 0;
    } else {
      _actualSpeed -= 5;
    }
    return _actualSpeed;
  }

  bool onLimit() {
    return _actualSpeed == maxSpeed;
  }

  bool isStopped() {
    return _actualSpeed == 0;
  }
}
