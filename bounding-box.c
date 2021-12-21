#include <stdio.h>
#include <limits.h>
//Questão 2, lista de exercicios
int main(){
    int n, xme, yme, xma, yma;
    printf("n: ");
    scanf("%d", &n);
    //inicialização dos pontos
    printf("coordenas: x, y");
    scanf("%d %d", &xme, &yme);
    xma=xme;
    yma=yme;

    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        printf("coordenas: x, y");
        scanf("%d %d", &x, &y);

        if (x>xma){
            xma=x;
        }
        if(x<xme){
            xme=x;
        }
        if (y>yma){
            yma=y;
        }
        if(y<yme){
            yme=y;
        }

    }
    printf("minimo %d %d: ", xme, yme);
    printf("maximo %d %d: ", xma, yma);
    
    
}