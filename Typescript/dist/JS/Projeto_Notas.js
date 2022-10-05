"use strict";
class Prova {
    constructor(_nota, _peso) {
        this.setNota(_nota);
        this.setPeso(_peso);
    }
    getNota() {
        return this._nota;
    }
    setNota(_nota) {
        if (_nota < 0 || _nota > 10) {
            throw new Error('Nota invalida, digite uma nota de 0 a 10');
        }
        else {
            this._nota = _nota;
        }
    }
    getPeso() {
        return this._peso;
    }
    setPeso(_peso) {
        if (_peso < 1 || _peso > 10) {
            throw new Error('Peso invalido, digite um peso de 1 a 10');
        }
        else {
            this._peso = _peso;
        }
    }
    getValor(_total) {
        return _total._peso * _total._nota;
    }
}
class Estudante {
    constructor(nome, RA, p_teorica, p_teorica2, p_final) {
        this.setNome(nome);
        this.setRa(RA);
        this.setTeorica(p_teorica);
        this.setTeorica2(p_teorica2);
        this.setFinal(p_final);
    }
    getNome() {
        return this.nome;
    }
    setNome(value) {
        this.nome;
    }
    getRa() {
        return this.RA;
    }
    setRa(value) {
        this.RA;
    }
    getTeorica() {
        return this.p_teorica;
    }
    setTeorica(value) {
        this.p_teorica;
    }
    getTeorica2() {
        return this.p_teorica2;
    }
    setTeorica2(value) {
        this.p_teorica2;
    }
    getFinal() {
        return this.p_final;
    }
    setFinal(value) {
        this.p_final;
    }
    isAproved(value) {
        let n_final = (value.p_teorica * 0.3 + value.p_teorica2 * 0.2 + value.p_final * 0.5) / 1;
        if (n_final >= 6) {
            return true;
        }
        else {
            return false;
        }
    }
}
let prova1 = new Prova(7, 0.3);
let prova2 = new Prova(8, 0.2);
let prova3 = new Prova(2, 0.5);
console.log(prova1.getNota());
