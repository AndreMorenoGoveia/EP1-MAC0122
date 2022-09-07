# EP1-MAC0122
Exercício-Programa 1 da matéria Princípios de Desenvolvimento de Algoritmos com a proposta de otimizar a conjectura de Collatz.
O algoritmo a ser otimizado era de executar a conjectura em todos os números de um intervalo dado pelo usuário e dar o número
de passos necessários de cada número até que cheguem em 1.



# Conjectura de Collatz
A conjectura de Collatz é dada por f(n) = 3n + 1 se o número for ímpar e f(n) = n/2 se n for par. Todos os números inteiros positivos
diferentes de zero eventualmente, ao repetir-se a fórmula diversas vezes nos números gerados, acabam se tornando 1 e a partir de então
a função torna-se constante.




# Otimização
Para a otimização, o número de passos até o 1 de cada número era guardado e testado a cada nova interação na função. Com isso, era
possível reduzir os cálculos feitos pelo computador, reutilizando o número de passos de um número repetido.
Para armazenar e resgatar esses valores foi utilizado um vetor com o tamanho do maior intervalo onde o número de passos do número n
ficaria guardada na n-ésima posição do vetor, possibilitando uma busca e armazenamento com complexidade de tempo O(1) (tempo constante).
