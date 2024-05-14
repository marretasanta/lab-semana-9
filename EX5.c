#include <stdio.h>

int reverso(int num, int numReverse) {
    if (num == 0) {
        return numReverse;
    }

    numReverse = (numReverse * 10) + (num % 10);

    return reverso(num / 10, numReverse);
}

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int numReverse = reverso(num, 0);

    printf("O número invertido é: %d\n", numReverse);

    return 0;
}