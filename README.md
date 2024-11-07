# **Calculadora Científica em C**

Este é um projeto em **C** para uma calculadora científica simples, capaz de realizar operações matemáticas básicas e avançadas. O programa permite ao usuário calcular soma, subtração, multiplicação, divisão, exponenciação e raiz quadrada de números.

## **Funcionalidades**

A calculadora oferece as seguintes operações:

- **Soma**: Adiciona dois números.
- **Subtração**: Subtrai um número de outro.
- **Multiplicação**: Multiplica dois números.
- **Divisão**: Divide dois números, com verificação de divisão por zero.
- **Exponenciação**: Calcula a base elevada ao expoente.
- **Raiz Quadrada**: Calcula a raiz quadrada de um número.

## **Como Funciona**

- O programa apresenta um menu de operações numéricas.
- O usuário escolhe uma operação, insere os valores necessários e obtém o resultado.
- O processo pode ser repetido até o usuário decidir encerrar o programa (opção "0").

### **Exemplo de Uso**

```bash
Calculadora Científica

Escolha uma operação:
0. Sair
1. Soma
2. Subtração
3. Multiplicação
4. Divisão
5. Exponenciação
6. Raiz Quadrada

Digite o número da operação desejada: 1
Primeiro valor: 5
Segundo valor: 3
Resultado: 8.000000
```

## **Como Compilar e Executar**

### **Requisitos**
- Compilador **GCC** ou similar
- Biblioteca `math.h` (já incluída na maioria dos compiladores)

### **Compilação**

1. Para compilar o programa, execute o seguinte comando no terminal:

```bash
gcc calculadora.c -o calculadora -lm
```

> **Nota**: A opção `-lm` é usada para garantir que a biblioteca matemática (`math.h`) seja corretamente vinculada.

2. Para executar o programa compilado:

```bash
./calculadora
```

## **Estrutura do Código**

O código está dividido em funções para realizar cada operação matemática de forma organizada:

- **Funções de Operações**: Cada operação (soma, subtração, etc.) tem uma função dedicada.
- **Uso de Memória Dinâmica**: A memória para armazenar resultados é alocada dinamicamente e liberada após o cálculo.
- **Verificação de Erros**: A divisão por zero e outras condições de erro são verificadas adequadamente.

## **Considerações**

- A calculadora foi projetada para ser simples e intuitiva.
- Verificações de erro são realizadas, como a divisão por zero e a exponenciação com valores inválidos.
- A memória alocada para os resultados é liberada após cada operação, garantindo a eficiência do programa.
