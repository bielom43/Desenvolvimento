"use strict";
/*O cardápio de uma lanchonete é dado pela tabela de preços abaixo. Escreva um programa
que leia a quantidade de cada item comprado por um determinado cliente e imprima o valor
total da sua compra.
Hambúrguer R$ 8,00
Batata frita R$ 12,00
Refrigerante R$ 3,00
Cerveja R$ 5,00
Doce R$ 3,00*/
class lanchonete {
    constructor(hamburguer_quantity, Batata_quantity, Refrigerante_quantity, Cerveja_quantity, Doce_quantity) {
        this.hamburguer_quantity = hamburguer_quantity;
        this.Batata_quantity = Batata_quantity;
        this.Refrigerante_quantity = Refrigerante_quantity;
        this.Cerveja_quantity = Cerveja_quantity;
        this.Doce_quantity = Doce_quantity;
    }
    Total(l) {
        const Hamburguer_total = l.hamburguer_quantity * 8;
        const Batata_total = l.Batata_quantity * 12;
        const Refrigerante_total = l.Refrigerante_quantity * 3;
        const Cerveja_total = l.Cerveja_quantity * 5;
        const Doce_total = l.Doce_quantity * 3;
        return Hamburguer_total + Batata_total + Refrigerante_total + Cerveja_total + Doce_total;
    }
}
let cardapio = [
    { id: 1, opcao: 'Hamburguer', valor: 8 },
    { id: 2, opcao: 'Batata Frita', valor: 12 },
    { id: 3, opcao: 'Refrigerante', valor: 3 },
    { id: 4, opcao: 'Cerveja', valor: 5 },
    { id: 5, opcao: 'Doce', valor: 3 }
];
let pedido = new lanchonete(4, 5, 3, 5, 6);
console.log(pedido.Total(pedido));
