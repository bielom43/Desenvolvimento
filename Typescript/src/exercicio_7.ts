/*
Em uma determinada loja, o preço dos produtos na prateleira é mostrado sem se adicionar
o imposto. Considerando que o valor do imposto seja de 17% sobre o valor de prateleira, crie
um programa que leia o preço de um produto e mostre o valor do imposto e o valor total a ser
pago pelo consumidor.
*/

class loja_generic {

    public preco_produto!: number;

    constructor(preco_produto: number){

        this.preco_produto = preco_produto;

    }

    public calculo_imposto(c: loja_generic){
      
        return (c.preco_produto * 0.17) + c.preco_produto;

    }

}

let total_imposto = new loja_generic(100);
let total_sem_imposto;

console.log("O valor total a ser pago com impost e: ", total_imposto.calculo_imposto(total_imposto));

total_sem_imposto = total_imposto.calculo_imposto(total_imposto).toString


console.log("Valor do imposto: ", total_sem_imposto)