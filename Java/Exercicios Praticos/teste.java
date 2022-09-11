import java.util.Locale;
import java.util.Scanner;

public class teste {
    public static void main(String[] args){

        Locale.setDefault(Locale.US);//definindo separador de decimal para US ou '.'
        Scanner sc = new Scanner(System.in);//Definindo variavel de entrada scan, parametro system.in

        double base, area, altura, perimetro, diagonal;//Variaveis

        System.out.print("Digite a base do seu retangulo: ");
        base = sc.nextDouble();//Usando a varivel de entrada para receber um valor do usuario
        System.out.print("Digite a altura do seu retangulo: ");
        altura = sc.nextDouble();//Usando a varivel de entrada para receber um valor do usuario

        area = base * altura;
        perimetro = 2 * (base + altura);
        diagonal = Math.sqrt(Math.pow(base, 2) + Math.pow(altura, 2));//Funcoes de math que ja vem incluidas no java. sqrt = raiz quadrada. pow = potencia

        System.out.println("Area: " + String.format("%.4f", area));
        System.out.println("Perimetro: " + String.format("%.4f", perimetro));
        System.out.println("Diagonal: " + String.format("%.4f", diagonal));
        


        sc.close();
    }
}