"use strict";
/*2- Faça um programa que calcula a média de temperatura de uma semana.*/
class weather {
    constructor(t_mon, t_tue, t_wed, t_tur, t_fry, t_sat, t_sun) {
        this.t_mon = t_mon;
        this.t_tue = t_tue;
        this.t_wed = t_wed;
        this.t_tur = t_tur;
        this.t_fry = t_fry;
        this.t_sat = t_sat;
        this.t_sun = t_sun;
    }
    week(m) {
        return (m.t_mon + m.t_tue + m.t_wed + m.t_tur + m.t_fry + m.t_sat + m.t_sun) / 7;
    }
}
let result = new weather(27, 32, 25, 33, 22, 19, 23);
console.log(result);
console.log('Media da semana: ', result.week(result).toFixed(2), 'C°');
