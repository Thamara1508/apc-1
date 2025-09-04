#include <stdio.h>

int main() {
    char produto [30];
    int quantidade;
    float preco;

    printf ("informe o nome do produto: ");
    scanf("%s" , produto); //%s não precisa de &
    getchar ();

    printf("informe a quantidade do produto: ");
    scanf("%i" , &quantidade);
    getchar ();

    printf("informe o preco do produto:        ");
    scanf("%f" , &preco);

    printf("\nGerando a nota legal ....\n");
    
    printf ("======================================\n");
    printf ("NOTA LEGAL\n");
    printf("======================================\n");
    printf("Item            Qtd          Preco\n");
    printf("%-15s %03i %14.2f\n" , produto, quantidade, preco);
    printf("=======================================\n");
    return 0;
}