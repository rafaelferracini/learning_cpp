# Aula 10 - Vetores | Const versus Constexpr 

## Introdução

--- 

Os programas são compostos por 3 elementos básicos: 

1. Instruções: entrada, saída, atribuição, etc 

2. Expressões: aritméticas, binárias, etc.

3. Dados: variáveis e constantes 

As variáveis e constantes armazenam informações ocupando um espaço na memória e possuem uma determinada tipagem inteira (char, int) e ponto flutuante. Esses dois tipos de dados básicos não são suficientes para resolver todo tipo de problema.

Imagine que quer armazenar 30 valores distintos (e.g notas de alunos). Se dependermos desses tipos básicos, teríamos que definir 30 variáveis diferentes. Isso piora ainda se querermos ainda armazenar mais dados acerca de cada aluno como CPF, nome, notas, etc. 

Para esse problema foi definido tipos compostos de dados que servem para armazenar multiplos valores, como:

1. Vetores

2. String

3. Registros 

4. Uniões 

5. Enumerações 

Esses novos tipos são definidos baseados nas tipagens básicas.

## Vetores

--- 

Um vetor armazena múltiplos valores de mesma tipagem. Para criar um vetor utiliza-se uma instruções de declaração, que deve ter a forma:

```text
<tipo> <nome>[<tamanho>];
```

Por exemplo, um vetor que armazena 365 inteiros

```C
int visitas[365]
```

OBS: O tamanho do vetor deve ser um valor inteiro constante podendo ser fruto de constantes declaradas ou expressões que retornam um inteiro constante (valores que o compilador conhece)

```C
float notas[30];

int tamanho = 30;
int notas[tamanho]; // Não pode pois tamanho é uma variável 

const int Max = 30;
float notas[Max]; // agora pode pois Max é definida como uma constante

int num[5 * sizeof(int)];

const int Tam = 5 * sizeof(int); // nesse caso é possível pois o compilador ja sabe o valor de sizeof(int)
int num[Tam];
```

## Constexpr 

--- 

Para sabermos se um valor pode ser dado como o tamanho de um vetor temos a expressão `constexpr` que declara uma constante que pode ser inicializada apenas para valores conhecidos na compilação do programa 

```C
const int Qtd = 30; // para saber se podemos utilizar isso como tamanho do vetor fazemos 
constexpr int Qtd = 30; // e de fato isso passa pelo compilador, logo o resultado é conhecido na compilação do programa 

const int Tam = 5 * sizeof(int);
constexpr int Tam =  5 * sizeof(int);

const int Max = rand(); // também é um valor constante 
constexpr int Max = rand(); // esse não passa pelo compilador, pois o valor de rand() só é determinado a partir da execução e não durante a compilação
```

## Inicialização de vetores
--- 

Os elementos dos vetores são armazenados na memória em posição consecutivas, com cada elemento sendo representado por um índice que inicia em 0. 

```C
int vet[5];
```
```
```

Os elementos são acessados individualmente pelo seus respectivos índices 

```C
int visitas[365];

visitas[0] = 38;
visitas[1] = 54;
```

outra forma de inicializar os vetores é atribuindo o valor diretamente na declaração

```C
int custo[3] = {30, 20, 15}; // essa notação só funciona com inicialização

int custo[3];
custo = {10, 20, 30} // não funciona precisa atribuir individualmente 
custo[0] = 10 ;
custo[1] = 20;
custo[2] = 30;

```

vetores não inicializados possuem lixo de memória pois o programa fixa a posição do vetor na memória que já foi usada para outra coisa.

Não é possível definir um vetor dentro de outro 

```C
int cartas[4] = {10, 20, 30, 40};
int mao[4];
mao = cartas
```

Isso acontece pq o programa guarda o vetor como sendo um endereço na memória, então é como se quisessemos guardar o endereço da memória de `cartas` em `mao`, mas `mas` em si também é apenas um endereço e não um espaço.

Ainda é possível inicializar um vetor em alguimas posições (e nao o vetor inteiro) e nesse caso as demais posições são inicializadas com 0. 

```C
float vet[100] = {5, 4} // o primeiro valor é 5, o segundo é 4 e os demais são 0 

float vet[] = {0} // o vetor inteiro vira 0
```

Se não for passado o tamanho do vetor, mas sim seus elementos, o compilador assume que a quantidade elementos passados é o tamanho do vetor

```C
short vet[] = {1, 2, 3, 4} // vet tem tamanho 3
```


