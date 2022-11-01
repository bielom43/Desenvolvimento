class Work{
    private _name!: string;
    private _type!: string;


    constructor(_name: string, _type: string){
        this.set_Name(_name);
        this.set_Type(_type);
    }

    public get_Name(): string {
        return this._name;
    }

    public set_Name(_Name: string) :void {
        this._name = _Name;
    }

    public get_Type(): string {
        return this._type;
    }
    public set_Type(_Type: string) :void {
        this._type = _Type;
    }

}

class Movie extends Work {

    private _duration!: number;
    
    constructor(_name: string, _type: string, duration: number){
        super(_name, _type);
        this.setDuration(duration);
    }

    public getDuration(): number {
        return this._duration;
    }

    public setDuration(Duration: number) :void {
        this._duration = Duration;
    }
}

class Serie extends Work {

    private _totalEpisodes!: number;
    
    constructor(_name: string, _type: string, ttep: number){
        super(_name, _type)
        this.setTotalEpisodes(ttep);
    }

    public getTotalEpisodes(): number {
        return this._totalEpisodes;
    }

    public setTotalEpisodes(ttep: number) :void {
        this._totalEpisodes = ttep;
    }
}

class Season extends Serie{

    private _seasonNumber!: number;
    private _serie!: Serie;

    constructor(_name: string, _type: string,ttep: number,seasonNumber: number, serie: Serie){
        super(_name, _type,ttep)
        this.setSeasonNumber(seasonNumber);
        this.setSerie(serie);
    }

    public getSeasonNumber() :number{
        return this._seasonNumber;
    }

    public setSeasonNumber(Number: number) :void{
        this._seasonNumber = Number;
    }

    public getSerie() :Serie{
        return this._serie;
    }

    public setSerie(Serie: Serie) :void{
        this._serie = Serie;
    }

}

const serie = new Serie("Giga Chad: Dominação em Massa", "Horror", 12);
console.log(serie);

const season = new Season("Giga Chad: Dominação em Massa", "Horror", 12, 2, serie);
console.log(season);

