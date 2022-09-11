// ignore_for_file: unused_local_variable

/*
    - List
    - Set 
    - Map

*/

import 'dart:io';


void main(List<String> args) {
  
    var festa = ['Gabriel', 'Thiago', 'Kellvin', 'Pedro', 'Vancan'];
    print(festa.elementAt(4));
    print(festa is List);
    print(festa.length);


    Map Tefelones = {
      'Theofilo': '2345423424',
      'Jao': '2345423424',
      'Bill': '2345423424',
      'Godrick': '2345423424'

    };//ou New Map //o Map e definido em chave e valor, assim tendo o valor acessado pela chave e nao por um indice

    print(Tefelones['Jao']);
    print(Tefelones is Map);
    print(Tefelones.length);
    print(Tefelones);
    print(Tefelones.values);
    print(Tefelones.keys);
    print(Tefelones.entries);

    var setenta = {'Fio Do BILL', 'Mulher do BILL', 'O BILL'};
    print(setenta is Set);
    setenta.add('TIO DO BILL');
    print(setenta);





}