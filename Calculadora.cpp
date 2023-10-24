#include <stdio.h>
char operador;
int num1, num2 ;
float soma;

int main(){
    printf("Digite a operação que você deseja realizar(+ - * /)");
    scanf(" %c", &operador);
    printf("Digite o primeiro número : ");
    scanf(" %d",&num1);
    printf("Digite o segundo número :");
    scanf(" %d",&num2);
     if(operador=='+'){
    soma= num1+num2;
    }else if(operador=='-'){
        soma = num1-num2;
    }else if(operador=='*'){
        soma = num1*num2;
    }else if (operador=='/'){
        soma = num1/num2;
    }
    printf("Resultado: %.2f\n", soma);
    return 0;
}