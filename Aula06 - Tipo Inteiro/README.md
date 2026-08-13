# Aula 06 - Tipos Inteiros | Variáveis | Constantes | Overflow | Underflow
Computadores trabalham com diversos tipos de dados (texto, números, audios, etc...) e independente do tipo de dado tratado ele lê como sendo um conjunto de bits. Os dados são gravados em **unidades de armazenamento**  e carregados na **memória** para a execução. Outra forma de um programa obter dados é lendo-os a partir da entrada para memória (teclado, mouse, etc...).

Por outro lado, os programas geram dados armazenando-os na memória, transferindo para arquivos e escrevendo na saída (tela). Para guardar um dado na memória o programa precisa definir:

1. Onde os dados são guardados: Em que enderenço na memória?

2. Que tipo de dado é guardados: inteiro, caracteres? Se isso não for especificado um dado da forma `00100110011100110110100101001110` pode ser interpretado tanto como `645.097.806` ou `&siN`  

3. O valor a ser armazenado.

Na programação esse processo é feito pela declaração das variáveis no nosso programa. 

```C
int total; // declaração
total = 645097806 // atribuição
```

## Tipos Inteiros

---

### Bytes e Bits

A unidade fundamental de um computador é o bit que representam valores de 0 ou 1. 

* Se tomarmos 1 bit isolado, podemos representar dois números inteiros (*resp.* 0 e 1); 

* se tomarmos 2 bits podemos representar 4 números inteiros 

| Binario   | Decimal    |
|:-------------: | :-------------: |
| 00   | 0   |
| 01   | 1   |
| 10   | 2   |
| 11   | 3   |


* Se tomarmmos 3 bits podemos representar 8 inteiros 

| Binario   | Decimal    |
|:-------------: | :-------------: |
| 000   | 0   |
| 001   | 1   |
| 010   | 2   |
| 011   | 3   |
| 100   | 4   |
| 001   | 5   |
| 010   | 6   |
| 111   | 7   |

* ...

Definimos `1 byte = 8 bits` de forma que `1 byte`  consegue armazenar inteiros até 255. Assim,

* 1 byte (8 bits): 256 valores
* 2 byte (16 bits): 65.536 valores
* 4 bytes (32 bits): 4.294.672.296 valores 
* 8 bytes (64 bits): 18.446.744.073.709.661.615 valores 

### Números positivos e negativo

Um conjunto de bits pode também representar números negativos, mas é preciso restringir um bit para representar o sinal. COnvenciona-se que o último bit (direita para a esquerda) representa o sinal. Assim um byte pode representar 256 valores sem sinal, ou 128 valores com sinal.

* `11111111`: 255 
* `11111111`: -127

### Tipos Inteiros 

Para englobar essas diversas possibilidades, C++ define diversos tipos inteiros

* `char`: 1 byte (8 bits). Caracters são tipo inteiros devido sua correspondência com a tabela ASCII

* `short int`: 2 bytes (16 bits)

* `int`: 4 bytes (32 bits)

* `long int`: 4 bytes (32 bits) 

* `long long int`: 8 bytes (64 bits)

OBS: Todos os tipos derivados de `int` podem ser encurtados mencionando apenas sua extensão `short`, `long` ou `long long`.

Note a peculiaridade entre `int` e `long`, ambos possuem o mesmo tamanho. Isso acontece pois é dependente do sistema operacional. Para windows 32/64bits, Linux 32bits e MacOS 32bits o long tem 32 bits enquanto para Linux 64bits e MacOS 64bits o long tem 64 bits. Essa incompatibilidade surge por razões históricas. Para saber em nosso ambiente usamos `sizeof()` e a biblioteca `climits` que possuem informações sobre os valores máximos e mínimos pelo seguinte código

```C

#include <climits>
#include <iostream>
using namespace std;

int main() {

  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "short tem: " << sizeof n_short << " bytes. \n";
  cout << "int tem: " << sizeof(int) << " bytes. \n";
  cout << "long tem: " << sizeof n_long << " bytes. \n";
  cout << "long long tem: " << sizeof n_llong << " bytes. \n\n";

  cout << "Valores Máximos:\n";
  cout << "short: " << n_short << endl;
  cout << "int: " << n_int << endl;
  cout << "long: " << n_long << endl;
  cout << "long long: " << n_llong << endl;
  return 0;
}
```

Obtemos o output

```text

short tem: 2 bytes. 
int tem: 4 bytes. 
long tem: 8 bytes. 
long long tem: 8 bytes. 

Valores Máximos:
short: 32767
int: 2147483647
long: 9223372036854775807
long long: 9223372036854775807

```

Note que `long` e `long long` são equivalentes no Linux


### sizeof

O comando `sizeof()` utilizado é de extrema importancia e tem a função de retornar o espaço ocupado da memória de um tipo ou uma variável. Caso seja passado para um tipo, é obrigatório o uso dos parenteses, enquanto para variáveis é opcional.

```C
sizeof(int) // passagem para tipo 
sizeof variavel // passagem para variável
```


### Define 

A biblioteca `<climits>` introduz as constantes simbólicas `INT_MAX`, etc. a partir da diretriz de pré processamento `define`. Essa diretriz atua no pré-processamento localizando a definição e substituindo pelo valor definido. Pode ser usado para constante universais como o valor de PI 

```C
#include <iostrem>
#define PI 3.14159

int main(){
  std::cout << "O valor de PI é " << PI;
}

```

### Inicialização de variáveis

Podemos inicializar variáveis de forma alternativas (mais modernas)

```C
int num = 101; // versão antiga valida em C/C++
int num (101); // valida para C++;
int num = {101}; // valida em C++11 para frente 
int num {101}; // valida em C++11 para frente.
```

O C++ tem feito um esforço em padronizar inicializações por chaves, tal como será feito em vetores.

### Tipos sem sinal

Abordamos a necessidade de alocar um bit para a introdução de um sinal nos tipos. Também temos tipagens para variáveis que só iram assumir valor positivos, aumentando o espaço para números positivos. Isso é feito com a palavra chave `unsigned` nas definição da variáveis./


## Constantes Inteiras 

--- 

Vimos anteriormente que para a inicialização de uma variável é preciso atribuir o valor de uma constante a ela, como:

```C
int total;
total = 33; // atribui a constante 33 a variável total.
```

Essa constante também ocupa um espaço na memória, chamado de rodata (read-only data), enquanto variáveis locais ocupam a stack. As constantes que ocupam rodata também possuem um tipo e um espaço associado a ele de forma que podemos indicar a quantidade de espaço a ser usado adicionado um sufixo à constante, como:

```C
int total = 33; // constante int
int total = 33L; // constante long 
int total = 33UL; // constante unsigned long 
int total = 33LL; //constante long long 
```

Isso é de extrema importancia, veja por um exemplo: 

```C
int main() {

  long multi = 10000000 * 200000000;

  return 0;
}
```

O valor associado a multi indicara overflow pelo compilador. Isso acontece pois para o sistema temos duas constantes de tipo inteiro sendo multiplicadas. O valor da multiplicação é em si é guardado na rodata e dão overflow no tipo inteiro. Mesmo tentando atribuir a uma variável tipo long, o próprio valor da constante é tal que a rodata fica em overflow. Para resolver esse problema devemos adicionar o sufixo L

```C
int main() {

  long multi = 10000000L * 200000000L;

  return 0;
}
```








