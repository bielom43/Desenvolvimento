#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *agrv[]){

    float v1, v2, v3;
    int decisao;

    do{
    printf("Insira tres valores diferentes que deseja ordenar em crescente: \n");
    scanf("%f%f%f", &v1, &v2, &v3);

    if(v1==v2 || v1 == v3 || v2==v3){

        printf("Valores iguais nao sao permitidos para esta comparacao!\n");
        printf("\n");
        getchar();

    }else{
        if (v1 < v2)
                                            
            if (v2 < v3) 
            
                printf("%.2f, %.2f, %.2f\n", v1, v2, v3);
                                                
            else 

                if (v1 < v3) 
                
                    printf("%.2f, %.2f, %.2f\n", v1, v3, v2);
                
                else 
                
                    printf("%.2f, %.2f, %.2f\n", v3, v1, v2);        
        else

            if (v2 < v3)                       

                if (v1 < v3) 
                
                    printf("%.2f, %.2f, %.2f\n", v2, v1, v3); 

                else 
                
                    printf("%.2f, %.2f, %.2f\n", v2, v3, v1);  
                    
            else 
            
                printf("%.2f, %.2f, %.2f\n", v3 ,v2, v1);    
    }
    printf("Deseja executar o programa novamente?\n");
    printf("Caso sim digite 1 caso contrario digite 2: \n");
    scanf("%d", &decisao);
    system("cls");

    }while(decisao == 1);

    printf("O programa foi finalizado com exito!");
    getchar();

    return 0;
}
