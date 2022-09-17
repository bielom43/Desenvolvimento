"use strict";
/* 1- Elabore um programa que leia dois números e imprima o resultado da soma, da
subtração, da multiplicação e da divisão destes números.*/
class calculator {
    constructor(x, y) {
        this.x = x;
        this.y = y;
    }
    calc_soma(calc) {
        return calc.x + calc.y;
    }
    calc_div(calc) {
        return calc.x / calc.y;
    }
    calc_sub(calc) {
        return calc.x - calc.y;
    }
    calc_mult(calc) {
        return calc.x * calc.y;
    }
}
let calc = new calculator(23, 11);
console.log(calc);
console.log(calc.calc_div(calc));
console.log(calc.calc_mult(calc));
console.log(calc.calc_soma(calc));
console.log(calc.calc_sub(calc));
