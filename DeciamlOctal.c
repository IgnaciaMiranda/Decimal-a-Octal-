#include <stdio.h>

int main(){
    int decimal, resto, i = 0;
    char octal[20];

    printf("Ingresa un número: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("0\n");
        return 0;
    }

    while (decimal > 0) {
        resto = decimal % 8;
        octal[i++] = resto + '0';
        decimal /= 8;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", octal[j]);
    }

    printf("\n");

    return 0;
}
