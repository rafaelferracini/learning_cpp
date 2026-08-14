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


