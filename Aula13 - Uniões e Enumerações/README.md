# Aula 13 - Uniões e Enumerações | União versus Registro | Enumerações com Escopo

## Uniões

--- 

Assim como registros, uma união pode armazenar diferentes tipos de dados e é definida pela seguinte estrutura

```C
union identificador {
  char ch;
  int num;
  double frac;
};
```

A diferença entre um registro e uma união é que a união só armazena um de seus membros por vez, enquanto o registro armazena todos os seus membros de uma vez. Assim o identificador armazena um char **ou** um int **ou** um double.

Isso acontece pois os membros compartilhar a mesma posição de memória e o tamanho do bloco é igual ao do maior membro. Assim o `identificador` do exemplo tem o tamanho de um double. 

```C
identificacor id;

id.ch = 'a';  //char
cout << id.ch; // a 
id.frac = 3.8; // double
cout << id.frac; // 3.8
cout << id.ch; // lixo sobrescrito pelo double
```

A união é usada para economizar memória quando um item pode usar dois ou mais formatos mas nunca ao mesmo tempo. Um exemplo é o número serial de um software que pode ser uma chave inteira ou um código de caracteres.

```C
union regkey {
  int chave;
  char codigo[10];
  };

struct software {
  char nome[20];
  float preco;
  regkey serial;
  bool tiporg; // tipo utilizado para serial.
};
```

### Tipo String 

---

O tipo string pode ser definido internamente por meio de uniões (em geral, o tipo string depende de sistema pra sistema). 

```C
struct string {
  bool type;
  union {
    char small[12];
    struct {
      char *str;
      int size;
      int capacity;
    } normal; 
  } data;
};
```

## Enumerações 

--- 

Uma enumeração consiste num conjunto de constantes inteiras, em que cada uma é representada por um nome 

```C
enum cores {verde, amarelo, azul, branco, preto}
```

Essa instrução define cores como o nome de um novo tipo e faz dos nomes verde, amarelo, azul, branco e preto constantes para os valores 0, 1, 2, 3, 4.

Fornece uma forma rápida de criar várias constantes e equivale ao seguinte 

```C
const int verde= 0;
const int amarelo=1;
const int azul=2;
const int branco=3;
const int preto=4;
```

A diferença da implementação, além da simplicidade na escrita, é que ela define novos tipos que só podem assumir um valor. Ela é usada quando conhecemos o conjunto de valores que uma variável pode assumir e desejo usar nomes para esses valores dentro do programa

```C  
enum cores {vermelho, amarelo, verde, azul, preto};
enum sexo {masculino, feminino};
enum direcao {norte, sul, leste, oeste};
```

Observações:

- Se a intenção é criar apenas constantes sem ter um tipo, podemos omitir seu nome:

```C
enum {vermelho, amarelo, verde, azul, preto};
```

- Valores podem ser explicitamente definidos 

```C
enum bits {um=1, dois=2, quatro=4, oito=8};
```

- Alguns valores podem ser omitidos 

```C
enum bigstep {primeiro, segundo=100, terceiro}; // terceiro é 101
```

- Valores podem ser repetidos

```C
enum {zero, nulo=0, one, um=1};
```

### Declaração de Variáveis 

Podemos criar variáveis com enumerações. Nesse caso só podemos atribuir valores definidos na enumeração

```C
enum {vermelho, amarelo, verde, azul, preto};
cores tinta;

tinta = azul;
tinta = 2000; // invalido 
tinta = 2; // invalido;

tinta = cores (3); // válido por type cast estilo C++
tinta (cores) 3; // valido, type cast estilo C 
int a = azul; // válido, conversão automática
```

### Enumerações com Escopo 

As enumerações tradicionais tem alguns problemas:

- Duas definições podem ter nomes conflitantes: 

```C
enum pacote {pequeno, grande, largo, jumbo};
enum camisa {pequena, media, grande, extragrande};
```

- O tipo de um enumerador (as constantes definidas) é dependente da implementação: elas podem ser constantes de qualquer tipo inteiro, contudo a partir de C++11 é permitido especificar o tipo

```C
enum direcao : short {norte, sul, leste, oeste};
```

- Enumeradores são implicitamente convertidos para inteiros em atribuições `int num = vermelho` e em comparações `if (num < preto)`. Vermelho e preto nesses casos são convertidos para 0 e 4.  

Para resolver esses problemas, C++11 definiu uma nova forma de enumeração que fornece escopo aos enumeradores. 

- Enumeradores são de tipo int quando o tipo não é indicado 

```C  
enum class pacote { pequeno, grande, largo, jumbo };
enum class camisa { pequena, media, grande, extragrande };

pacote leite = pacote::grande; // mencionamos o escopo do enumerador "grande" e
                               // é preciso menciona-lo
camisa promo = camisa::grande; // usamos novamente o enumerador "grande" mas com
                               // o escopo da camisa.

int tamanho = camisa::media; // conversão implícita não permitido
int carga = int(pacote::jumbo); // conversão explicita permitido.

```
