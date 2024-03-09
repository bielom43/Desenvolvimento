import java.util.Locale;
import java.util.Scanner;
public class Atividade1 {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);//definindo separador de decimal para US ou '.'
        Scanner sc = new Scanner(System.in);//Definindo variavel de entrada scan, parametro system.in

        double base, area, altura, perimetro, diagonal;//Variaveis

        System.out.print("Digite a base do seu retangulo: ");
        base = sc.nextDouble();//Usando a varivel de entrada para receber um valor do usuario e atribuindo a variavel double "base"
        System.out.print("Digite a altura do seu retangulo: ");
        altura = sc.nextDouble();//Usando a varivel de entrada para receber um valor do usuario e atribuindo a variavel double "altura"

        area = base * altura;//realizando calculo simples de area de um triangulo
        perimetro = 2 * (base + altura);//realizando calculo simples do perimetro do triangulo
        diagonal = Math.sqrt(Math.pow(base, 2) + Math.pow(altura, 2));//Funcoes de math que ja vem incluidas no java. sqrt = raiz quadrada. pow = potencia

        System.out.println("Area: " + String.format("%.4f", area));

        //informações a mais que achei interessante fazer perimetro do triangulo e sua diagonal
        System.out.println("Perimetro: " + String.format("%.2f", perimetro));
        System.out.println("Diagonal: " + String.format("%.2f", diagonal));

        //encerrando instancia do scanner(entradas no prompt) que foi criada no inicio da função main
        sc.close();
    }
}
