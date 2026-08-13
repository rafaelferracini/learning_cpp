# Aula 02 - Introdução a Linguagem C++ | função main | biblioteca iostream | cout

## Iniciação ao C++

---

1. Os comentários em C++ são feitos usando // para comentários em linha e /**/ para comentarios em bloco

2. A inclusão de bibliotecas é feito usando #include <>

3. C++ faz diferença entre letras maiusculas e minusculas. Caso errar na definição do identificador retorna erro "identificador não declarado"

## Função main()

---

É a função principal do código C++, se não for definida não é possível compilar o programa. Sua estrutura é

```C++
int main() \\ cabeçalho
{
  instruções

  return 0;
}
```

1. Para traduzir as instruções, o compilador precisa saber onde ela termina. Em C/C++ a finalização de uma instrução é indicada por um ponto-e-vírgula

2. O cabeçalho descreve a interface da função. 'int' é o tipo de retorno; main é o nome e entre parenteses delimita-se os parametros recebidos pela função. Os parametros que são convenciados a passar para a função main são os obtidos pela linha de comando ao executar o arquivo

* int argc: quantidade de comandos na linha de comando
* chat ** argv: são os comandos em si

Como main é uma função tipo 'int', é esperado retornar um valor (no caso return 0). O padrão ANSI/ISO C++ permite no entendo a omissão dessa instrução na função main. Usualmente é retornado o valor 0 caso o porgrama tenha executado com sucesso e um valor diferente caso tenha um erro (usualmente -1)

## Arquivos de cabeçalho

---

Para a compilação do programa, o arquivo .cpp passa por um pré-processador, responsável pela modificação do código antes da compilação. Em especial, o pré-processador trata as diretivas que iniciam com #.A diretiva #include adiciona o conteudo de um arquivo ao código fonte do programa

* iostream contém definições das funções de entrada e saidas de dados (e.g cin e cout)

Os arquivos de cabeçalhos usam a extensão .h e a convenção para a importação desse arquivos é que se omita a extensão para bibliotecas padrões (iostream, math, etc) e se mencione para headers criados pelo proprio autor

| Cabeçalho | Convenção | Exemplo     | Usado por |
| :------:  | :-:       | :-:         | :-:       |
| C++ antigo| .h        | iostream.h  | C++       |
| C antigo  | .h        | math.h      | C/C++     |
| C++ novo  | nada      | iostream    | C++       |
| C convert.| prefixo c | cmath       | C++       |

## Namespaces

---

É um recurso feito para combinar instruções definidas em bibliotecas distintas, mas com a mesma nomenclatura. Duas empresas podem desenvolver aplicações de cout e teriamos que especificar qual das duas devemos usam

* `empresa1::cout`
* `empresa2::cout`

Para definir todos objetos para usar o codigo da empresa1 por padrão usamos

```C++
using namespace empresa1;
```

assim ao invez de `empresa1::cout` usamos apenas `cout`  

As funções, classes e objetos padrões de C++ são definidas sobre o espaço de nomes std.

* Para acessar tudo definido em std: `using namespace std;`
* Para acessar apenas itens selecionados: `using std::cout;`
