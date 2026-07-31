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
