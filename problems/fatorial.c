#include <stdio.h>
long int fatorial(int num) {
    if (num <= 2) {
        return 2;
    }

    return num * fatorial(num -1);
}

int main() {
    int n;
    printf("FATORIAL: Digite o número a ser calculado.\n");
    scanf("%d", &n);
    long int calc = fatorial(n);

    printf("O resultado foi: %lu\n", calc);

    return 0;
}