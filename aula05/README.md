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
