# 💻 Algoritmos e Pensamento Computacional

Repositório com as aulas, exercícios e projetos da disciplina **Algoritmos e Pensamento Computacional**, ministrada pelo Prof. Marco Antonio Sanches Anastacio, na Universidade Cruzeiro do Sul (2º semestre de 2026).

A disciplina introduz a programação em **linguagem C**, partindo do planejamento da solução até a construção de programas que leem, processam e gravam dados.

---

## 🎯 Sobre a disciplina

O foco é transformar um problema em uma solução computacional: entender o problema, planejar o algoritmo e implementá-lo em C, testando diferentes casos.

**Principais tópicos estudados:**

- 🧠 Algoritmos e pseudocódigo
- Variáveis, tipos de dados e comandos de entrada e saída
- Operadores e expressões
- Estruturas de decisão (`if`, `if...else`, `switch...case`)
- Estruturas de repetição (`for`, `while`, `do...while`)
- Vetores, matrizes e strings
- Manipulação de arquivos de texto
- Funções, ponteiros e estruturas (`struct`)

---

## 🗂️ Conteúdo do repositório

Cada pasta possui um `README.md` com a descrição das atividades e o objetivo da aula ou do projeto.

### 📚 Aulas

| Aula | Tema | Principais conteúdos |
|------|------|----------------------|
| 📘 [**Aula 02**](./Aula02) | Introdução à programação em C | Variáveis, entrada e saída (`scanf`, `printf`), operações matemáticas, formatação de números |
| 📘 [**Aula 03**](./Aula03) | Algoritmos e resolução de problemas | Fórmulas, médias simples e ponderadas, conversões, consumo de energia, IMC |
| 📘 [**Aula 04**](./Aula04) | Estruturas de decisão | `if`, `else if`, `else`, operadores relacionais e tomada de decisões |
| 🎮 [**Aula 05**](./Aula05) | Projeto — Arena Tech | Cálculos, condições, análise de dados e viabilidade de um evento de jogos |
| 🔄 [**Aula 06**](./Aula06) | Estruturas de repetição | `for`, `while`, `do...while`, contadores, acumuladores e validação de dados |
| 🔁 [**Aula 07**](./Aula07) | Exercícios e Projeto Missão Orbital | Revisão de repetição, contadores e acumuladores, leitura de strings |
| 🧮 [**Aula 08**](./Aula08) | Estruturas de dados básicas | Vetores, matrizes, processamento de dados, strings, análise anual de vendas |
| 📂 [**Aula 09**](./Aula09) | Manipulação de arquivos | `fopen()`, `fclose()`, modos `r`/`w`/`a`, `fprintf()`, `fgets()`, `fscanf()` |
| 🧩 [**Aula 10**](./Aula10) | Funções, ponteiros e estruturas | Funções, ponteiros, `struct`, vetor de estruturas, menu interativo, desafio de monitoramento de energia |

### 🚀 Projetos

| Projeto | Tema | Conteúdos aplicados |
|---------|------|---------------------|
| 🎮 [**Projeto — Arena Tech**](./Aula05) (Aula 05) | Planejamento e análise de viabilidade de um evento de jogos eletrônicos | Entrada e saída, operações matemáticas, estruturas de decisão, consumo de energia, custos e orçamento |
| 🛰️ [**Projeto — Missão Orbital**](./Aula07) (Aula 07) | Simulador de treinamento espacial desenvolvido em equipe | `for`, `while`, `do...while` e condicionais |
| ⚡ [**Desafio — Monitoramento de Energia**](./Aula10) (Aula 10) | Análise do consumo de energia de quatro laboratórios durante sete dias | Matrizes, funções, ponteiros e laços de repetição |

---

## 🧭 Trilha de aprendizagem

Cada assunto se apoia no anterior:

1. **Fundamentos** → como um programa funciona, variáveis e entrada e saída.
2. **Cálculos e decisões** → operadores e estruturas condicionais.
3. **Repetição** → laços para repetir tarefas, validar dados e acumular resultados.
4. **Dados organizados** → vetores, matrizes e strings.
5. **Persistência** → arquivos de texto para guardar e recuperar dados.
6. **Modularização** → funções, ponteiros e estruturas para organizar programas maiores.

---

## 📁 Organização

```text
Algoritimo-Pc/
│
├── Aula02/
├── Aula03/
├── Aula04/
├── Aula05/
├── Aula06/
├── Aula07/
├── Aula08/
├── Aula09/
├── Aula10/
│
└── README.md
```

---

## ⚙️ Como compilar e executar

Os programas são escritos em C e podem ser compilados com o GCC:

```bash
gcc programa.c -o programa
./programa
```

Quando o programa utiliza a biblioteca `math.h` (como `sqrt()`, `pow()` ou `ceil()`), pode ser necessário adicionar a opção `-lm` no Linux e no WSL:

```bash
gcc programa.c -o programa -lm
```

---

## 👤 Autor

Repositório organizado como registro de estudo da disciplina.

**Nome:** [ALVARO MARQUES DE ARAUJO]
**GitHub:** [alvaromarqurs-source](https://github.com/alvaromarqurs-source)

---

## 📌 Observações

- Os READMEs de cada aula descrevem as atividades desenvolvidas a partir do material fornecido pelo professor.
- Material didático elaborado pelo Prof. Marco Antonio Sanches. O Projeto 3 (Missão Orbital) foi originalmente proposto pelo Prof. Vinícius Alves e adaptado para uso em aula.
