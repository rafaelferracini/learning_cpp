# Aula 12 - Registros | Structs | Criação de Tipos | Vetores de Registros

Registros são uma forma de definir tipos novos de variáveis. Vimos que vetores tem a vantagem de armazenar diversas variáveis em apenas um objeto, contudo continha a limitação de armazenar apenas um tipo de dados neles.  

Registros agrupam informações de tipos possivelmente diferentes, sob um único identificador, por exemplo, podemos definir um tipo `jogador` que possuí diversas informações nele 

```C
char nome[20];
int idade;
float peso;
double salario;
unsigned gols;
```

## Declaração 

Para declarar usamos a palavra chave `struct`, definimos o nome do registros e definimos os membros desse registros (isto é, as variáveis que ele comporta)

```C
struct jogador{
  char nome[20];
  int idade;
  float peso;
  double salario;
  unsigned gols;
}; //deve terminar em ;
```

Essa declaração não cria variáveis, apenas que tipo de informações serão armazenadas e define um nome para um novo tipo de dado. A declaração deve ser feita globalmente fora da função main no início do código.

Os membros dos registros são definidos por instruções de declaração de variáveis e pode-se usar qualquer tipo para variáveis (incluindo vetores ou mesmo outro registro já definido)

```C
struct data{
  short dia;
  short mes;
  short ano;
};

struct horario{
  short hora;
  short min;
  short seg;
};

struct evento{
  data dia; // não é um tipo de dado, mas é um registro definido
  horario hora;
  char lugar[40];
}
```

## Criação de Variáveis

Após a declaração de um registro, pode-se criar variáveis desse novo tipo 

```C
struct jogadr{
  char nome[20];
  float salario;
  unsigned gols;
};

jogador pele;
jogador zico;
jogador bebeto;

```

Em C era necessário mencionar ao criar a variável mencionar que era um struct da seguinte forma `struct jogador pele`. Contudo, em C++ não é mais necessário.

Essa variável aloca espaço na memória em ordem do tipo definido no struct. Então é reservado 20 bytes para o nome, em sequencia 4 bytes para o tipo float e 4 bytes para o unsigned gols. Os nomes internos (nome, salario, gols) são associados as suas posições iniciais na memória. 

Em geral os tipos novos d variáveis são definidos em arquivos .h

## Acesso ao Registro 

Os campos individuas de um registro são acessados através do operador membro (.)

```C 
struct jogador{
  ...
};

jogador zico;

zico.gols = 300;
zico.salario = 40000;
// zico.nome = "Zico" Lembre que nao pode atribuir strings a outras
strcpy(zico.nome, "Zico");


```

Podemos definir o nosso tipo juntamente com a atribuição na mesma ordem que é definida no struct

```C
jogador a = {"Romário", 2000, 600};
```

Cada membro do registro é tratado como uma variável, assim bebeto é do tipo jogador, bebeto.nome é do tipo char[40], bebeto.salario é do tipo float, bebeto.nome[0] é tipo char. Em especial isso é importante para podermos garantir que é possível passar os membros de um registro como parâmetro para uma função.

## Definições de Tipo 

Tipos definidos atraveś de registros se comportam de forma semelhante aos tipos básicos da linguagem C++. Assim registros podem ser passados como argumentos de funções

```C
void exibir(jogador);
int main(){
  jogador neymar = {"Neymar", 20000, 600};
  exibir(neymar);
}
```

Funções podem retornar o tipo novo 

```C
jogador ler() {
  jogador temp;
  std::cin >> temp.nome;
  std::cin >> temp.salario;
  std::cin >> temp.gols;

  return temp;
}
```

Registros podem ser atribuídos a outro de mesmo tipo

```C
jogador pele = {"pele", 20000, 200};
jogador romario;

romario = bebeto;
 ``` 

## Vetores de Registros

Pelo registro sem semelhante ao tipo básico, podemos criar vetores de registros 

```C
jogador equipe[22] = {
    {"Pelé", 10000, 1000},
    {"Neymar", 100000, 783}
  };

cin >> equipe[0].nome;
cin >> equipe[0].salario;
cin >> equipe[0].gols;
```

## Tipos Sem Nome 

Podemos combinar declaração com a criação de variáveis, apesar de não ser muito utilizado

```C
struct jogador{
  char nome[40];
  float salario;
} maradona, zidane;
```

Como geralmente estamos interessados em definir o tipo no headers e as variáveis no programa principal, acaba não sendo útil. Porém, essa aplicação pode ter importância quando definimos variáveis de struct mas sem definir o seu tipo 

```C
struct {
  char nome[40];
  float salario;
} pele;
```

Nesse caso é obrigatório definir a variável pois é a única posição em que podemos definir ela. Após isso não é mais possível. Isso pode ser usado quando queremos guardar informações em uma variável que vamos usar apenas uma vez no código, como 

```C
int main(){
  struct {
    int x;
    int y;
  } ponto;

}
```

