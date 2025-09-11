#include <stdio.h>

int main() {
    char numero1 = 10;
    int numero2 = 20;

    //operadores aritimeticos 
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2; 
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 *1.0 / numero2; 
    int resto_da_divisao = numero1 % numero2;
    printf ("a soma de %i e %i eh %i\n" , numero1, numero2, soma);
    printf ("a subtracao de %i e %i eh %i\n" , numero1, numero2, subtracao);
    printf ("a multiplicacao de %i com %i eh %i\n" , numero1, numero2, multiplicacao);
    printf ("a divisao de %i por %i eh %f\n" , numero1, numero2, divisao);
    printf ("a resto_da_divisao de %i por %i eh %i\n" , numero1, numero2, resto_da_divisao);

    // operadores incremento e decremento 
    int incremento = numero1;
    incremento++; // numero1 = numero1 = 1 
    int decremento = numero1;
    decremento--; // numero1 = numero1 - 1
    printf("o incremento de %i eh %i\n" , numero1, incremento);
    printf("o decremento de %i eh %i\n" , numero1, decremento);

    int pre_incremento = numero1;
    int pos_incremento = numero1; 

    printf("o pre-incremento de %i eh %i\n" , numero1, ++pre_incremento);
    printf("o pos-incremento de %i eh %i\n"  , numero1, pos_incremento++);
    printf("o valor do pos_incremento depois eh %i\n", pos_incremento);

    // operadores relacionais 
    int menor_que = numero1 < numero2;
    int menor_ou_igual = numero1 <= numero2;
    int maior_que= numero1 > numero2;
    int maior_ou_igual = numero1 >= numero2;
    int igual = numero1 == numero2;
    int diferente = numero1 != numero2;

    // 0 - falso 1 - verdadeiro 

    printf("o numero %i eh menor que %i? %i\n" , numero1, numero2, menos_que);
    printf(" o numero %i eh menor ou igual a %i? %i\n" , numero1, numero2, menor_ou_igual);
    printf("o numero %i eh maior que %i? %i" numero1, numero2. maior_que);
    printf(" o numero %i eh maior ou igual a %i? %i\n" , valor1, valor2, maior_ou_igual);
    printf("o numero %i eh igual a %i? %i\n" , numero1, numero2, igual);
    printf("o numero %i eh diferente %i? %i\n" , numero1, numero2, diferente);
      return 0;
}
