/* 1- Elabore um programa que leia dois números e imprima o resultado da soma, da
subtração, da multiplicação e da divisão destes números.*/


class calculator{

    public x!: number;
    public y!: number;

    constructor(x: number, y:number){
        this.x = x;
        this.y = y;
    }

    public calc_soma(calc:calculator){

        return calc.x + calc.y;

    }

    public calc_div(calc:calculator){

        return calc.x / calc.y;

    }

    public calc_sub(calc:calculator){

        return calc.x - calc.y;

    }

    public calc_mult(calc:calculator){
        
        return calc.x * calc.y;
    
    }
    
}

let calc = new calculator(23,11)

console.log(calc)
console.log(calc.calc_div(calc))
console.log(calc.calc_mult(calc))
console.log(calc.calc_soma(calc))
console.log(calc.calc_sub(calc))