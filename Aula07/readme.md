# 📘 Aula 07 — Exercícios e Projeto

A Aula 07 foi dividida em duas partes: o início do **Projeto 3 — Missão Orbital**, desenvolvido em equipe, e uma lista individual de exercícios de revisão sobre **estruturas de repetição** em linguagem C.

As atividades tiveram como objetivo praticar a análise de problemas, identificar entradas, processamentos e condições, além de escolher a estrutura de repetição mais adequada para cada situação (`for`, `while` ou `do...while`).

---

## 📚 Conteúdos praticados

### Estruturas de repetição
- Escolha entre `for`, `while` e `do...while`.
- Repetição controlada por quantidade.
- Utilização de contadores e acumuladores.
- Soma e cálculo de médias.
- Comparação de valores e identificação do maior número.

### Condições e tratamento de dados
- Contagem de valores positivos, negativos e neutros.
- Utilização de condições (`if`) dentro de laços de repetição.
- Leitura de strings sem espaços com `scanf("%49s", ...)`.
- Cuidados com limites de armazenamento de caracteres.

### Desenvolvimento de projetos
- Organização e planejamento em equipe.
- Discussão de estratégias para resolução de problemas.
- Desenvolvimento de algoritmos.
- Implementação e testes em linguagem C.

---

## 💻 Exemplo desenvolvido

### Leitura de strings em C

Foi praticada a leitura de textos sem espaços utilizando uma variável do tipo `char` e a função `scanf()`.

Exemplo:

```c
char municipio[50];

scanf("%49s", municipio);
```

O limite de 49 caracteres ajuda a evitar estouro do espaço de armazenamento (*buffer overflow*). Também foi estudado que, nesse caso, não é necessário utilizar o operador `&` antes do nome da variável.

---

## 📝 Atividades realizadas

### Parte 1 — Projeto: Missão Orbital

Projeto desenvolvido em equipes de até 3 alunos, envolvendo planejamento, discussão da lógica de programação, desenvolvimento do algoritmo e implementação de uma solução em linguagem C.

### Parte 2 — Exercícios de revisão

Lista individual com quatro exercícios práticos:

**Exercício 1 — Análise de valores numéricos**
- Ler uma quantidade determinada de números reais.
- Contar valores positivos e negativos.
- Identificar o maior valor informado.
- Considerar o zero como valor neutro.

**Exercício 2 — Vendas da semana**
- Ler os valores das vendas dos 7 dias da semana.
- Calcular e apresentar o total vendido.

**Exercício 3 — Aprovados na turma**
- Ler as notas de 10 alunos.
- Contar quantos obtiveram nota igual ou superior a 6,0.

**Exercício 4 — Temperatura dos municípios**
- Ler o nome e a temperatura média de 5 municípios.
- Calcular a temperatura média da região.
- Contar os municípios com temperatura inferior a 10 °C.

---

## 🎯 Objetivos de aprendizagem

- Desenvolver o raciocínio lógico antes da implementação do código.
- Compreender e aplicar estruturas de repetição.
- Trabalhar com contadores, acumuladores e condições.
- Realizar cálculos e comparações utilizando laços.
- Praticar a entrada e o tratamento de dados em C.
- Desenvolver soluções individuais e em equipe.

---

## 🛠️ Tecnologias utilizadas

- **Linguagem C**
- **Estruturas de repetição**
- **Estruturas condicionais**
- **Git e GitHub** para organização dos exercícios e projetos.

---

📌 **Resumo:** A Aula 07 reforçou os conceitos de estruturas de repetição e lógica de programação por meio de exercícios envolvendo números, vendas, notas e temperaturas, além de introduzir o desenvolvimento do Projeto 3 — Missão Orbital.
