# Aula 09 — Manipulação de Arquivos em C

## Sobre a aula

Esta pasta reúne exercícios desenvolvidos na disciplina de Algoritmos e Pensamento Computacional, com foco na manipulação de arquivos utilizando a linguagem C.

As atividades apresentam como criar, abrir, escrever, ler e fechar arquivos, permitindo armazenar informações de maneira permanente e utilizá-las posteriormente para consultas e cálculos.

## Conteúdos abordados

- **Manipulação de arquivos:** utilização de arquivos para armazenar e consultar informações.
- **Abertura de arquivos:** utilização da função `fopen()`.
- **Modos de abertura:** modos de leitura (`r`), escrita (`w`) e adição (`a`).
- **Gravação de dados:** utilização de `fprintf()` para escrever informações.
- **Leitura de dados:** utilização de `fscanf()` e `fgets()`.
- **Fechamento de arquivos:** utilização de `fclose()`.
- **Validação:** verificação de erros na abertura dos arquivos.
- **Processamento de informações:** cálculos, médias, contadores e identificação de maiores valores a partir dos dados armazenados.

## Exercícios desenvolvidos

### Exercício 01 — Geração de tabuada

- Solicitação de um número inteiro ao usuário.
- Criação do arquivo `tabuada.txt`.
- Gravação da tabuada do número informado.
- Utilização de laço de repetição para gerar os resultados.

### Exercício 02 — Registro de consumo

- Solicitação da quantidade de registros.
- Cadastro do dia da semana e do consumo correspondente.
- Armazenamento das informações no arquivo `consumo.txt`.
- Utilização do modo de abertura `a` para adicionar novos registros.

### Exercício 03 — Leitura de arquivo

- Abertura do arquivo `tabuada.txt`.
- Leitura do conteúdo utilizando `fgets()`.
- Exibição das informações armazenadas diretamente no terminal.

### Exercício 04 — Relatório de notas

- Leitura dos registros de estudantes armazenados em `notas.txt`.
- Cálculo da média da turma.
- Identificação da maior nota.
- Contagem dos estudantes aprovados, considerando nota igual ou superior a 6.

### Exercício 05 — Relatório de consumo

- Leitura dos registros armazenados em `consumo.txt`.
- Contagem da quantidade de registros.
- Cálculo do consumo médio.
- Identificação do maior consumo registrado.

### Exercício 06 — Sistema de consumo de energia

- Criação de um menu interativo.
- Cadastro do mês e do consumo de energia em kWh.
- Armazenamento das informações no arquivo `energia.txt`.
- Estrutura inicial para consulta de relatório.

### Exercício 07 — Análise de vendas

- Leitura dos registros de vendas armazenados em `vendas.txt`.
- Contagem da quantidade de vendas.
- Cálculo do valor total das vendas.
- Identificação da venda de maior valor.

## Principais funções utilizadas

| Função | Finalidade |
|---|---|
| `fopen()` | Abrir ou criar arquivos. |
| `fprintf()` | Gravar informações em arquivos. |
| `fscanf()` | Ler dados formatados de arquivos. |
| `fgets()` | Ler uma linha de um arquivo. |
| `fclose()` | Fechar arquivos após a utilização. |

## Organização dos arquivos

```text
Aula09/
│
├── exercicio1.c
├── exercicio2.c
├── exercicio3.c
├── exercicio4.c
├── exercicio5.c
├── exercicio6.c
├── exercicio7.c
│
└── readme.md
```

## Tecnologias utilizadas

- Linguagem C
- GCC (compilador C)
- Visual Studio Code

## Objetivo da aula

Compreender como funciona a manipulação de arquivos na linguagem C, desenvolvendo programas capazes de armazenar, recuperar e processar informações. Aplicar funções de entrada e saída de arquivos para criar soluções que mantenham os dados disponíveis mesmo após o encerramento do programa.

---

**Repositório:** [Algoritimo-Pc](https://github.com/alvaromarqurs-source/Algoritimo-Pc)

*Material desenvolvido durante as atividades acadêmicas da disciplina de Algoritmos e Pensamento Computacional.*
