# include <stdio.h>
# include <stdlib.h>

int main(){
    char tt[2][15];
    scanf("%s", tt[0]);
    printf("Antes do ponteiro: %s\n", tt[0]);

    char *p;
    p=tt[0];
    *p='C';

    p=p+4;
    *p='a';
    printf("Depois do ponteiro: %s\n", tt[0]);

//Alocação Dinâmica

    int *numero;

    numero=malloc(10*sizeof(int));
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &numero[i]);
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%d", numero[i]);
    }
    free(numero);

    //Printa lixo de memória
    for (int i = 0; i < 10; ++i)
    {
        printf("%d", numero[i]);
    }
}
