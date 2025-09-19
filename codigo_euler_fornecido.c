#include<stdio.h>

#define NUM_ITERACOES 30

int main() {
    // Começamos nossas somas com o primeiro termo da série (1/0! = 1)
    float e_float = 1.0f;
    double e_double = 1.0;
    long double e_long = 1.0L; // 'L' para indicar long double

    // 'termo' guardará o valor de 1/n! a cada passo.
    // Usamos long double para o termo para ter a maior precisão possível no cálculo.
    long double termo = 1.0L;

    // Vamos iterar de n=1 até um número razoável definido em constante global
    for (int n = 1; n <= NUM_ITERACOES; n++) {
        // Calcula o termo atual (1/n!) a partir do termo anterior (1/(n-1)!)
        // Ex: 1/3! = (1/2!) / 3
        // TODO

        // incremente o termo atual a cada tipo de ponto flutuante
        // converta explicitamente se for preciso
        // TODO

        // TODO: Imprima 'n', 'termo', 'e_float', 'e_double' e 'e_long'.
        //       Use os especificadores de formato corretos para cada tipo!
        //       (Dica: %Le para long double do termo, %f para float, %lf para double, %Lf para long double)
    }
    printf("\n\nValor de referência para 'e': 2.718281828459045...\n");

    return 0;
}
