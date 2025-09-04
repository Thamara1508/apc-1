#include <stdio.h>

int main() {
    char tecla;
    int idade;
    float nota;
    
    printf("informe os valores das variaveis:\n");
    scanf("%i" , &idade); // precisa do &
    getchar (); // ler uma tecla - limpar \n anterior;
    scanf("%c" , &tecla); // scanf não sabe tecla = valor;
     getchar ();
    scanf("%f" , &nota);

    printf("os valores informados foram salvos:\n");
    printf("tecla = %c\n" , tecla);
    printf("idade = %i\n" , idade);
    printf("nota = %f\n" , nota);
    
    return 0;
} 