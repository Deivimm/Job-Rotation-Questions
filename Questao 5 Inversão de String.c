#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j;
    
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    
    len = strlen(str) - 1; // desconsidera o caractere '\n' inserido pelo fgets
    
    for(i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    printf("String invertida: %s", str);
    
    return 0;
}