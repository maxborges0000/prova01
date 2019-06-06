#include <stdio.h>
#include <string.h>
void main(){
    char num[10];

    printf("Informe uma string: ");
    scanf("%[^\n]%*c",num);

    printf("String: %s\n", num);
    printf("Quantidade de letras na string = %d \n",strlen(num));
}
