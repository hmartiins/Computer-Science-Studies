# Busca Binária 🔎👨‍💻

- O vetor que realizaremos a busca precisará estar ordenado
- O método consiste em reduzir o vetor sucessivamente a subveteores cada vez menores, assim diminuimos a faixa de elementos em que realizamos a busca, até encontrarmos nosso elemento

- Ao comparar _`X`_ com um elemento _`a[i]`_ pode ocorrer:
  - x = a[i]: busca bem sucedida;
  - x < a[i]: a busca deve prosseguir aos subvetores dos elementos que antecedem a[i];
  - x > a[i]: a busca deve prosseguir no subvetor da direita, formada pelos elementos que sucedem a[i].

```ts
function binarySearch<Number>(
  list: Number[],
  numberFound: Number
): Number | null {
  let low = 0;
  let high = list.length - 1;

  let mid = 0;
  let guess: Number;
  while (high >= low) {
    mid = Math.floor((low + high) / 2);
    guess = list[mid];

    if (guess === numberFound) {
      return guess;
    } else if (guess > numberFound) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return null;
}
```
