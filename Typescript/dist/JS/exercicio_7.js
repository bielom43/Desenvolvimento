"use strict";
/*
Em uma determinada loja, o preço dos produtos na prateleira é mostrado sem se adicionar
o imposto. Considerando que o valor do imposto seja de 17% sobre o valor de prateleira, crie
um programa que leia o preço de um produto e mostre o valor do imposto e o valor total a ser
pago pelo consumidor.
*/
class loja_generic {
    constructor(preco_produto) {
        this.preco_produto = preco_produto;
    }
    calculo_imposto(c) {
        return (c.preco_produto * 0.17) + c.preco_produto;
    }
}
let total_imposto = new loja_generic(700);
console.log("O valor total a ser pago com impost e: ", total_imposto.calculo_imposto(total_imposto));
console.log("Valor do imposto");
