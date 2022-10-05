class Prova{

    private _nota!: number;
    private _peso!: number;

    constructor(_nota: number, _peso: number){
        this.setNota(_nota);
        this.setPeso(_peso);
    }
    
    public getNota(): number{

        return this._nota

    }

    public setNota(_nota: number): void{
        if(_nota < 0 || _nota > 10){
            throw new Error('Nota invalida, digite uma nota de 0 a 10');
        }else{
            this._nota = _nota;
        }

    }

    public getPeso(): number{

        return this._peso;

    }

    public setPeso(_peso: number): void{
        if(_peso < 0.2 || _peso > 1){
            throw new Error('Peso invalido, digite um peso de 1 a 10')
        }else{
            this._peso = _peso;
        }
    }

    public getValor(_total: Prova){

        return _total._peso * _total._nota;

    }

}

class Estudante{

    private nome!: String;
    private RA!: number;
    private p_teorica!: number;
    private p_teorica2!: number;
    private p_final!: number;

    constructor(nome: String, RA: number, p_teorica: number, p_teorica2: number, p_final: number){
        this.setNome(nome);
        this.setRa(RA);
        this.setTeorica(p_teorica);
        this.setTeorica2(p_teorica2);
        this.setFinal(p_final);
    }

    public getNome(): String{

        return this.nome;
        
    }

    public setNome(value: String): void{
        this.nome;
    }

    public getRa(): number{

        return this.RA;

    }

    public setRa(value: number): void{
        
        this.RA;

    }

    public getTeorica(): number{

        return this.p_teorica;

    }

    public setTeorica(value: number): void{

        this.p_teorica;
    }

    public getTeorica2(): number{

        return this.p_teorica2;

    }

    public setTeorica2(value: number): void{

        this.p_teorica2;

    }

    public getFinal(): number{

        return this.p_final;

    }

    public setFinal(value: number): void{
        
        this.p_final;

    }

    public isAproved(value: Estudante){

        let n_final = (value.p_teorica * 0.3 + value.p_teorica2 * 0.2 + value.p_final * 0.5)/1;

        if(n_final >= 6){
            return true;
        }else{
            return false;
        }

    }

}

let prova1 = new Prova(10, 0.3);
let prova2 = new Prova(10, 0.2);
let prova3 = new Prova(10, 0.5);

var pr = prova1.getValor(prova1);
var pr1 = prova2.getValor(prova2);
var pr2 = prova3.getValor(prova3);

let aprovacao = new Estudante("Cirio Gomes", 2314123, pr, pr1, pr2);

console.log(aprovacao.isAproved(aprovacao));
