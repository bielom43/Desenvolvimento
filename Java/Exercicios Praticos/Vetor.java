import java.util.Locale;
import java.util.Scanner;



public class Vetor {
        public static void main(String[] args) {

            Locale.setDefault(Locale.US);
            Scanner sc = new Scanner(System.in);

            System.out.print("Quantos valores voce vai digitar ?");
            int N = sc.nextInt(); //declaracao da varivel direto na expressao 

            double[] valores = new double[N];

            for(int i = 0; i < N; i++){

                System.out.print("Digite um valor: ");
                valores[i] = sc.nextDouble();
            }

            System.out.println();
            System.out.println("Numero digitados: ");

            for(int i = 0; i < N; i ++){
                System.out.println(String.format("%.2f",valores[i]));
            }

            sc.close();

        }    
}
