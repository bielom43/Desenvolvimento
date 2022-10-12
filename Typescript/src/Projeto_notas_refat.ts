class Provas
{
    private nota!: number
    private peso!: number
    constructor(n: number, p:number)
    {
        this.setNota(n)
        this.setPeso(p)
    }
    public getNota(): number
    {
        return this.nota
    }
    public getPeso(): number
    {
        return this.peso
    }
    public setNota(n: number): void
    {
        if (n<0 || n>10)
            throw new Error("Nota inválida")
        this.nota = n;
    }
    public setPeso(p: number): void
    {
        if (p<0 || p>100)
            throw new Error("Peso inválido")
        this.peso = p
    }
    public getValores(): number
    {
        return this.nota * this.peso / 100
    }
}

class Estudantes
{
    private ra!: string
    private nome!: string
    private teorica!: Provas
    private pratica!: Provas
    private final!: Provas
    constructor(ra: string, n: string, t: Provas, p: Provas, f:Provas)
    {
        this.setRa(ra)
        this.setNome(n)
        this.setTeorica(t)
        this.setPratica(p)
        this.setFinal(f)
    }
    public getRa(): string
    {
        return this.ra
    }
    public getNome(): string
    {
        return this.nome
    }
    public getTeorica(): Provas
    {
        return this.teorica
    }
    public getPratica(): Provas
    {
        return this.pratica
    }
    public getFinal(): Provas
    {
        return this.final
    }
    public setNome(n: string): void
    {
        if (n.trim()=="")
            throw new Error("Nome inválido")
        this.nome = n
    }
    public setRa(ra: string): void
    {
        if (ra.trim()=="")
            throw new Error("RA inválido")
        this.ra = ra
    }
    public setTeorica(t: Provas): void
    {
        this.teorica = t
    }
    public setPratica(p: Provas): void
    {
        this.pratica = p
    }
    public setFinal(f: Provas): void
    {
        this.final = f
    }
    public isAprovado():boolean
    {
        return this.getNotaFinal() >= 6
    }

    // metodo não solicitado no exercício
    public getNotaFinal(): number
    {
        return this.teorica.getValores() + this.pratica.getValores() + this.final.getValores()
    }
}

const p1 = new Provas(5, 30)
const p2 = new Provas(3, 30)
const p3 = new Provas(0, 40)
const lucas = new Estudantes("2104092","Lucas", p1, p2, p3)

console.log(lucas)
console.log(lucas.getNotaFinal())
console.log(lucas.isAprovado())

lucas.setFinal(new Provas(10,40))
console.log(lucas.getNotaFinal())
console.log(lucas.isAprovado())


const livia = new Estudantes("2105752","Livia",new Provas(7, 30), new Provas(5, 30), new Provas(10, 40))
console.log(livia)
console.log(livia.getNotaFinal())
console.log(livia.isAprovado())
