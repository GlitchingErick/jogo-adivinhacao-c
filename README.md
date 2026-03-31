# Jogo de Adivinhação em C

Um jogo simples feito em C onde o usuário tenta adivinhar um número aleatório entre 1 e 100.

---

## Como funciona

- O programa gera um número aleatório
- O jogador tenta adivinhar
- O sistema informa se o número é maior ou menor
- O jogo continua até acertar
- Mostra o número de tentativas

---

## Conceitos utilizados

- Geração de números aleatórios (`rand`, `srand`)
- Biblioteca `time.h`
- Estruturas de repetição (`do-while`)
- Condicionais (`if/else`)
- Entrada de dados (`scanf`)

---

## Como executar

```bash
gcc jogo_adivinhacao.c -o jogo
./jogo