#include <stdio.h>
#include <string.h>

int main() {
    // Primeira carta (RR)
    char Estado1;
    char Codigo1 [8]; 
    char NomeCidade1 [50]; 
    int Populacao1; 
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Segunda carta (AM)
    char Estado2;
    char Codigo2[8];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    // Dados primeira carta (RR)
    printf("Digite os dados da primeira carta:\n");
    
    printf("Estado (A-H): \n");
    scanf(" %c", &Estado1);

    printf("Código da Carta (Ex: A01) \n");
    scanf("%4s", Codigo1); //([%4s]) Para leitura de no máximo 3 caracateres
            
    printf("Nome da Cidade: \n"); // ([^]) Leitura da string
    scanf(" %[^\n]" ,NomeCidade1);
            
    printf("População: \n");
    scanf(" %d", &Populacao1);

    printf("Área (Em Km²:): \n");
    scanf(" %f", &Area1);

    printf("PIB (Em Bilhões de Reais): \n");
    scanf(" %f", &PIB1);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos1); 

    // Dados segunda carta (AM)
    printf("Digite os dados da Segunda carta:\n");
    
    printf("Estado (A-H): \n");
    scanf(" %c", &Estado2);

    printf("Código da Carta (Ex:B02): \n");
    scanf(" %4s", Codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]" ,NomeCidade2);
        
    printf("População: \n");
    scanf(" %d", &Populacao2);

    printf("Área (em km²): \n");
    scanf(" %f", &Area2);

    printf("PIB (Em Bilhões de Reais): \n");
    scanf(" %f", &PIB2);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos2);
    

    // Info. primeira carta (RR)
    
    printf("\nCarta 1:\n");
    
    printf("Estado: %c\n", Estado1);

    printf("Código: %s\n", Codigo1);

    printf("Nome da Cidade: %s\n", NomeCidade1);

    printf("População: %d\n", Populacao1);

    printf("Área: %.2f km²\n", Area1);

    printf("PIB: %.2f bilhões de reais\n", PIB1);

    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);


// Info. segunda carta (AM)

    printf("\nCarta 2:\n");

    printf("Estado: %c\n", Estado2);

    printf("Código: %s\n", Codigo2);

    printf("Nome da Cidade: %s\n", NomeCidade2);

    printf("População: %d\n", Populacao2);

    printf("Área: %.2f km²\n", Area2);

    printf("PIB: %.2f bilhões de reais\n", PIB2);

    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);  

    return 0;

}

