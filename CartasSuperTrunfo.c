#include <stdio.h>

/*  Aluno: Moises Santos da Silva ;
    Data: 05 jun 2025;
    Desafio Super Trunfo - Países;
    Tema 1: Cadastro das Cartas;
    Nivel novato: Comparando Cartas do Super Trunfo
 */

int main() {
    // Definindo varáveis da carta 01
    char estado1;
    char codigoCarta1[4], nomeCidade1[20];
    int populacao1, numPontosTuristicos1;
    float areaKm2_1, PIB1;
    //Nivel aventureiro para carta 01
    float densPop1;
    float pibPerCap1;
    //Nivel mestre para carta 01
    float superPoder1;

    // Definindo varáveis da carta 02
    char estado2;
    char codigoCarta2[4], nomeCidade2[20];
    int populacao2, numPontosTuristicos2;
    float areaKm2_2, PIB2;
    //Nivel aventureiro para carta 02
    float densPop2;
    float pibPerCap2;
    //Nivel mestre para carta 02
    float superPoder2;

    //variável que aponta para atributo escolhido
   // float atributo;

    //Obtendo valores da carta 01 do usuário
    printf("*************************************************\n");
    printf("*      Cadastro de cartas do Super Trunfo       *\n");
    printf("*      Tema: Paises                             *\n");
    printf("*      Nível: Mestre                            *\n");
    printf("*                              by Moisés Santos *\n");
    printf("*************************************************\n");
    printf("*          Digite os dados da carta 01          *\n");
    printf("*                                               *\n");
    printf("    => Digite o Estado da carta (1 char): ");
    scanf(" %c", &estado1);      
    printf("    => Digite o Código da carta: ");
    scanf("%s", codigoCarta1);    
    printf("    => Digite o nome da cidade da carta 01:");
    scanf("%s", nomeCidade1);    
    printf("    => Digite a população da cidade:");
    scanf("%d", &populacao1);    
    printf("    => Digite a área da cidade:");
    scanf("%f", &areaKm2_1);    
    printf("    => Digite o PIB da cidade:");
    scanf("%f", &PIB1);   
    printf("    => Digite o número de pontos turisticos da cidade:");
    scanf("%d", &numPontosTuristicos1);    
    
    //Implementacao nivel aventureiro
    densPop1 = populacao1/areaKm2_1;
    pibPerCap1 = PIB1 /populacao1;

    //Implementacao nivel mestre
    superPoder1= (float) populacao1+areaKm2_1+PIB1+pibPerCap1+(1/densPop1)+numPontosTuristicos1;
    
    //Obtendo valores da carta 02 do usuário
    printf("*******************************************************************\n");
    printf("*          Digite os dados da carta 02                            *\n");
    printf("*                                                                 *\n");
    printf("    => Digite o Estado da carta (1 char): ");
    scanf(" %c", &estado2);      
    printf("    => Digite o Código da carta: ");
    scanf("%s", codigoCarta2);    
    printf("    => Digite o nome da cidade da carta 01:");
    scanf("%s", nomeCidade2);    
    printf("    => Digite a população da cidade:");
    scanf("%d", &populacao2);    
    printf("    => Digite a área da cidade:");
    scanf("%f", &areaKm2_2);    
    printf("    => Digite o PIB da cidade:");
    scanf("%f", &PIB2);   
    printf("    => Digite o número de pontos turisticos da cidade:");
    scanf("%d", &numPontosTuristicos2);      

    //Implementacao nivel aventureiro
    densPop2 = populacao2/areaKm2_2;
    pibPerCap2 = PIB2 /populacao2;

    //Implementacao nivel mestre
    superPoder2= (float) populacao2+areaKm2_2+PIB2+pibPerCap2+(1/densPop2)+numPontosTuristicos2;

    
    printf("*****************************************************\n");
    printf("*              Informações da carta 01              *\n");
    printf("*                                                   *\n");
    printf(" Estado: %c \n",estado1);
    printf(" Código: %s \n",codigoCarta1);
    printf(" Nome da Cidade: %s \n",nomeCidade1);
    printf(" População: %d \n",populacao1);
    printf(" Área: %.2f \n",areaKm2_1);
    printf(" PIB: %.2f \n",PIB1);
    printf(" Número de Pontos Turísticos: %d \n",numPontosTuristicos1);
    printf(" Densidade populacional: %.2f \n",densPop1);
    printf(" PIB per capita: %.2f \n",pibPerCap1);
    printf(" Super Poder: %.2f \n",superPoder1);
    
    
    //Espaço vertical separador
    printf("\n");
    printf("\n");     

    printf("******************************************************************\n");
    printf("*           Informações da carta 02                               *\n");
    printf("*                                                                 *\n");
    printf(" Estado: %c \n",estado2);
    printf(" Código: %s \n",codigoCarta2);
    printf(" Nome da Cidade: %s \n",nomeCidade2);
    printf(" População: %d \n",populacao2);
    printf(" Área: %.2f \n",areaKm2_2);
    printf(" PIB: %.2f \n",PIB2);
    printf(" Número de Pontos Turísticos: %d \n",numPontosTuristicos2);
   // implementacao nivel aventureiro
    printf(" Densidade populacional: %.2f \n",densPop2);
    printf(" PIB per capita: %.2f \n",pibPerCap2);
    printf(" Super Poder: %.2f \n",superPoder2);
    
    //Espaço vertical separador    
    printf("\n");
    printf("\n");   

    //Implementacao nivel novato para "Comparando Cartas do Super Trunfo"
    printf("*******************************************************************\n");   
    printf("*  Comparação de Cartas  (População)                              *\n");
    printf("*                                                                 *\n"); 

    //Espaço vertical separador    
    printf("   \n");
    
    //Implementação para o desafio novato : Comparando Cartas do Super Trunfo
    printf("Carta 01- %s : %d \n",nomeCidade1, populacao1);
    printf("Carta 02- %s : %d \n",nomeCidade2, populacao2);
    if (populacao1>populacao2){
       printf("Resultado: Carta 1 (%s) venceu!",nomeCidade1);
    }else{
       printf("Resultado: Carta 2 (%s) venceu!",nomeCidade2);
    }
        
    //Espaço vertical separador    
    printf("\n");
    printf("\n");   


    printf("**********  Obrigado!  ***********\n");

    //Espaço vertical separador    
    printf("\n");
    printf("\n");    

    return 0;
}
