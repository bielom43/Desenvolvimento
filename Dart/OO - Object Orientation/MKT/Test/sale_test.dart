import '../Model/sale.dart';
import '../Model/client.dart';
import '../Model/sale_item.dart';
import '../Model/product.dart';

void main(List<String> args) {
  var sale = Sale(
    client: Client(name: 'Julinho Ricardito', cpf: '321.321.432-19'),
    itens: <SaleItem>[
      SaleItem(
          quantity: 25,
          product: Product(
            code: 1, 
            name: 'Water Dust', 
            price: 9.45, 
            discount: 0.2
            ),
      ),
      SaleItem(
          quantity: 20,
          product: Product(
              code: 23,
              name: 'Hiroshima Nagazaki',
              price: 1000,
              discount: 0.8
              )
      ),
      SaleItem(
          quantity: 12,
          product: Product(
              code: 22,
              name: 'Fish',
              price: 25.32,
              discount: 0.1,
          )
      )
    ]
  );
}
