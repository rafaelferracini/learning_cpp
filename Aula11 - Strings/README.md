# Aula11 | Vetores de Caracteres | Tipo String

Vimos anteriormente que em virtude de armazenar um conjunto de informações, usamos um vetores. Vamos agora estar interessados em estudar as Strings.

## Strings 

--- 

As strings são vetores de caracteres com a propriedade especial que toda string termina com o caractere nulo `\0`. 

```C
char dog[5] = {'l', 'a', 't', 'i', 'r'}; // não é string, apenas é um vetor de caractere
char cat[5] = {'m', 'i', 'a', 'r', '\0'}; // é string
```

Ambos os exemplos são vetores de caractere, mas apenas o segundo é uma string.

O caractere nulo tem o papel fundamental em uma string: Todas as funções que trabalham com string percorrem o vetor até achar o caractere nulo. Se passarmos um vetor de caracter para uma função como cout, ele seguirá imprimindo o valor até o próximo `\0`. 


```C
char dog[5] = {'l', 'a', 't', 'i', 'r'}; // não é string, apenas é um vetor de caractere
char cat[5] = {'m', 'i', 'a', 'r', '\0'}; // é string

cout << cat; // miar 
cout << dog; //latir|-^$@*²
```
 

## Inicialização de String 

--- 

A inicialização pode ser simplificada usando uma constante string que é indicada por aspas duplas (e sempre incluem \0 implicitamente)

```C
char peixes[10] = "Tilapia"; // caractere \0 esta implicito
char peixe[] = "Sardinha"; // deixa o compilador contar (conta ate \0)

char circo[10] = "Palhaço"; // Os 7 primeiros contem Palhaço e os demais 3 posições é inicializada com \0
```

Note que um caractere entre aspas duplas não é a mesma coisa que um caractere entre aspas simples 

```C
char letra1 = 's'; // Corresponde a um caractere que possuí o código ASCII 83
char letra2 = "S"; // representa o endereço inicial do conjunto composto pelos caracteres 'S' e '\0'
```

## Leitura de Strings 

--- 

Inicialmente a leitura de uma string pode ser feita de forma usual 

```C
const int Tam = 15;
char nome[Tam];

cout << "Digite o nome: ";
cin >> nome;
```

Contudo isso pode ocasionar problemas devido ao buffer do cin. Como no seguinte código

```C
using namespace std;
int main(int argc, char *argv[]) {

  const int TamVet = 20;

  char nome[TamVet];
  char sobremesa[TamVet];

  cout << "Entre com seu nome:";
  cin >> nome;

  cout << "Entre com sua sobremesa:";
  cin >> sobremesa;

  cout << "Eu tenho um " << sobremesa;
  cout << " para voce, " << nome;
  return 0;
}
```

```text
Entre com seu nome:João PEdro
Entre com sua sobremesa:Eu tenho um PEdro para voce, João
```

Note que, ao utilizar nomes compostos o programa nem ao menos deixa entrar com a segunda. Isso acontece porque para o cin o fim da entrada de dados é um espaço em branco, uma tabulação ou uma nova linha. Assim o nome João ficou armazenado em `nome` e sobremesa recebeu `PEdro`

Para resolver esse problema de palavras compostas, existe uma nova função que é orientada a linhas e não a palavras chamada de `cin.getline(<nome>, <tamanho>)` que varre a string ate a nova linha

```C
char estado[80];
cin.getline(estado, 80)
```

Assim, nosso código corrigido é

```C
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {

  const int TamVet = 20;

  char nome[TamVet];
  char sobremesa[TamVet];

  cout << "Entre com seu nome:";
  cin.getline(nome, TamVet);

  cout << "Entre com sua sobremesa:";
  cin.getline(sobremesa, TamVet);

  cout << "Eu tenho um " << sobremesa;
  cout << " para voce, " << nome;
  return 0;
}
```

### Misturando >> com getline()

Ao executar uma instrução `cin >>` o operador de extração deixa o caractere de nova linha no buffer de entrada de forma que ao executar um `getline()` em sequência, a função armazena uma linha vazia (pois o getline lê o buffer até o \n). 

Para limpar o buffer usamos o `cin.get()`, sem parâmetros, para descartar esse caractere 

```C
int num;
cin >> num;
cin.get(); // caractere \n descartado 

char str[80];
cin.getline(str, 80); // não ocasiona nenhum problema
```

O `cin.get()` ainda permite ler um único caractere da entrada do usuário

```C
char ch;
cin.get(ch);
```

## Atribuição e Cópia

--- 

Uma string (assim como vetor) não pode ser atribuída a outra 

```C
char str1[8] = "Teste";
char str2[8];

str2 = str1; // inválido. Lembre que no nome de vetores são endereços de memória, não faz sentido atribuir um endereço de memória a outro 
str2 = "Teste"; // inválido. Novamente, str2 é um endereço de memória e não o espaço em si da memória dele
```


Para copiar a string, devemos copiar cada caracter individualmente a posição da memória `str[0]`, .... Ou podemos usar a função `strcpy(destino, origem)` da biblioteca `cstring`   

```C
#include <cstring>

strcpy(str2, str1);
```


## Tipo String 

--- 

O padrão C++98 introduziu a classe `string` em sua biblioteca. Assim, no lugar de usar um vetor de caracteres para armazenar strings, é possível usar uma variável de tipo string ao incluir `#include <string>` que pode ser lida, atribuída e definida tal como um vetor

```C
#include <string>
string nome;
```

Uma das facilidades é a possibilidade de atribuir uma string a outra isso é possível pois a string redimensiona automaticamente

```C
string nome {"João"};
string novo;

novo = nome;
```

Também podemos concatenar duas strings com o operador `+`

```C
char vString[] = "teste";
char sString = "teste2";

strcat(vString, " outro teste");
sString = sString + " outro teste";
```

Para saber o tamanho da string usamos `<nome>.size()`, enquanto para vetor de caracter usamos `strlen(<nome>)`


Para fazer a atribuição usamos apenas `getline(cin, str)` 
