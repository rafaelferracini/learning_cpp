# Aula 07 - Tipos Caractere e Booleano | Tabela ASCII | Operadores Bit a Bit

## Tipo Caractere 

--- 

O tipo `char` armazena inteiros de 8 bits, isto é, acomoda números de -128 a 127 ou 0 a 255 para `unsigned char`. Ele é usado para armazenar caracteres.

Um conjunto de caracteres é mapeado para uma faixa de números usando uma tabela, sendo que a mais utilizado é a chamada Tabela ASCII, mas há um esforço para padronizar o Unicode para suporte internacional.

Quando inicializamos um tipo caracter, o valor armazenado na memoria é o referente ao número inteiro que corresponde àquele caracter na tabela ASCII e essa conversão é feita diretamente pelo cin e cout.

Por ser tratar de um tipo numérico podemos somar para iterar sobre o alfabeto, exemplo

```C
char ch = 'M'; // M corresponde ao codigo 78
ch = ch + 1; // ch passa a ser N 
```

Um caracter é iniciado por aspas simples ou pelo seu número da tabela 

```C
char ch = 'M';
char ch = 77;
```

### Caracteres especiais

Alguns códigos são especiais

| Caractere | Símbolo ASCII | Código C++ |
| --------------- | --------------- | --------------- |
| Nova Linha | | CR/LF | \n |
| Tabulação | HT | \t |
| Backspace | BS | \b |
| Alerta | BEL | a |
| Contra-Barra | \ | \\ |
| Aspa Simples | ' | \' |
| Aspa Duplas | " | \" |


## Tipo Booleano 

--- 


O tipo `bool` armazena um dos valores booleanos: Verdadeiro (true) e Falso (false) 

```C
bool booleano = false;
```

Ocupa 1 byte (e não 1 bit) pois a CPU não pode endereçar nada menor que um byte.

```C
bool booleano;
cout << sizeof(aviso) << " byte(s)" << endl; // 1 byte (s)
 ``` 


Internamente o tipo booleano atua como um tipo inteiro, representando o estado Falso caso esteja armazenado 0 e armazenando Verdadeiro para qualquer outro valor.

## Operadores Bit a Bit 

--- 

C++ oferece um conjunto de operadores para trabalhar com a representação binária dos inteiros.

| Operador | Significado | Uso |
| --------------- | --------------- | --------------- |
| ~ | NOT  | ~expr |
| << | LEFT SHIFT | expr1 << expr2  |
| >> | RIGHT SHIFT | expr1 >> expr2 |
| & | AND  | expr1 & expr2 |
| | | OR  | expr1 | expr2 |
| ^ | XOR  | expr1 ^ expr2 |

### Operador NOT

Inverte todos os bits 

```C
unsigned char estado = 1;
estado = ~estado;
```

| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
| --| --| --| --| --| --| --| --| --| --|
| 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 0 |

### Operador SHIFT

Ambos operadores << e >> deslocam uma certa quantidade de bits para a esquerda/direita

```C
unsigned char estado = 1;
estado = estado << 3;
```

| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 |
| --| --| --| --| --| --| --| --| --| --|
| 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 0 |

```C
unsigned char estado = 1;
estado = estado >> 3;

```
| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 |
| --| --| --| --| --| --| --| --| --| --|
| 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |



### Operador AND, OR e XOR 

...

## Operação com Bits 

--- 

Os operadores bit a bit são importantes para tratar as nossas variáveis em seus bits individuais, como ao fazer cada bit representar uma função (e.g, para fazer um sistema de lampadas poderíamos pensar em definir uma variável para cada lampada, mas podemos também fazer isso apenas definindo uma variável inteira - logo com 8 bits - em que cada bit ira representar uma lampada com 0 representando o estado ligado e 1 o estado desligado). Isto é extremamente importante para sistemas com limitação de memória, como em embarcados.

```C
#include <bitset>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  // Definimos que temos 5 lampadas ligadas
  unsigned char estadoLampada = 167; // 1 0 1 0 0 1 1 1

  cout << "Estado inicial: " << bitset<8>(int(estadoLampada)) << endl;
  int fliparLampada;

  cout << "------------------" << endl;
  cout << "Flipar qual lampada? ";
  cin >> fliparLampada; // e. g lampada 3

  unsigned char mascara = 1;          // 0 0 0 0 0 0 0 1
  mascara = mascara << fliparLampada; // 0 0 0 0 1 0 0 0

  cout << "Máscara: " << bitset<8>(int(mascara)) << endl;
  cout << "XOR    : " << bitset<8>(int(estadoLampada)) << endl;

  estadoLampada = estadoLampada ^ mascara;
  cout << "------------------" << endl;
  cout << bitset<8>(int(estadoLampada)) << endl;

  return 0;
}
```

```text
Estado inicial: 10100111
------------------
Flipar qual lampada? 3
Máscara: 00001000
XOR    : 10100111
------------------
10101111
```

Outra possível aplicação é checar se uma posição está ligada ou não, como no seguinte


```C
#include <bitset>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  // Definimos que temos 5 lampadas ligadas
  unsigned char estadoLampada = 167; // 1 0 1 0 0 1 1 1

  int verificarLampada;

  cout << "Verificar qual Lampada? ";
  cin >> verificarLampada; // e. g lampada 3
  cout << "------------------" << endl;

  unsigned char mascara = 1;             // 0 0 0 0 0 0 0 1
  mascara = mascara << verificarLampada; // 0 0 0 0 1 0 0 0

  cout << "Estado inicial: " << bitset<8>(int(estadoLampada)) << endl;
  cout << "Máscara       : " << bitset<8>(int(mascara)) << endl;
  cout << "------------------" << endl;

  /*
  inicial | mascara | retorno

  0 | 0 | 0
  1 | 0 | 0
  0 | 1 | 0
  1 | 1 | 1


  Logo corresponde a um AND
  */

  if (estadoLampada & mascara)
    cout << "Ligado" << endl;
  else
    cout << "Desligado" << endl;

  return 0;
}

```
```
```


## Tabela de tipos inteiros 

--- 

| Tipos | Bits | Faixa |
| :-------------: | :-------------: | :-------------: |
| bool | 8 | 0 a 1 |
| char | 8 | -128 a 127 |
| unsigned char | 8 | 0 a 255 |
| short | 16 | -32.768 a 32.767 |
| unsigned short | 16 | 0 a 65.535 |
| int | 32 | -2.147.483.648 a 2.147.483.647  |
| unsigned int | 32 | 0 a 4.294.967.295  |
| long | 32 | -2.147.483.648 a 2.147.483.647  |
| unsigned long | 32 | 0 a 4.294.967.295  |
| long long | 64 | -9.223.372.036.854.772.808 a 9.223.372.036.854.772.807 |
| unsigned long long | 64 | 0 a 18.446.744.073.709.661.615 | 


