#include <stdio.h>
#include <stdlib.h>

void soma(float *a, float *b){
    float *resultado;
    resultado = malloc(sizeof(float));
    *resultado = *a + *b;
    printf("Resultado: %f\n\n",*resultado);
    free(resultado);
}

void subtracao(float *a, float *b){
    float *resultado;
    resultado = malloc(sizeof(float));
    *resultado = *a - *b;
    printf("Resultado: %f\n\n",*resultado);
    free(resultado);
}

void multiplicacao(float *a, float *b){
    float *resultado;
    resultado = malloc(sizeof(float));
    *resultado = (*a) * (*b);
    printf("Resultado: %f\n\n",*resultado);
    free(resultado);
}

void divisao(float *a, float *b){
    float *resultado;
    resultado = malloc(sizeof(float));
    *resultado = *a / *b;
    if (*b == 0){
        printf("Divisao por zero!\n\n");
    }
    else{
        printf("Resultado: %f\n\n",*resultado);   
    }
    free(resultado);
}

void tabelaOperacao(){
    printf("0.Fim\n1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Exponencial\n6.Raiz Quadrada\n\n");
}

void exponencial(float *a, float *b){
    float *resultado;
    resultado = malloc(sizeof(float));
    *resultado = 0;
    float *aux;
    aux = malloc(sizeof(float));
    *aux = *a;
    //compara se a base e o expoente é igual a 0 : 0**0
    if (*a == 0 && *b == 0){                  
        printf("Nao existe resposta!\n\n");
    }
    //compara se expoente é igual a 0 : 2**0 = 1
    else if (*b == 0){
        printf("Resultado: 1\n\n");
    }
    //compara se a base 0 : 0**2 = 0
    else if (*a == 0){
        printf("Resultado: 0\n\n");
    }
    //compara se a base é negativa : -2**x
    else if(*a < 0){
        int *bInt;
        bInt = malloc(sizeof(int));
        *bInt = (int)(*b);
        //compara se o expoente e par e negativo : -2**-2 = 1/4
        if ((((*bInt) % 2) == 0) && *b < 0){        
            *b = (*b) * (-1);
            for(int i = 0; i < ((*b)-1); i++){
                *resultado = (*aux) * (*a);
                *aux = *resultado;
            }
            printf("Resultado: %f\n\n",(1/(*resultado))); 
        }
        //compara se o expoente e par e positivo : -2**2 = 4
        else if((((*bInt) % 2) == 0) && *b > 0){
            for(int i = 0; i < ((*b)-1); i++){
                *resultado = (*aux) * (*a);
                *aux = *resultado;
            }
            printf("Resultado: %f\n\n",(*resultado));
        }
        //compara se o expoente e impar e negativo : -2**-3 = -1/8
        else if((((*bInt) % 2) != 0) && *b < 0){
            *b = (*b) * (-1);
            for(int i = 0; i < ((*b)-1); i++){
                *resultado = (*aux) * (*a);
                *aux = *resultado;
            }
            printf("Resultado: %f\n\n",(1/(*resultado)));
        }
        //compara se o expoente e impar e positivo : -2**3 = -8
        else{
            for(int i = 0; i < ((*b)-1); i++){
                *resultado = (*aux) * (*a);
                *aux = *resultado;
            }
            printf("Resultado: %f\n\n",*resultado);
        }
    }
    //Base positiva
    else{
        //Compara se o expoente e negativo : 2**-2 = 1/4
        if (*b < 0){
            *b = (*b) * (-1);
            for(int i = 0; i < ((*b)-1); i++){
                *resultado = (*aux) * (*a);
                *aux = *resultado;
            }
            printf("Resultado: %f\n\n",(1/(*resultado)));
        }
        //Expoente positivo : 2**2 = 4
        else{
            for(int i = 0; i < ((*b)-1); i++){
                *resultado = (*aux) * (*a);
                *aux = *resultado;
            }
            printf("Resultado: %f\n\n",*resultado);
        } 
    }
    free(resultado);
}

void raiz(float *a) {
    float *resultado;
    resultado = malloc(sizeof(float));

    if (*a < 0) {
        printf("Numero inválido! Digite um número nao negativo.\n\n");
    } else {
        if (*a == 0) {
            *resultado = 0;
        } else {
            float aproximacao = *a / 2.0;
            float melhorAproximacao;
            
            while (1) {
                melhorAproximacao = (aproximacao + *a / aproximacao) / 2.0;
                if (fabs(melhorAproximacao - aproximacao) < 0.00001) {
                    break;
                }
                aproximacao = melhorAproximacao;
            }
            *resultado = melhorAproximacao;
        }

        printf("Resultado: %f\n\n", *resultado);
    }
    free(resultado);
}

int main(){

    float *num1, *num2;
    int *operacao;

    num1 = malloc(sizeof(float));
    num2 = malloc(sizeof(float));
    operacao = malloc(sizeof(int));

    if(num1 == NULL || num2 == NULL || operacao == NULL){
        printf("Erro na alocacao de alocacao de memoria");
        return 1;
    }

    printf("Calculadora Cientifica\n\n");
    tabelaOperacao();
    printf("Digite qual operacao deseja realizar, de acordo com as numeracoes: ");
    scanf("%d",operacao);

    while (*operacao != 0){
        
        if (*operacao < 1 || *operacao > 6){
            printf("A operacao escolhida nao existe!\n");
        }
        else{
            switch (*operacao){
                case 1:
                    printf("Primeiro valor: ");
                    scanf("%f",num1);
                    printf("Segundo valor: ");
                    scanf("%f",num2);
                    soma(num1,num2);
                    break;
                case 2:
                    printf("Primeiro valor: ");
                    scanf("%f",num1);
                    printf("Segundo valor: ");
                    scanf("%f",num2);
                    subtracao(num1,num2);
                    break;
                case 3:
                    printf("Primeiro valor: ");
                    scanf("%f",num1);
                    printf("Segundo valor: ");
                    scanf("%f",num2);
                    multiplicacao(num1,num2);
                    break;
                case 4:
                    printf("Primeiro valor: ");
                    scanf("%f",num1);
                    printf("Segundo valor: ");
                    scanf("%f",num2);
                    divisao(num1,num2);
                    break;
                case 5:
                    printf("Base: ");
                    scanf("%f",num1);
                    printf("Expoente: ");
                    scanf("%f",num2);
                    exponencial(num1,num2);
                    break;
                case 6:
                    printf("Raiz quadrada de: ");
                    scanf("%f",num1);
                    raiz(num1);
                    break;
            }
        }
        tabelaOperacao();
        printf("Digite a operacao novamente: ");
        scanf("%d",operacao);
    }
    
    printf("Programa encerrado!\n");

    free(operacao);
    operacao = NULL;
    free(num1);
    num1 = NULL;
    free(num2);
    num2 = NULL;

    return 0;
}