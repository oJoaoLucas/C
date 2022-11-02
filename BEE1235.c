#include <stdio.h>
#include <string.h>


int n, tam;
char mensagem[103];

int main(){

    scanf("%d", &n);
    getchar();

    while(n!=0){
        fflush(stdin);
        gets(mensagem);
        tam = strlen(mensagem);
        for(int i=tam/2-1; i>=0; i--) printf("%c", mensagem[i]);
        for(int i=tam-1; i>=tam/2; i--) printf("%c", mensagem[i]);
        printf("\n");
        n--;
    }
    return 0;
}