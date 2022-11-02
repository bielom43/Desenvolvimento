import './client.dart';
import './sale_item.dart';

class Sale {
  Client client;
  List<SaleItem> itens;

  Sale({required this.client, this.itens = const []});

  double get totalPrice {
    return itens
        .map((item) => item.price * item.quantity)
        .reduce((total, actual) => total + actual);
  }
}
