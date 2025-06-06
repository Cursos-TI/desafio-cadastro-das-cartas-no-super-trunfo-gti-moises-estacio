# Super Trunfo - Países 🌍

Este programa em linguagem C permite o cadastro e a comparação de cartas no estilo Super Trunfo, com foco em cidades e atributos socioeconômicos. Desenvolvido como exercício por Moisés Santos da Silva.

---

✅ **Arquivo gerado com apoio do ChatGPT (OpenAI)**  
*Este tipo de arquivo auxilia na documentação do projeto, e a colaboração com ferramentas de IA não reduz o mérito de sua construção.*

---

## 📋 Requisitos

- Compilador GCC (GNU Compiler Collection)
- Sistema operacional Linux ou Windows com terminal
- Editor de texto para editar o código (opcional)

## 🛠️ Como compilar

Abra o terminal e execute o comando:

```bash
gcc super_trunfo.c -o super_trunfo


▶️ Como executar

No terminal, execute:
bash
./super_trunfo

No Windows:
bash
super_trunfo.exe

👨‍💻 Fluxo do programa
O usuário digita os dados de duas cartas (representando cidades).
O programa calcula atributos adicionais automaticamente.
O usuário escolhe um atributo para a batalha.
O programa compara os valores e mostra qual carta venceu.
Durante a execução, o programa pedirá que você pressione ENTER para exibir as informações de cada carta.

📊 Atributos disponíveis para comparação
Ao final do cadastro, o programa exibirá o seguinte menu:


Escolha atributo das cartas para batalha!

1 para População  
2 para Área  
3 para PIB  
4 para Número de pontos turísticos  
5 para Densidade demográfica
Digite o número correspondente ao atributo desejado e pressione ENTER para comparar.

🧪 Exemplo de uso (trecho simulado)
text
Copiar
Editar
Digite o nome da cidade da carta 01: natal
Digite a população da cidade: 900000
Digite a área da cidade: 170.0
...

Digite o nome da cidade da carta 02: mossoro
Digite a população da cidade: 300000
Digite a área da cidade: 2110.0
...

Escolha atributo das cartas para batalha!
1 para População
2 para Área
...

> 1

Comparação de Cartas (População)

Carta 01 - NATAL : 900000  
Carta 02 - MOSSORO : 300000  
Resultado: Carta 1 (NATAL) venceu!

📌 Observações
O programa transforma automaticamente os nomes e códigos digitados em maiúsculas.

Aceita apenas nomes sem acento e sem espaços.

Usa apenas entrada padrão (scanf) e saída (printf).

👨‍🎓 Autor
Moisés Santos da Silva
Desenvolvido em 5 de junho de 2025
Desafio: Interatividade no Super Trunfo – Nível Aventureiro