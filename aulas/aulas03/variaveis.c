#include <stdio.h>

int main() {



// 1) tipos de dados
// char   => 1 caracter
// int    => numeros inteiros + e _ 
// float  => flutuantes com 6 casas decimais 
// double => flutuante com 12 casas decimais 
// void   => sem tipo

// 2) declarações de variaveis 
char tecla;
char opcao;
int idade;
float nota;
double dizima_periodica;

tecla = 'A';
idade = 16;
nota = 5.5f;
dizima_periodica = 1.333333333333333;

printf("Os valores das variaveis: \n");
printf("tecla = %c\n" , tecla);
printf("idade = %i\n" , idade);
printf("nota = %.1f\n" , nota);
printf("dizimas =  %.12f\n" , dizima_periodica);

//3) declarações constantes

const double PI = 3.141516;
// PI = 3.14; não pode!!!!

    return 0;
} 
