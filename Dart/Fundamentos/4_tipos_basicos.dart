// ignore_for_file: unused_local_variable

/*
  - Numeros (int e double)
  - String  (String)
  - Booleano (bool)
  - dynamic

*/



void main() {
	num x = 90;//o pai do double e int, ou seja o dois podem ser herdados pelo tipo num
	int p1 = 3;
	double p2 =  -56.23.abs(); // .abs = valor absoluto podendo utilizar na variavel tb
	double p3 = double.parse("132.4123");

	print(p1 * p2 + p3 / x); //Sera convertido para o tipo que conseguir guardar mais informacoes

	String t1 = "Loucura";
	String t2 = " Do dia";

	print(t1 + t2.toUpperCase() + "!!!");

	bool calor_pacarai = true;
	bool chuva_pacacete = false;

	print(calor_pacarai || chuva_pacacete);

	//Dynamic como o nome ja sugere pode ser alterado a qualquer momento por nao ser um tipo definido de variavel
	// e diferente do tipo var, que faz uma inferencia que define um tipo apos a atribuicao do valor
	
	dynamic que_isso_boy = "Alguma coisa ai"; 
	print (que_isso_boy);

	que_isso_boy = 23.423;
	print (que_isso_boy);

}

