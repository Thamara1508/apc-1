#include <stdio.h>

int main() {
    printf("O tipo 'short int' ocupa %lu byte(s) na memória.\n", sizeof(short int));
    printf("O tipo 'long int' ocupa %lu byte(s) na memória.\n", sizeof(long int));
printf("O tipo 'long long int' ocupa %lu byte(s) na memória.\n", sizeof(long long int));
printf("O tipo 'long double' ocupa %lu byte(s) na memória.\n", sizeof(long double));

    return 0;
}
