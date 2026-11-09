# 💻 Algoritmos e Pensamento Computacional

Repositório dedicado às atividades e projetos desenvolvidos durante as aulas de **Algoritmos e Pensamento Computacional**, utilizando a linguagem **C**.

O objetivo é registrar minha evolução no aprendizado de programação, passando desde conceitos básicos até estruturas de repetição e resolução de problemas.

---

## 📚 Conteúdo

As atividades estão organizadas por aula, acompanhando a evolução dos conteúdos estudados.

| Aula | Conteúdo | Principais conceitos |
|------|----------|----------------------|
| 📘 **Aula 02** | Introdução à programação em C | Variáveis, entrada e saída de dados, operações matemáticas |
| 📘 **Aula 03** | Algoritmos e resolução de problemas | Fórmulas, cálculos, médias, conversões e operações matemáticas |
| 📘 **Aula 04** | Estruturas condicionais | `if`, `else if`, `else`, operadores e tomada de decisões |
| 🎮 **Aula 05** | Projeto em sala — Arena Tech | Cálculos, condições, análise de dados e tomada de decisões |
| 🔄 **Aula 06** | Estruturas de repetição | `for`, `while`, `do...while`, contadores e acumuladores |

---

## 📁 Organização

```text
Algoritmos-e-Pensamento-Computacional/
│
├── Aula02/
├── Aula03/
├── Aula04/
├── Aula05/
├── Aula06/
│
└── README.md
From 18b2fad43bab6d405dd7ad8abf3b26ddc7a84250 Mon Sep 17 00:00:00 2001
From: =?UTF-8?q?Atualiza=C3=A7=C3=A3o?= <noreply@example.com>
Date: Mon, 9 Nov 2026 01:04:36 +0000
Subject: [PATCH] docs: atualiza README principal com Aulas 07 a 10 e remove
 marcadores residuais dos READMEs das Aulas 05 e 06

---
 Aula05/README.md |  6 +++---
 Aula06/README.md | 12 ++++++------
 README.md        | 10 +++++++++-
 3 files changed, 18 insertions(+), 10 deletions(-)

diff --git a/Aula05/README.md b/Aula05/README.md
index 0c3ec70..01c3096 100644
--- a/Aula05/README.md
+++ b/Aula05/README.md
@@ -2,7 +2,7 @@
 
 Nesta aula foi desenvolvido um **projeto prático em sala de aula**, utilizando a linguagem C para simular o planejamento e a análise de um evento de jogos eletrônicos.
 
-O projeto, chamado **Arena Tech**, recebe informações sobre participantes, equipes, computadores, consumo de energia, alimentação, custos e orçamento. A partir desses dados, o programa realiza cálculos e toma decisões sobre a infraestrutura e a viabilidade do evento. :contentReference[oaicite:1]{index=1}
+O projeto, chamado **Arena Tech**, recebe informações sobre participantes, equipes, computadores, consumo de energia, alimentação, custos e orçamento. A partir desses dados, o programa realiza cálculos e toma decisões sobre a infraestrutura e a viabilidade do evento.
 
 **Principais conceitos praticados:**
 
@@ -29,7 +29,7 @@ O projeto, chamado **Arena Tech**, recebe informações sobre participantes, equ
 - 🏗️ Suficiência da infraestrutura
 - 📈 Classificação do consumo de energia
 - ✅ Situação do orçamento
-- 🎯 Decisão final sobre a realização do evento :contentReference[oaicite:2]{index=2}
+- 🎯 Decisão final sobre a realização do evento
 
 **Decisão final do sistema:**
 
@@ -39,6 +39,6 @@ O programa utiliza as informações calculadas para determinar se o evento é:
 - **Aprovado com ressalvas**
 - **Não recomendado**
 
-A decisão considera principalmente a disponibilidade de computadores, o orçamento disponível e o consumo de energia. :contentReference[oaicite:3]{index=3}
+A decisão considera principalmente a disponibilidade de computadores, o orçamento disponível e o consumo de energia.
 
 > 📌 Este projeto foi desenvolvido como uma atividade prática em sala de aula, colocando em prática os conceitos estudados nas aulas anteriores.
diff --git a/Aula06/README.md b/Aula06/README.md
index ed94f6c..9ea4931 100644
--- a/Aula06/README.md
+++ b/Aula06/README.md
@@ -20,29 +20,29 @@ Durante a aula, foram apresentados os comandos `for`, `while` e `do...while`, al
 
 ### 💻 Exemplos desenvolvidos
 
-Foram realizados exemplos para compreender o funcionamento de cada estrutura de repetição, incluindo a utilização de `for` e `while` para criar uma tabuada e `do...while` para executar um bloco de código antes de verificar a condição. :contentReference[oaicite:3]{index=3} :contentReference[oaicite:4]{index=4} :contentReference[oaicite:5]{index=5}
+Foram realizados exemplos para compreender o funcionamento de cada estrutura de repetição, incluindo a utilização de `for` e `while` para criar uma tabuada e `do...while` para executar um bloco de código antes de verificar a condição.
 
 ### 📝 Exercícios
 
 **1. Caixa de compras**
 
-Programa que solicita o CPF do cliente e o preço de cinco produtos, calculando o valor total da compra. O exercício também apresenta uma versão utilizando `while`. :contentReference[oaicite:6]{index=6}
+Programa que solicita o CPF do cliente e o preço de cinco produtos, calculando o valor total da compra. O exercício também apresenta uma versão utilizando `while`.
 
 **2. Maior nota**
 
-Programa que recebe as notas de cinco alunos, calcula a média da turma e identifica a maior nota informada. :contentReference[oaicite:7]{index=7}
+Programa que recebe as notas de cinco alunos, calcula a média da turma e identifica a maior nota informada.
 
 **3. Soma dos números ímpares**
 
-Programa que recebe números inteiros e soma os valores ímpares informados, utilizando `do...while` para controlar a repetição. :contentReference[oaicite:8]{index=8}
+Programa que recebe números inteiros e soma os valores ímpares informados, utilizando `do...while` para controlar a repetição.
 
 **4. Média das notas**
 
-Programa que permite informar uma quantidade de notas, valida se cada nota está entre 0 e 10 e, ao final, calcula a média. :contentReference[oaicite:9]{index=9}
+Programa que permite informar uma quantidade de notas, valida se cada nota está entre 0 e 10 e, ao final, calcula a média.
 
 **5. Sistema de senha**
 
-Programa que simula um sistema de acesso, permitindo tentativas de login e bloqueando o usuário após as tentativas permitidas. :contentReference[oaicite:10]{index=10}
+Programa que simula um sistema de acesso, permitindo tentativas de login e bloqueando o usuário após as tentativas permitidas.
 
 ---
 
diff --git a/README.md b/README.md
index 928bb02..7688ef2 100644
--- a/README.md
+++ b/README.md
@@ -2,7 +2,7 @@
 
 Repositório dedicado às atividades e projetos desenvolvidos durante as aulas de **Algoritmos e Pensamento Computacional**, utilizando a linguagem **C**.
 
-O objetivo é registrar minha evolução no aprendizado de programação, passando desde conceitos básicos até estruturas de repetição e resolução de problemas.
+O objetivo é registrar minha evolução no aprendizado de programação, passando desde conceitos básicos até estruturas de repetição, vetores, arquivos, funções, ponteiros e resolução de problemas.
 
 ---
 
@@ -17,6 +17,10 @@ As atividades estão organizadas por aula, acompanhando a evolução dos conteú
 | 📘 **Aula 04** | Estruturas condicionais | `if`, `else if`, `else`, operadores e tomada de decisões |
 | 🎮 **Aula 05** | Projeto em sala — Arena Tech | Cálculos, condições, análise de dados e tomada de decisões |
 | 🔄 **Aula 06** | Estruturas de repetição | `for`, `while`, `do...while`, contadores e acumuladores |
+| 🔁 **Aula 07** | Exercícios de revisão e Projeto Missão Orbital | Escolha entre `for`, `while` e `do...while`, contadores, acumuladores e condições dentro de laços |
+| 🧮 **Aula 08** | Vetores e matrizes | Armazenamento e processamento de dados, soma, média, maior e menor valor |
+| 📂 **Aula 09** | Manipulação de arquivos | `fopen`, `fprintf`, `fscanf`, `fgets`, `fclose` e modos `r`, `w`, `a` |
+| 🧩 **Aula 10** | Funções, ponteiros e estruturas | Funções, ponteiros, `struct`, arrays de estruturas, menu interativo e desafio de monitoramento de energia |
 
 ---
 
@@ -30,5 +34,9 @@ Algoritmos-e-Pensamento-Computacional/
 ├── Aula04/
 ├── Aula05/
 ├── Aula06/
+├── Aula07/
+├── Aula08/
+├── Aula09/
+├── Aula10/
 │
 └── README.md
-- 
2.43.0
