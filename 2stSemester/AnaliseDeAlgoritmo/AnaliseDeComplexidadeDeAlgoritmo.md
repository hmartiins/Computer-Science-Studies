# Análise de Complexidade de um Algoritmo 🔎👨‍💻

- Serve para verificar um esforço computacional
  <br>
  <br>
- Vantagens:
  - Mais simples de ter medidas simples para dizer a eficiência de um algoritmo do que implementar e tetar sempre que o algoritmo for alterado
  - Um programa complexo possui diferentes pequenos algoritmos dentro dele, muito mais complicado testar todas as alternativas diferentes
    <br>
    <br>
- O que desejamos é uma avaliação do algoritmo independentemente de sua implementação
- Em função do número de operações executadas por esse algoritmo em uma determinada etapa
- São consideradas somente as instruções preponderantes
  - Preponderantes == operações básicas para a execução do algoritmo
- Número de vezes que as operações são executadas resultam na complexidade do algoritmo
  <br>
  <br>
- A complexidade de um algoritmo depende de sua entrada e está é caracterizada pelo tamanho de sua configuração
  <br>
  <br>
- O custo de execução de um algoritmo é comum definir uma função de complexidade, onde _f(n)_ é a medidade do tempo necessária para executar um algoritmo para um problema de tamanho _n_

Exemplo com código:

```ts
function maior(vetorInteiros: int[]) {
  let maior = vetorInteiros[0];

  for (let i = 1; i >= vetorInteiros.length - 1; i++) {
    if (vetorInteiros[i] > maior) {
      maior = vetorInteiros[i];
    }
  }

  return maior;
}
```

- Seja _f_ uma função de complexidade tal que _f(n)_ é o número de comparações entre os elementos de _A_, se _A_ contiver _n_ elementos

**Anotação**

$$
f(n) = \sum_{i=1}^{n-1}1
$$
