# Aula 03 - Variáveis, constantes e atribuição | Entrada com cin | Depuração

Vimos anteriormente que um programa é uma sequência de instruções que inicia pela função principal que é definida de forma unívoca no projeto

## Constantes Vs. Variáveis

---

### Constantes

Constantes são valores fixos e inalteráveis durante a execução de um programa. Podem ser atribuídos a tipos numéricos, carácter, string ou booleana (true ou false)

Constantes numéricas podem ser representadas em diferentes bases numéricas

* Decimal: número na base 10 são escritos de forma direta, e.g `8390`
* Hexadecimal: número na base 16 e são precedidos por 0x. e.g `0x20C6`
* Octal: número na base 8 e são precedidos por um 0, e.g `020306`
* Binário: número na base 2 e são precedidos por 0b, e.g `0b10000011000110`

Ao passar para o compilador em um cout ele continua retornando na base decimal

```C++
 
#include <iostream>
using namespace std;

int main() {

  cout << 25 << endl; // 25
  cout << 0x19 << endl; // 25
  cout << 031 << endl; // 25
  cout << 0b11001 << endl; // 25
}
 ```

Constantes do tipo carácter deve ser escrito entre aspas simples `'a'`, `'b'`, etc, enquanto do tipo string devem ser escritas entre aspas duplas `"Olá, mundo`, `"a"`. (note que essa segunda é interpretado pelo compilador como um conjunto de carácter apesar de constar apenas um)


