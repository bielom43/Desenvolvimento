"use strict";
/*Uma concessionária de veículos paga a seus funcionários um salário de R$350,00 mais uma
comissão de R$200,00 por cada carro vendido. Elabore um programa que leia o número de
carros vendidos por um determinado funcionário e imprima seu salário total. */
class calculo_carros_vendidos {
    constructor(carros_vendidos) {
        this.quantidade_vendida = carros_vendidos;
    }
    calculo_total(t) {
        return (t.quantidade_vendida * 200) + 350;
    }
}
let salario = new calculo_carros_vendidos(20);
console.log(salario.calculo_total(salario));
