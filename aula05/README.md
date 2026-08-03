# Aula 05 - Criação de Funções | Bibliotecas | Parâmetros e Argumentos de Funções

## Definindo Funções

---

O modelo base de definição de uma função é

```C
 tipo funcao(parâmetros){
   instrução1;
   instrução2;
  ...
   return; //opcional 
 }
 ```

### Funções sem retorno

São normalmente usadas para modularizar o programa, como exibição de mensagens. São também declaradas como tipo `void` e não incluem a instrução `return`.

### Funções com retorno

Funções que tem uma tipagem diferente de `void` precisam utilizar a instrução `return` para retornar um resultado correspondente ao tipo de sua declaração. Por exemplo,

```C
double media(double a, double b){
  // média aritmética
  double m = (a+b)/2;

  return m;
}
```

Uma função também pode comportar vários returns, apesar de apenas um ser executado. Isso geralmente é utilizado quando queremos finalizar a execução da função após alguma condição ser satisfeita, ou quando ela nunca for.

```C
int maior(int a, int b){
  if (a > b){
    return a;
  } else{
    return b;
  }

}
```

### Parâmetros e Argumentos

Ao ser definida uma função, devemos passar o **parâmetro** que ela deve receber, seja ela inteiro, void, double, etc. Ao definir isso, a função deve ser chamada passando uma variável ou valor como **argumento** que corresponda ao tipo do seu parâmetro

```C
int quadrado(int); // é indicado que a função quadrado recebe como parâmetro um valor inteiro

int main(){
  int numero = 3;
   cout << quadrado(numero) // numero é passado como argumento para a função que retorna o valor dele quadrado
}

int quadrado(int n){ // O argumento é passado para a f:unção e o seu valor é passado para uma variável n definida no escopo da função
  return n**2
}
```

Note que apenas na definição de uma função é preciso dar o nome aos parâmetros no protótipo só é necessário identificar o tipo dele. Os parâmetros de uma função são declarações de novas variáveis que recebem o valor dos argumentos.

## Funções e arquivos

---

A definição de várias funções em um arquivo é feito de forma sequencial e por isso é recomendado que seja definido os protótipos das funções ao invez de defini-las diretamente. Caso contrário poderiamos ter algo como

```C
void funcao1(){
  funcao2();
}

void funcao2(){
}

int main(){
  funcao(1);
}
```

A `funcao1()` tenta chamar a `funcao2()` contudo para o compilador essa função ainda não existe, pois foi definida depois.  

### Funções definidas em arquivos diferente

É possível também, para simplificação do código, definir as funções em arquivos separados do original. Para isso, definimos os protótipos da função em um arquivo com extensão `[nome].h` e a definição em um arquivo `[nome].cpp`. Chamamos então essa nova biblioteca no cabeçalho do nosso programa com `#include "[nome].h"`.

Note que usamos aspas para o include. Esse é o padrão para arquivos criados para o projeto, enquanto para bibliotecas da linguagem usa-se < > como em `<iostream>`.

## Variável Local vs Global

---

Uma variável declarada fora de uma função é chamada de variável global e é visível em todo o código (para todas as funções), enquanto a variável local é definida apenas no escopo de uma função e não podem ser vista pelo código fora dela.

### Variável Global

1. São inicializadas como 0 se não forem atribuídas a um certo valor.

### Variável Local

1. Os parâmetros da função são variáveis locais

2. Não são inicializadas automaticamente para zero, mas é reservado um espaço na memória para ela (pilhas..?). Se verificarmos o conteúdo de uma variável local não inicializada, teremos um valor aleatório deixado por outro processo que estava utilizando o espaço que agora está alocado para nossa variável.

3. A definição de variáveis locais são priorizadas em relação as variáveis globais.  Veja no seguinte exemplo:

```C

#include <iostream>
using namespace std;

void local(void);

int x = 1;
int y = 2; // variáveis globais

int main() {

  cout << "x antes: " << x << endl << "y antes: " << y << endl;
  local();
  cout << "------------" << endl;
  cout << "x depois: " << x << endl << "y depois: " << y << endl;

  return 0;
}

void local(void) {
  int y; // variável local

  x = 3;
  y = 3;
  cout << "x dentro: " << x << endl << "y dentro: " << y << endl;
}
```

Definimos globalmente as variáveis `x=1`  e `y=2`. Após a função `local()` ser chamada, é definida a variável `y` localmente que não tera nenhuma conexão com a definida globalmente. Assim, atribuímos ao `x`  global o valor de 3 e ao `y` local o valor de 3, que não irá alterar o `y` global. Resultando na seguinte saída:

```text
x antes: 1
y antes: 2
------------
x dentro: 3
y dentro: 3
------------
x depois: 3
y depois: 2

```
