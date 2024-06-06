#include <stdio.h>
#include <stdlib.h>

void soma(float a, float b){
    float resultado;
    resultado = a + b;
    printf("Resultado: %f\n\n",resultado);
}

void subtracao(float a, float b){
    float resultado;
    resultado = a - b;
    printf("Resultado: %f\n\n",resultado);
}

void multiplicacao(float a, float b){
    float resultado;
    resultado = a * b;
    printf("Resultado: %f\n\n",resultado);
}

void divisao(float a, float b){
    float resultado;
    resultado = a / b;
    if (b == 0){
        printf("Divisao por zero!\n\n");
    }
    else{
        printf("Resultado: %f\n\n",resultado);   
    }

}

void tabelaOperacao(){
    printf("0.Fim\n1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Exponencial\n6.Raiz\n\n");
}

void exponencial(float a, float b){

}

void raiz(float a){

}

int main(){

    float num1, num2;
    int operacao;

    printf("Calculadora Cientifica\n\n");
    tabelaOperacao();
    printf("Digite qual operacao deseja realizar, de acordo com as numeracoes: ");
    scanf("%d",&operacao);

    while (operacao != 0){
        
        if (operacao < 1 || operacao > 6){
            printf("A operacao escolhida nao existe!\n");
        }
        else{
            switch (operacao){
                case 1:
                    printf("Primeiro valor: ");
                    scanf("%f",&num1);
                    printf("Segundo valor: ");
                    scanf("%f",&num2);
                    soma(num1,num2);
                    break;
                case 2:
                    printf("Primeiro valor: ");
                    scanf("%f",&num1);
                    printf("Segundo valor: ");
                    scanf("%f",&num2);
                    subtracao(num1,num2);
                    break;
                case 3:
                    printf("Primeiro valor: ");
                    scanf("%f",&num1);
                    printf("Segundo valor: ");
                    scanf("%f",&num2);
                    multiplicacao(num1,num2);
                    break;
                case 4:
                    printf("Primeiro valor: ");
                    scanf("%f",&num1);
                    printf("Segundo valor: ");
                    scanf("%f",&num2);
                    divisao(num1,num2);
                    break;
                case 5:
                    printf("Base: ");
                    scanf("%f",&num1);
                    printf("Expoente: ");
                    scanf("%f",&num2);
                    exponencial(num1,num2);
                    break;
                case 6:
                    printf("Raiz de: ");
                    scanf("%f",&num1);
                    raiz(num1);
                    break;
            }
        }
        tabelaOperacao();
        printf("Digite a operacao novamente: ");
        scanf("%d",&operacao);
    }
    
    printf("Programa encerrado!\n");

    return 0;
}