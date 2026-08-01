# Aula 03 - Variáveis, constantes e atribuição | Entrada com cin | Depuração

Vimos anteriormente que um programa é uma sequência de instruções que inicia pela função principal que é definida de forma unívoca no projeto

## Constantes

---

Constantes são valores fixos e inalteráveis durante a execução de um programa. Podem ser atribuídos a tipos numéricos, carácter, string ou booleana (true ou false)

Constantes numéricas podem ser representadas em diferentes bases numéricas

* Decimal: número na base 10 são escritos de forma direta, e.g `8390`
* Hexadecimal: número na base 16 e são precedidos por 0x. e.g `0x20C6`
* Octal: número na base 8 e são precedidos por um 0, e.g `020306`
* Binário: número na base 2 e são precedidos por 0b, e.g `0b10000011000110`

Ao passar para o compilador em um cout ele continua retornando na base decimal

```C
 
#include <iostream>
using namespace std;

int main() {

  cout << 25 << endl; // 25
  cout << 0x19 << endl; // 25
  cout << 031 << endl; // 25
  cout << 0b11001 << endl; // 25
}
 ```

Constantes do tipo carácter deve ser escrito entre aspas simples `'a'`, `'b'`, etc, enquanto do tipo string devem ser escritas entre aspas duplas `"Olá, mundo`, `"a"`. (note que essa segunda é interpretado pelo compilador como um conjunto de carácter apesar de constar apenas um)

## Variáveis

---

Uma variável permite ao programador guardar informações e podem ser alteradas durante a execução do programa. A informações guardadas em variáveis são armazenadas na memória do computador

| Dados   | Endereço    |
|-------- | :---------: |
|         | 0xCB20      |
|         | 0xCB21      |
|         | 0xCB22      |
|         | 0xCB23      |

Os espaços da memória disponíveis para alocação são indexados por valores hexadecimais, sendo que cada endereço comporta 1 byte (8 bits).

### Declaração de Variáveis

  Assim, ao fazermos a **declaração de variáveis**, anexamos a determinado endereço uma sequência de bits. No caso, por exemplo, de um tipo inteiro, será ocupado 4 bytes, ou seja, é necessário 4 endereços para guardar a informação de um número inteiro. Ao fazer a declaração `int cenouras` será alocado 4 espaços na memória e a **variável** `cenoura` faz referência ao primeiro endereço de memória reservada para ela

A atribuição de um valor em um endereço de memória é feito a partir do operador de atribuição `=`.

| Dados       | Endereço      | Variável    |
|:--------:   | :-----------: | :-------:   |
| 00100110    | 0xCB20        | =  cenoura  |
| 00001100    | 0xCB21        |             |
| 00110110    | 0xCB22        |             |
| 01011000    | 0xCB23        |             |
|             | 0xCB24        |             |
|             | 0xCB25        |             |
| 01110010    | 0xCB26        | =  outra var|
|  01001101   | 0xCB27        |             |

OBS: Em C++ todas as variáveis devem ser declaradas (isto é, passado sua tipagem e nome) e podem ser declaradas em qualquer ponto do programa que seja anterior ao seu uso.

Podemos também sobrescrever o valor de variáveis , como `cenoura = cenoura + 1`. Nesse caso, o compilador primeiro executa a operação à direita e depois atribuí esse valor a variável `cenoura`

### Exibindo variáveis

O comando cout é capaz de exibir o conteúdo de variáveis e consegue identificar o tipo de dado e convertê-lo para a saída em formato texto.

```C
cout << "cenouras";
cout << cenouras;
cout << "25";
cout << 25; // o cout sabe que 25 nesse caso é um tipo inteiro 
```

em contra partida, a função `printf()` em C não consegue fazer essa distinção, sendo necessário identificar com %[tipo]

```C
printf("String: %s", "cenouras");
printf("Inteiro: %i", cenouras);
```

## Entradas de Dados

---

A biblioteca `iostream` tem também a instrução para entrada de dados, `std::cin`. `cin` acessa a entrada padrão do computador (teclado) e extrai utilizando `>>` para uma variável

```C
int cenouras;
cin >> cenouras;
```

Permite também concatenar múltiplas leituras em uma única instrução

```C
int cenouras, bananas, abacaxi;
cin >> cenouras >> bananas >> abacaxi; // admite entrada separadas como 20 24 30, ou 20 <enter> 24 <enter> 30
```

### Buffer do teclado

A entrada de texto com `std::cin` utiliza um buf
fer. Digitamos os dados separados por espaço até pressionar enter. Assim, o cin irá ler os valores até encontrar espaço e pular para o proximo cin, até o ultimo encontrar \n. Exemplo

| Buffer |     |     |     |     |     |     |      |
|:------:|:---:|:---:|:---:|:---:|:---:|:---:|:----:|
| '3'    | '8' | ' ' | '2' | '9' | ' ' | '2' | '\n' |

```C
cin >> x; // le 3 e 8, encontra espaço e pula
cin >> y; // le 2 e 9 encontra espaço e pula
cin >> z; // le 2 e encontra \n finalizando o buffer
```
