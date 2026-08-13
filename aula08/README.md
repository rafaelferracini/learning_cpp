# Aula 08 - Tipos Ponto Flutuante | Float | Double | Long Double | Precisao 

Os pontos flutuantes são o segundo maior grupo de tipos que temos em C++ (perdendo apenas para os inteiros) pois possuem 3 tipos: float, double, long double. 

Números em ponto flutuante tem uma parte fracionária, representando números reais.

Tipos flutuantes fornecem uma faixa maior de valores

O computador armazena um número de ponto flutuante em duas partes: Um valor (mantissa) e um Fator de Escala (expoente)

| Número | Valor | Escala | Expoente |
| -------| ------| ------ | -------- |
| 34.125 | 0.34125 | 100 | 2 |
| 341.25 | 0.34125 | 1000 | 3 |

Note que para guardar o fator de escala, é guardado o expoente para salvar memória

## Tipo Ponto Flutuante 

--- 

Os três tipos de ponto flutuante são

1. float: Pelo menos 32 bits (geralmente 32)

2. double: Pelo menos 48 bits (geralmente 64)

3. long double: Pelo menos o mesmo número de bits do double (pode ter 64, 80, 96 ou 128)

Sendo que a principal diferença entre eles é o número de dígitos significativos para a mantissa e o valor máximo para o expoente. Suponha que seja passado o número `0.02145`. O computador identifica os 4 dígitos significativos `2145` e armazena ele na mantissa, após isso ele armazena o expoente `-1`  

Quanto maior a largura de bits usada para

- Mantissa: maior a precisão do número 

- Expoente: maior a magnitude do número 

Isto quer dizer que a distribuição de bits para o expoente e para a mantissa é equilibrado. Por exemplo, 3.1415 é armazenado na mantissa como `0.31415` e no exponente `1`. Note que a mantissa irá guardar um valor de 15 bits, sobrando (dos 16 reservados) apenas 1 bit para o expoente. 

Os valores específicos de bits reservados para os tipos de ponto flutuante para cada plataforma está na biblioteca `cfloat` 

```C
#include <cfloat>
#include <iostream>

int main(int argc, char *argv[]) {

  std::cout << "Número de digitos significativos" << std::endl;
  std::cout << "float:       " << FLT_DIG << std::endl;
  std::cout << "double:      " << DBL_DIG << std::endl;
  std::cout << "long double: " << LDBL_DIG << std::endl;

  std::cout << "Valores máximos de expoente" << std::endl;
  std::cout << "float:       " << FLT_MAX_10_EXP << std::endl;
  std::cout << "double:      " << DBL_MAX_10_EXP << std::endl;
  std::cout << "long double: " << LDBL_MAX_10_EXP << std::endl;

  std::cout << "Números de bits na mantissa" << std::endl;
  std::cout << "float:       " << FLT_MANT_DIG << std::endl;
  std::cout << "double:      " << DBL_MANT_DIG << std::endl;
  std::cout << "long double: " << LDBL_MANT_DIG << std::endl;
  return 0;
}
```

```text

Número de digitos significativos
float:       6
double:      15
long double: 18

Valores máximos de expoente
float:       38
double:      308
long double: 4932

Números de bits na mantissa
float:       24
double:      53
long double: 64
```

No Windows `long double` e `double` não tem diferença  

## Representação de Tipos flutuantes

Notamos então que a forma como o computador trata os tipos flutuantes é essencialmente diferente dos inteiros. Isso se evidencia ao perceber que `int` e `float` têm ambos 32 bits, contudo são representados de formas distintas, com o float sendo reservado 24 bits para a mantissa e 8 bits para o expoente, enquanto para o inteiro toda a sequencia de 32 bits é reservada para o número em si. Estamos em posição agora de entender como a representação de um ponto flutuante é feita

A conversão de binário para ponto flutuante é dada por: 

/[ 
v = \text{sgn} * 2^{\text{expoente} -127} * (1 + \text{mantissa})
/]

Por exemplo, considere float (32 bits) = 0.15625. A representação em binário deste é

0 1 1 1 1 1 0 0 || 0 || 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

Sendo as divisões respectivamente o expoente (8 bits), o sinal (1 bit) e a mantissa (23 bits). Nesse caso, o sinal é +1 e o expoente é 124. 

A mantissa guarda o valor como a soma de potencial inversas de 2, isto é, 1/2 + 1/4 + 1/8 +... lendo da esquerda para a direita. no nosso caso temos apenas o termos 1/4, porém em um exemplo como 11 teriamos 1/2 + 1/4 = 3/4 = 0.75

Portanto o nosso número é 

/[ 
v = +1 * 2^{124 -127} * (1 + 0.25) = 2^{-3} 8 1.25 = 0.15625
/]

Devido a essa soma ser discretizada, não podemos representar todos os números possíveis. Note que o menor número corresponde a 1/2^{23} = 1.19209e-07 enquanto o segundo menor é 1/2^{22}, qualquer outro termo que esteja entre esses dois não podem ser obtidos com números de 32 bits (se aumentarmos para 64 bits obviamente esse mínimo também muda)

Para visualizar o efeito da precisão do número considere o seguinte

```C

#include <ios>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  float f = 6.1;
  cout << "f = " << f << endl;

  // exibe números com 8 casas depois da vírgula
  cout.setf(ios_base::fixed, ios_base::floatfield); // fixa que sempre o número vai ser
                                                    // determinado numero de casas decimais
  cout.precision(8);               // fixa esse número para 8

  cout << "f = " << f << endl;

  return 0;
}
```


```text
f = 6.1
f = 6.09999990
```


Note que assim que fixamos uma certa quantidade de casas depois da vírgula retornamos que na verdade o valor não é exatamente preciso. 


## Constantes pontos flutuantes

Uma constante ponto flutuante pode ser representada de duas formas 

1. Usando a representação decimal padrão: 12.34, 938001.32, 0.000023, 8.0 

2. Usando a notação exponencial: 2.52e+8, 8.33e-4, 7E5, -19.32e13 

Note que a notação E garante que um número será representado como ponto flutuante.

Por padrão as constantes ponto flutuante são armazenadas em um double (8 bytes), mas é possível indicar o tipo das constantes usando sufixos, tal como nos inteiros 

1. float flt = 7.0f;

2. double dbl = 7.0;

3. long double ldb = 7.0l;


## Precisão 

Para evidenciar a precisão nos dígitos significativos considere o seguinte 

```C
#include <ios>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  // exibe números com 8 casas depois da vírgula
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout.precision(8); // fixa esse número para 8

  float fltvar = 10.0 / 3.0;  // bom para até 6 dígitos
  double dblvar = 10.0 / 3.0; // bom para até 15 dígitos

  float milhao = 1.0e6;

  cout << "float var = " << fltvar;
  cout << ", vezes um milhao = " << milhao * fltvar << endl;
  cout << "double var = " << dblvar;
  cout << ", vezes um milhao = " << milhao * dblvar << endl;

  return 0;
}

```

```text
float var = 3.33333325, vezes um milhao = 3333333.25000000
double var = 3.33333333, vezes um milhao = 3333333.33333333
```

Note que a primeira linha a multiplicação por milhão não é precisa, pois o float garante precisão até 6 dígitos significados. Enquanto o double é preciso pois garante até 15 dígitos

Note que enquanto fazemos operações com ponto flutuante podemos ir perdendo precisão, por exemplo

```C
using namespace std;

int main(int argc, char *argv[]) {

  float a = 1.25; // 1.25 (3 dígitos significativos)
  float b = a * a; // 1.5625 (5 dígitos significativos)
  float c = b * b; // 2.44140625 (muitos dígitos significativos, da problema)

}
```
