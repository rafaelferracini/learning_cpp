# Aula 09 - Operadores Aritméticos | Conversões de Tipo | Type Cast 

## Introdução

---

O C++ oferece os seguintes operadores para calculo básico

1. Soma +
2. Subtração - 
3. Multiplicação *
4. Divisão / 
5. Módulo %

Os operadores e seus operandos formam uma determinada expressão cujo resultado é armazenado em um local temporário de memória. O tipo dessa memória depende dos operandos e a atribuição do resultado é feito após a avaliação da expressão

## Precedência de Operadores

---

Quando mais de um operador pode ser aplicado ao mesmo operando, C++ usa regras de precedência para decidir

1. Multiplicação / Divisão / Módulo

2. Soma / Subtração

Se os operadores têm a mesma precedência, C++ usa regras de associatividade (esquerda ou direita): Todos os operadores aritméticos são associativos à esquerda 

## Ordem de avaliação

--- 

A ordem de avaliação dos operandos é independente da precedência e da associatividade dos operadores 

```C
int total = f() + g() * h() - i();
```

- A precedência garante que os resultados de `g()` e `h()` são multiplicados primeiros
- A associatividade garante que `f()` será somado ao produto de `g()` com `h()` e que esse resultado será subtraído do valor de `i()`
- Contudo, nada garante a ordem de chamada das funções

## Operador de Divisão 

--- 

O resultado do operador de divisão depende dos operandos. 

- Se os dois operando são inteiros, o resultado é sempre inteiro `5 / 2 = 2`

- Se pelo menos um dos valores é ponto flutuante, então o resultado é usual `5 / 2.0`, `5.0 / 2`, `5.0 / 2.0`   

## Operador Módulo 

--- 

Retorna o valor do resto da divisão **inteira**. Uma aplicação é quando estamos interessados em separar uma parte inteira de um número de sua parte fracionária como em uma conversão de valor 

### Aplicação: Separação entre partes fracionárias 

```C
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  const int CentavosPorReal{100};
  int valor;

  cout << "Digite um valor em centavos: ";
  cin >> valor;

  int reais = valor / CentavosPorReal;
  int centavos = valor % CentavosPorReal;

  cout << valor << " centavos correspondem a \n"
       << reais << " Reais e " << centavos << " centavos" << endl;
  return 0;
}
```


### Aplicação: Limitador de um Resultado 

O valor do resultado da operação de `valor % n` sempre retorna algo na faixa de 0 a n-1. Isso é particular útil para limitarmos valores aleatórios a uma determinada faixa 

```C
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  int min, max;
  cout << "Entre com os valores min e max: ";
  cin >> min >> max;

  cout << "Sorteando um valor nesta faixa: " << endl;
  int sorteio = min + rand() % (max - min + 1);
  cout << sorteio << endl;
  return 0;
}

```


