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

## Conversões de Tipos Automáticas

--- 

A exigência de muitos tipos de dados permite ao programador usar o que for mais adequado a suas necessidades, porém em muitos situações os tipos de dados começam a se misturar. Para isso a linguagem faz algumas conversões automáticas. Essas são feitas em 3 situações diferentes 

1. São feitas em atribuição de variáveis, quando o valor é de tipo diferente da variável 

```C
int valor = 2.5; // atribui apenas 2
float resultado = 10; // atribui 10.0
```

2. Em expressões quando combinam valores/variáveis de tipos diferentes 

```C
int total = 2 + 3.5 + 1; // 6.5 mas atribui 6 
float resultado = 11 / 2.0 // 5.5 (double) mas atribui 5.5f
```

3. Na passagem de argumentos para as funções, quando os argumentos tem tipos diferentes dos parâmetros

```C
double soma (double, double);
soma (3, 5) // chama a função com 3.0 e 5.0
```

### Conversões na Atribuição 

C++ é literal na atribuição de valores numéricos de forma que ao atribuir o valor de uma variável para outra com maior capacidade (do mesmo tipo) não ocasiona nenhum problema. Por exemplo, podemos atribuir o valor de uma variável `char` (8 bits) para dentro de uma variável `short` (16 bits)

```C
char mar = 102;
short sol = mar; // char é convertido em short 
// mar:                 0 1 1 0 0 1 1 0
// sol: 0 0 0 0 0 0 0 0 0 1 1 0 0 1 1 0

```

Por outro lado, se tentarmos fazer o processo inverso iremos perder informação dos bits de ordem mais alta 

```C
short sol = 280;
char mat = sol;
// sol: 0 0 0 0 0 0 1 0 0 0 1 1 0 0 0 
// mar:               0 0 0 1 1 0 0 0 
//                  1: informação perdida
```

### Conversões em expressões

- Alguns tipos são **promovidos** (i.e levados para um tipo maior) sempre que são usados em expressões. São o caso de `char` e `short` que são promovidos para `int`   
```C
char ch1 = '%';
char ch2 = '&';
short galinhas = 20;
short patos = 35;

// char é convertido para int e o resultado int para char
char ch = ch1 + ch2;

// short é convertido para int e o resultado int para short
short aves = galinhas + patos;
```

Isso acontece porque as unidades lógicas do processador não tem registradores de tamanhos de short ou char, mas apenas para tipo inteiro. Quando a conta é feita ele atribui para a memória o bloco de tamanho certo.

- Alguns tipos são convertidos quando combinados com outros tipos.

1. Quando uma operação envolve dois tipos, o menor é convertido para o maior 
```C
// o valor 5 é convertido para double
float total = 9.0 / 5;

// o valor 5 é convertido para long long
long long val = 1343474238947 + 5;
```

2. Quando os tipos são iguais não ocorre conversão nenhuma e nesse caso é preciso tomar cuidado com o sufixo do número. Caso contrário podemos tentar armazenar em uma variavel long long algo que sai de uma operação de inteiros

```C
  long long a, b, c, d;

  a = 379834789324;
  b = 34749238 * 2903; // overflow in expression; result is 2'092'790'106 with type 'int'
  c = 100032238LL * 2009; // sufixo LL garante que é long long, logo o tipo menor é convertido para o maior
  d = 184233899043980 * 2009; // o número da esquerda já é long long (pois nao cabe em um int), logo o compilador ja entende
```

### Conversões em Funções 

O protótipo da função controlam as conversões nas passagem de argumento

```C
float soma(float, float);

float a = soma(3,4); // funcao converte 3 e 4 para float
int b = soma(3.0, 4.0); // funcao converte para float e retorno de float para int na atribuição
float c = soma(3.0f, 4.0f);

```

## Type Casts

--- 

A linguagem permite ao programador forçar conversões

```C
float parcial = 5.4;
int resultado = int (3.8) + int (parcial);

int total = int (parcial); // estilo c++
int total = (int) parcial; // estilo c 

cout << int ('A'); // 65
cout << char (65); // A

long long bignum = long long (10'000'000'000) * 2009
```


## Declarações auto 

--- 

C++11 introduziu a possibilidade de deduzir o tipo a partir do valor de inicialização usando o fato do compilador já conhecer o tipo da constante que está sendo atribuída a variável e deduzindo o tipo da variável a partir dela
```C
auto n = 100;
auto x = 1.5f;
auto y = 1.3e5; 
```

Contudo o `auto` foi utilizado para dedução de automática de casos mais complexos, especialmente POO 
```C
vector<double> vet; 
vector<double>::iterator i = vet.begin();
auto i = vet.begin(); // note a complexidade do tipo, mt longo pra ficar digitando
```
