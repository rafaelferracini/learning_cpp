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

Note que apenas na definição de uma função é preciso dar o nome aos parâmetros, no protótipo só é necessário identificar o tipo dele. Os parâmetros de uma função são declarações de novas variáveis que recebem o valor dos argumentos.
