"use strict";
class Provas {
    constructor(n, p) {
        this.setNota(n);
        this.setPeso(p);
    }
    getNota() {
        return this.nota;
    }
    getPeso() {
        return this.peso;
    }
    setNota(n) {
        if (n < 0 || n > 10)
            throw new Error("Nota inválida");
        this.nota = n;
    }
    setPeso(p) {
        if (p < 0 || p > 100)
            throw new Error("Peso inválido");
        this.peso = p;
    }
    getValores() {
        return this.nota * this.peso / 100;
    }
}
class Estudantes {
    constructor(ra, n, t, p, f) {
        this.setRa(ra);
        this.setNome(n);
        this.setTeorica(t);
        this.setPratica(p);
        this.setFinal(f);
    }
    getRa() {
        return this.ra;
    }
    getNome() {
        return this.nome;
    }
    getTeorica() {
        return this.teorica;
    }
    getPratica() {
        return this.pratica;
    }
    getFinal() {
        return this.final;
    }
    setNome(n) {
        if (n.trim() == "")
            throw new Error("Nome inválido");
        this.nome = n;
    }
    setRa(ra) {
        if (ra.trim() == "")
            throw new Error("RA inválido");
        this.ra = ra;
    }
    setTeorica(t) {
        this.teorica = t;
    }
    setPratica(p) {
        this.pratica = p;
    }
    setFinal(f) {
        this.final = f;
    }
    isAprovado() {
        return this.getNotaFinal() >= 6;
    }
    // metodo não solicitado no exercício
    getNotaFinal() {
        return this.teorica.getValores() + this.pratica.getValores() + this.final.getValores();
    }
}
const p1 = new Provas(5, 30);
const p2 = new Provas(3, 30);
const p3 = new Provas(0, 40);
const lucas = new Estudantes("2104092", "Lucas", p1, p2, p3);
console.log(lucas);
console.log(lucas.getNotaFinal());
console.log(lucas.isAprovado());
lucas.setFinal(new Provas(10, 40));
console.log(lucas.getNotaFinal());
console.log(lucas.isAprovado());
const livia = new Estudantes("2105752", "Livia", new Provas(7, 30), new Provas(5, 30), new Provas(10, 40));
console.log(livia);
console.log(livia.getNotaFinal());
console.log(livia.isAprovado());
