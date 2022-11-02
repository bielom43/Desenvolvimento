import '../Model/sale.dart';
import '../Model/client.dart';
import '../Model/sale_item.dart';
import '../Model/product.dart';

void main(List<String> args) {
  var sale = Sale(
    client: Client(name: 'Julinho Ricardito', cpf: '321.321.432-19'),
    itens: <SaleItem>[
      SaleItem(
          quantity: 30,
          product: Product(
            code: 1, 
            name: 'Water Dust', 
            price: 6.0, 
            discount: 0.5
            ),
      ),
      SaleItem(
          quantity: 20,
          product: Product(
              code: 23,
              name: 'Hiroshima Nagazaki',
              price: 20.00,
              discount: 0.25
              )
      ),
      SaleItem(
          quantity: 100,
          product: Product(
              code: 22,
              name: 'Fish',
              price: 2.00,
              discount: 0.5,
          )
      )
    ]
  );

  print("Total value for this sale is: ${sale.totalPrice}");
}
