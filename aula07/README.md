# Aula 07 - Tipos Caractere e Booleano | Tabela ASCII | Operadores Bit a Bit

## Tipo Caractere 

--- 

O tipo `char` armazena inteiros de 8 bits, isto é, acomoda números de -128 a 127 ou 0 a 255 para `unsigned char`. Ele é usado para armazenar caracteres.

Um conjunto de caracteres é mapeado para uma faixa de números usando uma tabela, sendo que a mais utilizado é a chamada Tabela ASCII, mas há um esforço para padronizar o Unicode para suporte internacional.

Quando inicializamos um tipo caracter, o valor armazenado na memoria é o referente ao número inteiro que corresponde àquele caracter na tabela ASCII e essa conversão é feita diretamente pelo cin e cout.

Por ser tratar de um tipo numérico podemos somar para iterar sobre o alfabeto, exemplo

```C
char ch = 'M'; // M corresponde ao codigo 78
ch = ch + 1; // ch passa a ser N 
```

Um caracter é iniciado por aspas simples ou pelo seu número da tabela 

```C
char ch = 'M';
char ch = 77;
```

### Caracteres especiais

Alguns códigos são especiais

| Caractere | Símbolo ASCII | Código C++ |
| --------------- | --------------- | --------------- |
| Nova Linha | | CR/LF | \n |
| Tabulação | HT | \t |
| Backspace | BS | \b |
| Alerta | BEL | a |
| Contra-Barra | \ | \\ |
| Aspa Simples | ' | \' |
| Aspa Duplas | " | \" |


