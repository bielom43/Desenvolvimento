"use strict";
/*4- O Instituto Nacional de Meteorologia (INM) mede a quantidade de chuva em milímetros.
Devido à um acordo entre o INM e o Instituto Britânico (IB), será necessário fazer o envio das
informações brasileiras para Londres. Entretanto o IB utiliza como medida da quantidade de
chuva a polegada. Sabendo-se que uma polegada eqüivale a 25.4 milímetros, escreva um
programa que leia a quantidade de chuva em milímetros e imprima esta quantidade em
polegadas. */
class converting_milimeters {
    constructor(milimeter) {
        this.milimeter = milimeter;
    }
    calculating(v) {
        return v.milimeter / 25.4;
    }
}
var converted_milimeter = new converting_milimeters(80);
console.log(converted_milimeter);
console.log(converted_milimeter.calculating(converted_milimeter).toFixed(2));
