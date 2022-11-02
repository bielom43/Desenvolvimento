class Product {
  int code;
  String name;
  double price;
  double discount;

  Product(
      {required this.code,
      required this.name,
      required this.price,
      this.discount = 0});

  double get priceWithDiscount {
    return (1 - discount) * price;
  }
}
