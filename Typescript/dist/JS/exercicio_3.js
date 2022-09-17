"use strict";
/*3- Para realizar a conversão de temperatura da escala Celsius para a escala Fahrenheit é
necessário usar a fórmula F = 1.8 * C + 32. Escreva um programa que leia uma temperatura
em Celsius e imprima a temperatura convertida para Fahrenheit. */
class convert_weather {
    constructor(temp_celsius) {
        this.temp_celsius = temp_celsius;
    }
    celsius_to_fahrenheit(t) {
        return 1.8 * t.temp_celsius + 32;
    }
}
let t = new convert_weather(44);
console.log(t);
console.log(t.celsius_to_fahrenheit(t));
