# Universidade Estadual do Norte do Paraná 

#### Curso Ciência da Computação - Matéria Computação Simbólica
#### Professor: Rafael Aguiar
#### Aluna: Melissa Francielle dos Santos - 4º Ano 


Objetivo: Observar como a precisão finita dos tipos float e double afeta o resultado de uma soma com termos que ficam progressivamente menores. Entender porque long double é necessário para cálculos de alta precisão.

A Tarefa:
Complete e analise o programa em C anexo que calcula o valor de e usando a série acima. O programa deve manter três somas paralelas dentro de um único laço: uma para float, uma para double e uma para long double. O programa deve imprimir o estado das três variáveis a cada iteração para que seja possível observar o comportamento de cada uma das 3 variáveis.


---------

Existem dois "cálculos" ou conceitos importantes associados a Euler: a Relação de Euler para poliedros (V + F = A + 2) e a Fórmula de Euler para números complexos (eⁱˣ = cos(x) + i sen(x)), além do cálculo e utilização do Número de Euler (e), uma constante fundamental da matemática, aproximadamente 2,71828. 

---------

Explicação do código:


Havia a necessidade de inclusão de partes no código para o funcionamento correto dele, e foi adicionado a seguinte parte 

```         termo = termo / n;

        // incremente o termo atual a cada tipo de ponto flutuante
        // converta explicitamente se for preciso
        e_float += (float)termo;
        e_double += (double)termo;
        e_long += termo;

        // Imprima 'n', 'termo', 'e_float', 'e_double' e 'e_long'.
        printf("n=%2d | termo=%Le | e_float=%.10f | e_double=%.15lf | e_long=%.20Lf\n",
               n, termo, e_float, e_double, e_long);
``` 

Garantindo assim o que havia sido pedido pelo professor, onde era necessário completar o código onde se encontrava a palavra TODO. 

``` // Ex: 1/3! = (1/2!) / 3
        // TODO

        // incremente o termo atual a cada tipo de ponto flutuante
        // converta explicitamente se for preciso
        // TODO

        // TODO: Imprima 'n', 'termo', 'e_float', 'e_double' e 'e_long'.
        //       Use os especificadores de formato corretos para cada tipo!
        //       (Dica: %Le para long double do termo, %f para float, %lf para double, %Lf para long double)
``` 

----

## Execução do código 

Para executar corretamente o código é necessário a instalação do gcc no computador/notebook, para que consiga rodar corretamente e funcione corretamente o código. Após a instalação, para compilar o código em C basta realizar o comando:

```
gcc nome_programa.c -o nome_programa 
```
em seguida rodar o executável gerado
```
./nome_programa
```
----
## Responda às perguntas:
a. Ponto de Falha do float: Em qual número de iteração a variável e_float para de mudar? Por que você acha que isso acontece? Está relacionado com a Mantissa ou com o expoente?.

b. Ponto de Falha do double: Em qual iteração a variável e_double para de mudar? Isso acontece antes ou depois do float? Por quê?

c. O Sucesso do long double: A variável e_long_double continua mudando por mais tempo. O que isso nos diz sobre sua precisão em comparação com os outros dois tipos?

d. Compare os três resultados finais com o valor de referência de e. Qual deles é o mais preciso? Por que usar o tipo de dado correto é crucial em cálculos científicos e financeiros?

e. Se você aumentar o valor de NUM_ITERACOES para 100 ou 200, o que você esperaria que acontecesse com e_long? Ele também acabaria parando de se atualizar? Por quê?

f. Pesquise sobre o "cancelamento catastrófico" em operações de ponto flutuante. Este experimento demonstra cancelamento catastrófico ou outro tipo de erro de precisão? Explique.
