# 🫧 Algoritmo Bubble Sort

O **Bubble Sort** (ou *Ordenação por Bolha*) é um algoritmo de ordenação simples e intuitivo. Ele percorre repetidamente a lista de entrada, compara elementos adjacentes e os troca de lugar se estiverem na ordem errada.

O nome deriva da forma como os elementos menores "flutuam" para o topo da lista (início) ou como os elementos maiores "borbulham" para o final da lista a cada iteração.

![Exemplo visual do Bubble Sort](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)

---

## ⚙️ Como funciona

O algoritmo funciona em etapas chamadas de "passagens" (passes):

1.  Começa no início do array.
2.  Compara os dois primeiros elementos.
3.  Se o primeiro for maior que o segundo, eles são **trocados**.
4.  Move para o próximo par e repete o processo até o final do array.
5.  Ao final da primeira passagem, o maior elemento estará garantido na última posição.
6.  O processo se repete para os elementos restantes (excluindo o último, que já está ordenado).

> **Nota:** Embora seja fácil de entender e implementar, o Bubble Sort raramente é usado em produção para grandes conjuntos de dados devido à sua baixa eficiência.

---

## 🚀 Exemplo Passo a Passo

Considere o array: `[5, 1, 4, 2, 8]`

**Primeira Passagem:**
* `[5, 1, 4, 2, 8]` → Compara 5 e 1, troca → `[1, 5, 4, 2, 8]`
* `[1, 5, 4, 2, 8]` → Compara 5 e 4, troca → `[1, 4, 5, 2, 8]`
* `[1, 4, 5, 2, 8]` → Compara 5 e 2, troca → `[1, 4, 2, 5, 8]`
* `[1, 4, 2, 5, 8]` → Compara 5 e 8, mantém → `[1, 4, 2, 5, 8]`

*O elemento **8** (o maior) agora está na posição correta.*

---

## 📊 Análise de Complexidade

A eficiência do algoritmo é medida usando a notação Big O:

| Caso | Complexidade de Tempo | Explicação |
| :--- | :---: | :--- |
| **Melhor Caso** | $O(n)$ | Ocorre quando a lista já está ordenada (requer flag de verificação). |
| **Caso Médio** | $O(n^2)$ | Ocorre em uma distribuição aleatória de elementos. |
| **Pior Caso** | $O(n^2)$ | Ocorre quando a lista está inversamente ordenada. |
| **Espaço** | $O(1)$ | É um algoritmo *in-place* (não requer memória extra significativa). |

---

## ✅ Vantagens e Desvantagens

### Vantagens
* **Simplicidade:** Fácil de entender a lógica.
* **Sem memória extra:** Não requer espaço auxiliar considerável ($O(1)$).
* **Estável:** Não altera a ordem relativa de elementos iguais (preserva a ordem original de chaves duplicadas).

### Desvantagens
* **Lentidão:** Extremamente ineficiente para listas grandes.
* **Excesso de trocas:** Realiza muitas operações de escrita na memória se os dados estiverem muito desordenados.

---

## 📚 Conclusão

O Bubble Sort é uma excelente ferramenta educacional para introduzir os conceitos de ordenação e análise de algoritmos, servindo como base para entender métodos mais complexos como Merge Sort ou Quick Sort.
