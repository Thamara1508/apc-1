#include <stdio.h>

int main() {
    printf("==============================\n");
    printf("     NOTA   LEGAL\n");
    printf("==============================\n");
    printf("Produto      Qtd  Valor Unit\n");
    printf("%-12s %03i %11.2f\n", "Camiseta", 2, 39.99);
    printf("%-12s %03i %11.2f\n", "Calca", 1, 89.90);
     printf("%-12s %03i %11.2f\n", "Meia Social", 3, 19.99);
     printf("==============================\n");
     printf("%s %21.2f\n", "TOTAL:", 229.85);
    
    
    return 0;
}
