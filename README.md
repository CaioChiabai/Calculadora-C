Calculadora científica
Este é um programa simples de calculadora científica de linha de comando escrito em C. Ele permite que o usuário execute várias operações matemáticas, incluindo:

Adição
Subtração
Multiplicação
Divisão
Expoentes
Raiz quadrada

Como usar

Compile o programa usando um compilador C (por exemplo gcc calculator.c -o calculator).
Execute o programa compilado ( ./calculator).
O programa exibirá um menu de operações disponíveis. Insira o número correspondente para selecionar a operação desejada.
Para cada operação, o programa solicitará que você insira os valores necessários (por exemplo, dois números para adição, subtração, multiplicação e divisão).
O programa então exibirá o resultado do cálculo.
Após cada operação, o menu será exibido novamente, permitindo que você realize outro cálculo.
Para sair do programa, selecione a opção 0 no menu.

Características

Lida com operações aritméticas básicas: adição, subtração, multiplicação e divisão.
Suporta cálculos de expoentes, incluindo manipulação de bases negativas e expoentes.
Inclui uma função de raiz quadrada.
Fornece tratamento de erros para divisão por zero.
Usa alocação dinâmica de memória para manipular entradas variáveis.
Apresenta uma interface de menu amigável para selecionar operações.

Visão geral do código
O programa é dividido nas seguintes funções:

soma(), subtracao(), multiplicacao(), divisao(): Executar as respectivas operações aritméticas.
exponencial(): Calcula o resultado de elevar um número a uma potência, lidando com vários casos (por exemplo, base negativa, expoente zero).
raiz(): Calcula a raiz quadrada de um número fornecido.
tabelaOperacao(): Exibe o menu de operações disponíveis.
main(): Gerencia o fluxo geral do programa, incluindo entrada do usuário, seleção de operação e alocação de memória.

O programa utiliza ponteiros para manipular os valores de entrada e os resultados, garantindo uso eficiente da memória e cálculos precisos.
 
