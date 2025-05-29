#include <stdio.h>

/*  Aluno: Moises Santos da Silva ;
    Data: 29 mai 2025;
    Desafio Super Trunfo - Países;
    Tema 1: Cadastro das Cartas;
    Nivel novato: Cadastro de 02 cartas do Super Trunfo
 */

int main() {
    // Definindo varáveis da carta 01
    char estado1;
    char codigoCarta1[4], nomeCidade1[20];
    int populacao1, numPontosTuristicos1;
    float areaKm2_1, PIB1;

    // Definindo varáveis da carta 02
    char estado2;
    char codigoCarta2[4], nomeCidade2[20];
    int populacao2, numPontosTuristicos2;
    float areaKm2_2, PIB2;


    //Obtendo valores da carta 01 do usuário
    printf("*************************************************\n");
    printf("*      Cadastro de cartas do Super Trunfo       *\n");
    printf("*      Tema: Paises                             *\n");
    printf("*      Nível: Novato                            *\n");
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
     printf("*****************************************************\n");
    printf("*     mostrando informações da carta 01              *\n");
    printf("*                                                *\n");
    printf(" Estado: %c \n",estado1);
    printf(" Código: %s \n",codigoCarta1);
    printf(" Nome da Cidade: %s \n",nomeCidade1);
    printf(" População: %d \n",populacao1);
    printf(" Área: %f \n",areaKm2_1);
    printf(" PIB: %f \n",PIB1);
    printf(" Número de Pontos Turísticos: %d \n",numPontosTuristicos1);
    
    //Espaço vertical separador
    printf("\n");
    printf("\n");     

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
     printf("******************************************************************\n");
    printf("*           Informações da carta 02                               *\n");
    printf("*                                                                 *\n");
    printf(" Estado: %c \n",estado2);
    printf(" Código: %s \n",codigoCarta2);
    printf(" Nome da Cidade: %s \n",nomeCidade2);
    printf(" População: %d \n",populacao2);
    printf(" Área: %f \n",areaKm2_2);
    printf(" PIB: %f \n",PIB2);
    printf(" Número de Pontos Turísticos: %d \n",numPontosTuristicos2);

    //Espaço vertical separador    
    printf("\n");
    printf("\n");     

    printf("**********  Obrigado!  ***********\n");

    //Espaço vertical separador    
    printf("\n");
    printf("\n");    

    return 0;
}
