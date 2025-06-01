♟️ **Desafio de Xadrez - MateCheck**
Olá, entusiasta de programação e xadrez! Prepare-se para um desafio que testará suas habilidades em C, explorando o uso avançado de estruturas de repetição e funções para simular as complexas movimentações das peças de xadrez.

Este projeto foi desenhado em três níveis progressivos, levando você de conceitos básicos de loops até a sofisticação da recursividade e condições múltiplas. Seu objetivo é determinar os limites e possibilidades de aplicação do código dentro do jogo, focando na eficiência e legibilidade.

🎯 O que o Projeto Faz?
Este projeto simula as movimentações específicas de algumas peças de xadrez em um tabuleiro hipotético, focando nas lógicas de iteração e controle de fluxo. Você implementará como cada peça se move em um espaço limitado, demonstrando o uso de diferentes estruturas de repetição e funções.

Peças e Movimentações Simuladas:

Bispo: Movimenta-se 5 casas na diagonal superior direita.
Torre: Movimenta-se 5 casas para a direita.
Rainha: Movimenta-se 8 casas para a esquerda.
Cavalo: Movimenta-se em "L" (específico para cada nível).
Visualização das Movimentações:

Para cada movimentação, o programa exibirá a direção percorrida utilizando comandos printf específicos (ex: "Cima", "Baixo", "Esquerda", "Direita").
Para o Bispo, que se move na diagonal, será necessário usar uma combinação de direções básicas no printf para representar o movimento (ex: printf("Diagonal Superior Direita\n");).
🛠️ Como Baixar e Testar o Projeto
Quer ver as movimentações das peças de xadrez em ação? Siga estes passos simples para clonar o repositório, compilar e executar o projeto no seu computador!

📥 1. **Faça o Download do Projeto:**
Abra seu terminal (ou Prompt de Comando/PowerShell no Windows) e use o comando git clone para baixar todo o projeto para o seu computador:

Bash

git clone https://github.com/SEU_USUARIO_GITHUB/SEU_REPOSITORIO.git
⚠️ Importante: Substitua https://github.com/SEU_USUARIO_GITHUB/SEU_REPOSITORIO.git pelo link real do seu repositório GitHub.

Após o download, acesse a pasta do projeto:

Bash

cd SEU_REPOSITORIO
⚠️ Importante: Substitua SEU_REPOSITORIO pelo nome da pasta que foi criada (geralmente o nome do seu repositório).

⚙️ 2. **Prepare-se para a Análise (Compilação):**
Para que seu computador entenda e execute o código em C, você precisará compilá-lo. Certifique-se de ter um compilador C instalado no seu sistema (o GCC é uma excelente opção e é gratuito).

No terminal, digite o seguinte comando para compilar o projeto (assumindo que o arquivo principal se chama xadrez.c):

Bash

gcc xadrez.c -o xadrez
O que isso faz? Este comando pega o arquivo xadrez.c (seu código fonte) e o transforma em um programa executável chamado xadrez.

▶️ 3. **Hora de Avaliar! (Execução):**
Com o programa compilado, você já pode iniciar a visualização das movimentações! No terminal, digite:

Bash

./xadrez
E pronto! O programa executará, exibindo as sequências de movimentação das peças conforme o nível de desafio implementado.

📈 **Níveis do Desafio**
Este projeto foi construído incrementalmente, o que significa que funcionalidades foram adicionadas em etapas, tornando o código mais robusto e complexo a cada fase.

🏅 **Nível 1: Novato — Movimentações Simples e Loops Essenciais**
O ponto de partida! Foco na aplicação básica de estruturas de repetição para simular as primeiras movimentações.

🚩 Objetivos:
Movimentação Básica: Implemente as movimentações para:
Bispo: 5 casas na diagonal superior direita.
Torre: 5 casas para a direita.
Rainha: 8 casas para a esquerda.
Condição Especial do Bispo: Para o Bispo, utilize um printf com a combinação de direções para indicar o movimento diagonal.
Estruturas de Repetição: Todas as movimentações devem ser implementadas usando loops (estrutura de repetição).
Constantes: Permite o uso de constantes para definir valores e evitar repetição de código.
➡️ Entrada e Saída:
Entrada: Os valores (número de casas, direções) são definidos diretamente no código, usando variáveis.
Saída: O sistema exibirá os resultados de cada movimentação de forma clara e legível, com a direção da peça (ex: printf("Cima\n");).

🏅 **Nível 2: Aventureiro — O Salto do Cavalo**
Agora que você dominou os loops simples, o desafio se intensifica com a complexidade da movimentação do Cavalo, exigindo loops aninhados.

🚀 **O que há de novo:**
Movimentação do Cavalo: Implemente a movimentação do Cavalo em "L" para baixo e para a esquerda.
Loops Aninhados Obrigatórios: É mandatório o uso de loops aninhados para a movimentação do Cavalo.
Combinação de Loops: Pelo menos duas estruturas de repetição diferentes devem ser usadas nos loops aninhados (por exemplo, um for externo e um while ou do-while interno).
🥇 Nível 3: Mestre — Recursividade e Controle Avançado
Para o desafio final, a elegância do código é aprimorada. As movimentações mais simples adotam recursividade, e o Cavalo explora o uso avançado de loops.

✨ **O Desafio Final:**
Recursividade para Peças Simples: As movimentações do Bispo, Torre e Rainha devem ser implementadas usando funções recursivas.
Bispo: 5 casas na diagonal direita para cima.
Torre: 5 casas para a direita.
Rainha: 8 casas para a esquerda.
Cavalo Avançado: A movimentação do Cavalo (1 vez em "L" para cima à direita) deve utilizar 

loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break para controle de fluxo.
Loops Aninhados Obrigatórios: O uso de loops aninhados ainda é obrigatório para a movimentação do Bispo (mesmo com recursividade ou dentro dela, se aplicável).
📋 **Requisitos Fundamentais (Comuns a Todos os Níveis):**
Entrada de Dados Fixa: Todos os valores (número de casas, direções) são definidos diretamente no código via variáveis. Não há entrada de usuário.
Estrutura de Repetição: O uso de loops é fundamental para todas as movimentações.
Exibição Clara: Os resultados devem ser impressos no console de forma organizada e fácil de entender.
Performance Eficiente: O código deve rodar de forma fluida, sem atrasos perceptíveis.
Documentação: Mantenha o código bem documentado, com comentários que expliquem a lógica e o propósito de cada parte.
Legibilidade: Priorize um código limpo, organizado e fácil de ler, com nomes de variáveis descritivos e indentação consistente.
Ao concluir este desafio, você terá um conhecimento mais profundo de estruturas complexas e elaboradas, amplamente utilizadas no mercado de trabalho. Boa sorte e boa programação!

Atenciosamente, 
**Rafael Martinano (Aluno de Gestão em Tecnologia da Informação - Faculdade Estácio)**
