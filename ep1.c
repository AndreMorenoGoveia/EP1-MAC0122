/***************************************************************/
/**                                                           **/
/**   André Moreno Goveia                                     **/
/**   Exercício-Programa 01                                   **/
/**   Professor: Carlos Eduardo Ferreira                      **/
/**   Disciplina: Princípios de Desenvolvimento de Algoritmos **/
/**                                                           **/
/***************************************************************/
#include <stdio.h>
#include <stdlib.h>



/* funcao que entrega os passos necessarios para que um numero chegue a 1 com a
   conjectura de Collatz. Como otimizacao, o programa armazena e testa resultados 
   ja calculados, entregando seu resultado e reduzindo o numero de operacoes.
   Para a otimizacao foi utilizado um vetor onde a n-esima memoria guarda o numero de 
   passos do numero n. A conjectura foi feita de modo recursivo para facilitar o 
   armazenamento dos dados no vetor   */
unsigned short passos(unsigned long long int n, unsigned short* vec, int f);



int main(int argc, char** argv){

    /* Le as entradas */
    int i = atoi(argv[1]),
    f = atoi(argv[2]);


    /* Aloca uma quantidade de memoria no heap e inicializa os valores de um vetor */
    unsigned short* memoria = calloc(f, sizeof(unsigned short));


    while(i != f + 2){

        printf("Para o numero %d foram necessarios %d passos\n", i, passos(i, memoria, f));
        i++;

    }


    /* libera a memoria alocada */
    free(memoria);
    return 0;
}



unsigned short passos(unsigned long long int n, unsigned short* vec, int f) {

    if(n == 1)
        return 0;

    short b = n < f;

    unsigned short steps = b ? *(vec + n) : 0; 

    if(steps)
        return steps;
    

    if(n % 2 == 0)
        steps = 1 + passos(n/2, vec, f);

    else
        steps = 2 + passos((3*n + 1)/2, vec, f);
    

    if(b)    
        *(vec + n) = steps;

   return steps;

}