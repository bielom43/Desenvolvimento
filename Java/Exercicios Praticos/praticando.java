import java.util.Locale;
import java.util.Scanner;

public class praticando {
    public static void main(String[] args){

        Locale.setDefault(Locale.US);//definindo separador de decimal para US ou '.'
        Scanner sc = new Scanner(System.in);//Definindo variavel de entrada scan, parametro system.in

        String nome1, nome2;//Variaveis
        int idade1, idade2;
        double media;

   
        System.out.println("Digite os dados para a primeira pessoa: ");
        System.out.print("Nome: ");
        nome1 = sc.nextLine();
        System.out.print("Idade: ");
        idade1 = sc.nextInt();

        System.out.println("Digite os dados para a segunda pessoa: ");
        System.out.print("Nome: ");
        sc.nextLine();//Limpando quebra de linha pendente desde o ultimo scan para string, sempre necessario
        nome2 = sc.nextLine();
        System.out.print("Idade: ");
        idade2 = sc.nextInt();
        
        media = (double)(idade1 + idade2) / 2;//para fazer um casting de int para double necessaria a expressao "(double)" ao inicio de outras expressoes
        System.out.println("A idade media de " + nome1 + " e " + nome2 + " e de " + String.format("%.2f", media) + " anos");

        sc.close();

    }

    
}