# Notação Big O 🔎📈

- Crescimento assintótico de uma função
  - Comportamento da função para valores muito grandes da entrada, representada por _n_
- A _notação O_ é utilizada para expressar comparativamente o crescimento assintótico de duas funções

- No estudo da complexidade de algoritmos é mais interessante saber como se comportam suas funções de custo à medida que aumentamos o valor de _n_, do que conhecer valores das funções correspondentes a valores particulares de _n_
  - Por exemplo, é mais importante saber que o número de operações executadas num algoritmo dobra se dobrarmos o valor de n, do que saber que para n = 100 são executadas 300 operações
- A _notação O_ nos permite ignorar constantes
- Embora possamos incluir constantes _na notação O_, não há nenhuma razão para fazermos isso
- Por exemplo:
  $
  5n + 4 = O(n)
  $
  ao invés de
  $
  O(5n + 4)
  $
- Ao dizermos que uma função de complexidade g(n) é O(f(n)), queremos dizer que as duas funções g(n) e f(n) tendem ao infinito com a mesma velocidade, ou que têm o mesmo comportamento assintótico

  - Por definição
    $
  g(n) = O(f(n))
  $
    se
    $
  \lim_{n \to \infty}\frac{g(n)}{f(n)} = c
  $
    onde c é uma constante

- Por exemplo, ao dizermos que $g(n) = O(n2)$, em matemática essa informação é expressa por um limite:
  $$
    \lim_{n \to \infty}\frac{g(n)}{n^2} = c
  $$

| -                                            | $n$      | $g(n)$        | $f(n)$        | $c$          |
| -------------------------------------------- | -------- | ------------- | ------------- | ------------ |
| $g(n) = 5n^2 + 15$                           | $10$     | $515$         | $100$         | $5,1500$     |
| $f(n) = n^2$                                 | $100$    | $50.015$      | $10.000$      | $5,0015$     |
| $\lim_{n \to \infty}\frac{g(n)}{f(n)} = c$   | $1000$   | $5.000.015$   | $1.000.000$   | $5,000015$   |
| $\lim_{n \to \infty}\frac{5n^2+15}{n^2} = 5$ | $10.000$ | $500.000.015$ | $100.000.000$ | $5,00000015$ |

- Se outro algoritmo para o mesmo problema tem função de complexidade $g'(n) = O(n)$, podemos comparar $g(n)$ e $g'(n)$ e, consequentemente, comparar a eficiência dos programas que os implementam
- Em um deles, o tempo de execução é linear (dobrando o tamanho de entrada, dobra o tempo de execução) e, no outro, o tempo é quadrático (dobrando o tamanho da entrada, o tempo de execução quadruplica)

## Operações com a Notação O

- $f(n) = O(f(n))$
- $c * O(f(n)) = O(f(n))$ onde c é uma constante
- $O(f(n)) + O(f(n)) = O(f(n))$
- $O(O(f(n))) = O(f(n))$
- $O(f(n)) + O(g(n)) = O(max(f(n),g(n)))$
- $O(f(n))O(g(n)) = O(f(n)g(n))$
- $f(n)O(g(n)) = O(f(n)g(n))$

## Classes de Comportamento Assintótico

- Se 2 funções f e g possuem o mesmo comportamento assintótico, então os algoritmos associados a essas funções são equivalentes
- Nestes casos, o comportamento assintótico não serve para comparar os algoritmos
  - Exemplo: Seja $f(n) = 3g(n)$, sendo que $O(f(n)) = O(g(n))$
- Algumas funções elementares são usadas como referência para classes de funções de complexidade que as têm como limite superior

### $O(1)$ | Complexidade constante

- O uso do algoritmo independe do tamanho de _n_
- As instruções do algoritmo são executadas um número fixo de vezes

### $O(\log{n})$ | Complexidade Logarítimica

- Ocorre tipicamente em algoritmos que resolvem o problema quebrando-o em problemas menores
- Exemplo: $\log_{2}n$
  - $n = 1.000 \approx 10$
  - $n = 1.000.000 \approx 20$

### $O(n)$ | Complexidade Linear

- Em geral, um pequeno trabalho é realizado sobre cada elemento da entrada
- Cada vez que _n_ dobra de tamanho, o tempo de execução também dobra

### $O(n \log n)$

- Algoritmos que resolvem parte do problema em tempo linear e outra parte em tempo logarítmico
  - Quebrando-o em problemas menores e depois juntando as soluções
- Exemplo: $n \log_{2}n$
  - $n = 1.000.000 \approx 20.000.000$
  - $n = 2.000.000 \approx 42.000.000$ (pouco mais que o dobro)

### $O(n^2)$ | Complexidade quadrática

- Algoritmos dessa ordem de complexidade ocorrem quando os itens de dados são processados aos pares, muitas vezes em um laço dentro de outro
- Exemplo: quando _n_ é 1.000, $f(n)=1.000.000$
  - Sempre que _n_ dobra, o tempo de execução é multiplicado por 4
- Algoritmos desse tipo são usados para resolver problemas de entradas relativamente pequenas

### $O(n^3)$ | Complexidade cúbica

- Algoritmos dessa ordem de complexidade são úteis para resolver problemas de entradas pequenas
- Exemplo: quando _n_ é _100_, $f(n)=1.000.000$
  - Sempre que n dobra, o tempo de execução é multiplicado por _8_

### $O(2^n)$ | Complexidade exponencial

- Algoritmos dessa ordem de complexidade geralmente não são úteis do ponto de vista prático
- Eles ocorrem na resolução de problemas por força bruta
- Exemplo: quando _n_ é _20_, $f(n)=1.000.000$
  - Sempre que _n_ dobra, o tempo de execução fica elevado ao _quadrado_

### $O(n!)$ | Complexidade fatorial

- Apesar da complexidade _O(n!)_ ser muito pior que os de complexidade _O(2^n)_ eles também são ditos de complexidade exponencial
- Eles também geralmente ocorrem na resolução de problemas por força brut
- Exemplo: quando _n_ é _20_, $f(n)=2.432.902.008.176.640.000$ (um número de 19 dígitos)
