#include <stdio.h>
#include <string.h>

int soma(int a, int b){
    int soma;
    int VaiUM;

    do{
        soma=a^b;
        VaiUM=a&b;
        VaiUM=VaiUM<<1;

        a = soma;
        b= VaiUM;

    }while(VaiUM!=0);


    return soma;
}

int subtracao(int a, int b){
    //Complemento de 2 = inverte todos os bits e soma 1.
    int invB=~b;//Inverte.
    invB=soma(invB, 1);//Soma com a função já criada.

    int subtra=soma(a, invB);

    return subtra;



}



int main(){
    int a;
    int b;

    //44  = 0010 1100
    //130 = 1000 0010

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);



    printf("O resultado da soma e: %d\n", soma(a, b));
    printf("O resultado da subtracao e: %d\n", subtracao(a, b));

    return 0;


}
