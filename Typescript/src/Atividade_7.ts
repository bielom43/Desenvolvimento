class Aluno{

    private _RA!: number;
    private _nome!: string;
    private _nota1!: number;
    private _nota2!: number;
    private _notaTrab!: number;
    private _numeroFaltas!: number;

    constructor(RA: number, nome: string, nota1: number, nota2: number, notaTrab: number, numeroFaltas: number){

        this.setRA(RA);
        this.setNome(nome);
        this.setNota1(nota1);
        this.setNota2(nota2);
        this.setNotaTrab(notaTrab);
        this.setNumeroFaltas(numeroFaltas);

    }

    public getRA(): number {
        return this._RA;
    }
    public setRA(RA: number) :void {
        this._RA = RA;
    }

    public getNome(): string {
        return this._nome;
    }
    public setNome(Nome: string) :void {
        this._nome = Nome;
    }

    public getNota1(): number {
        return this._nota1;
    }
    public setNota1(Nota1: number) :void {
        this._nota1 = Nota1;
    }

    public getNota2(): number {
        return this._nota2;
    }
    public setNota2(Nota2: number) :void {
        this._nota2 = Nota2;
    }

    public getNotaTrab(): number {
        return this._notaTrab;
    }
    public setNotaTrab(NotaTrab: number) :void {
        this._notaTrab = NotaTrab;
    }

    public getNumeroFaltas(): number {
        return this._numeroFaltas;
    }
    public setNumeroFaltas(NumeroFaltas: number) :void {
        this._numeroFaltas = NumeroFaltas;
    }

    public ObterMediaProvas() :number {
        return (this._nota1 + this._nota2) / 2;
    }

    public ObterMediaSemestral() :number{
        
        return (this._nota1 * 4 + this._nota2 * 4 + this._notaTrab * 2) / 10;
    }

    public VerificarAprovacao() :boolean {

        let percentFrequencia = 100 - ((this._numeroFaltas * 1 ) / 0.2);
        
        console.log('Percentual de frequencia igual a: ', percentFrequencia);

        return  this.ObterMediaSemestral() >= 5 && percentFrequencia >= 75 ? true : false; 
    }

}

const aluno = new Aluno(2109453, 'Gabriel Almeida dos Santos', 8, 9, 10, 15);
console.log('Dados do Aluno: ',aluno);
console.log('Media das provas de ',aluno.getNome(),'é :',aluno.ObterMediaProvas());
console.log('Media semestral de ',aluno.getNome(),'é :',aluno.ObterMediaSemestral());
console.log('Situação de aprovação de ',aluno.getNome(),'é :', aluno.VerificarAprovacao());