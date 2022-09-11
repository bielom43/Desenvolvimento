using System;
using System.Globalization; //Para utilizar CultureInfo.InvariantCulture

namespace Projeto1 {

    class Program{
        
        static void Main(string[] args){

            // double x;
            // x = 2.3435;

            CultureInfo CI = CultureInfo.InvariantCulture; //Para formatar sem precisar digitar a func completa toda vez
            
            // Console.WriteLine(x.ToString("F2", CI));//Mudar local a virgula para ponto em numeros decimais EN

            int idade;
            double salario;
            string nome;
            char sexo;

            idade = 32;
            salario = 4560.9;
            nome = "Maria Silva";
            sexo ='F';

            Console.WriteLine("A funcionaria " + nome + ", do sexo " + sexo + ", ganha " + salario.ToString("F2", CI) + " ,e tem idade " + idade + " anos");

            
        }
    }
}