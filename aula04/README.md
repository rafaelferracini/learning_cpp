# Aula 04 - Modularidade e Funções | Protótipo | Definição | Função

## Função

---

Em matemática, uma função $f: A \to B$ é uma regra que associa um elemento do domínio $A$ a um único elemento no contradomínio $B$. Em programação não é diferente, uma função será um pedaço de código que recebe parâmetros e retorna um certo valor.

A interface de uma função é chamada de **protótipo** da função e em C++ sempre deve ser devido por uma instrução de declaração do tipo `double sqrt(int){}` (isto é, a função `sqrt` recebe um valor `integer`  e retorna um `double`).

Funções em C++ podem ainda não retornar valor algum, nesse caso declaramos a função como um tipo `void`. Note que esse tipo de função não pode ser atribuída a uma variável

## Modularidade

---

As funções tem como principal objetivo possibilitar a fragmentação do código em problemas menores e reaproveitamento de código (evitar repetição de um mesmo bloco de código) e é a principal característica da **programação estruturada**

* Facilita a manutenção do código
* Encapsula a solução
* Cria uma interface para o programa

## Criando funções

---

Para criar uma função, precisamos

1. Fornecer o protótipo da função,
2. Definir a função,
3. Chamar a função.

```C
#include <iostream>
using namespace std;

void simples(int); // protótipo da função simples que recebe um inteiro

int main() {
  simples(3); // chamado da função simples

  return 0;
}

void simples(int n) { // definição da função simples
  cout << "Eu sou uma função simples que recebe o valor " << n << endl;
}
```
