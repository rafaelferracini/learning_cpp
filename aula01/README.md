# Aula 01 - Ambiente de Trabalho | Compilação, Depuração e Erros

## Criando um Projeto

---

Um projeto em C++ é composto, de modo geral, em 3 diretórios

1. Arquivos de Cabeçalhos (Headers): tratam-se de arquivos auxiliares com extensão .h para compartilhar informações entre os arquivos fontes
2. Arquivos de Recursos (Resourcers): texto, imagens, sons, videos, etc
3. Arquivos de Origem (src): arquivos .cpp contendo o código-fonte

## Erros

---

Existem dois tipos de erros que podem ser obtidos ao programar

1. Erro de Sintaxe: Algum problema na escrita do código, como esquecer ponto e vŕigula, fechamento de aspas, typo, etc. (vide primeiro.cpp e segundo.cpp)

2. Erro de Semântica: Problemas na lógica do código (vide terceiro.cpp)

## Depuração

---

Depuração consiste em executar o código linha a linha para identificar erros de semântica. No LazyVim os atalhos para depuração são iniciados por espaço + d + [opção]
Atalho | Ação
b | Toggle breakpoint
c | continue / start
i | step into
o | step over
O | step out
u | DAP UI
t | terminate
