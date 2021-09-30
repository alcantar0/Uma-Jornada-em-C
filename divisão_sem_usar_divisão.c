#include <stdio.h>
int main(){
    float divisor, dividendo;
    int count=0;
    printf("Dividendo: ");
    scanf("%f",&dividendo);
    printf("Divisor: ");
    scanf("%f" ,&divisor);
    while (dividendo>=divisor){
        dividendo=dividendo-divisor;
        count++;
    }
    if (dividendo<divisor)
    {
        printf("Resultado: %d\n", count);
        printf("Resto: %f", dividendo);
    }
    else
    {
        printf("Resto: %f", dividendo);
    }
}
