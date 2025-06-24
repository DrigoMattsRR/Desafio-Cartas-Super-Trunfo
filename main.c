#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Preenchimento das variaveis
    char estadoA , estadoB;
    char codigo_cartaA[4] , codigo_cartaB[4];
    char cidadeA[20], cidadeB[20];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;
    float densidade_Demografica1 , densidade_Demografica2;
    float percapita1 , percapita2 ;
    int duelo;

// PREENCHIMENTO DE CADASTRO CARTA A

    printf("CADASTRO CARTA 1:\n");
    printf("Insira estado carta: ");
    scanf(" %c", &estadoA);
    printf("Insira codigo da carta: ");
    scanf(" %s", &codigo_cartaA);
    printf("Nome da Cidade: ");
    scanf(" %s", &cidadeA);
    printf("População: ");
    scanf(" %d", &populacaoA);
    printf("Area km: ");
    scanf(" %f", &areaA);
    printf("PIB: ");
    scanf(" %f", &pibA);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosA);
    printf("\n\n");

    // PREENCHIMENTO DE CADASTRO CARTA B

    printf("CADASTRO CARTA 2:\n");
    printf("Insira estado carta: ");
    scanf(" %c", &estadoB);
    printf("Insira codigo da carta: ");
    scanf(" %s", &codigo_cartaB);
    printf("Nome da Cidade: ");
    scanf(" %s", &cidadeB);
    printf("População: ");
    scanf(" %d", &populacaoB);
    printf("Area km: ");
    scanf(" %f", &areaB);
    printf("PIB: ");
    scanf(" %f", &pibB);
    printf("Numero de pontos turísticos: ");
    scanf(" %d", &pontos_turisticosB);
    printf("\n\n");

    //CALUCULOS DE ATRIBUTOS DENSIDADE POPULACIONAL E PIB PER CAPITA
    densidade_Demografica1 =  (float) populacaoA / areaA ;
    percapita1 = ( float) pibA / populacaoA ;
    densidade_Demografica2 =  (float) populacaoB / areaB ;
    percapita2 = ( float) pibB / populacaoB ;


    // IMPRESSAO DE DADOS DE CADA CARTA A

    printf("CARTA 1\n");
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigo_cartaA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Area km: %.2f\n", areaA);
    printf("Densidade demografica: %.1f\n", densidade_Demografica1);
    printf("PIB: %.3f\n", pibA);
    printf("Pib per capita: %.3f\n", percapita1);
    printf("Pontos Turisticos: %d\n", pontos_turisticosA);
    printf("\n");

    // IMPRESSAO DE DADOS DE CADA CARTA B

    printf("CARTA 2\n");
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codigo_cartaB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Area km: %.2f\n", areaB);
    printf("Densidade demografica: %.1f\n", densidade_Demografica2);
    printf("PIB: %.3f\n", pibB);
    printf("Pib per capita: %.3f\n", percapita2);
    printf("Pontos Turisticos: %d\n", pontos_turisticosB);
    printf("\n");
    

printf("Agora defina qual atributo deseja realizar o combate entre as cartas: \n 1- População \n 2- Area \n 3- Densidade demografica\n 4- Pib \n 5- Pib per Capita \n 6- Pontos turisticos \n");
scanf("%d", &duelo);

switch (duelo)
{
case 1:
    printf("Voce escolheu duelo de População vence a carta com maior atributo *-* \n");
    printf("Carta de %s possui: %d em População -- Carta de %s possui: %d em População \n", cidadeA , populacaoA , cidadeB, populacaoB);
    if (populacaoA > populacaoB)
    {
        printf("Resultado: Carta %s é a vencedora, possui população maior que a carta adversaria.\n", cidadeA);
    } else if (populacaoA < populacaoB)
    {
        printf("Resultado: Carta %s é a vencedora, possui população maior que a carta adversaria.\n", cidadeB);
    } else
    {
        printf("Resultado: Tivemos um Empate.\n");
    }

    break;
case 2:
printf("Voce escolheu duelo de de Area km: vence a carta com maior atributo *-* \n");
printf("Carta de %s possui: %.2f em Area km -- Carta de %s possui: %.2f em Area km \n", cidadeA , areaA , cidadeB, areaB);
if (areaA > areaB)
{
    printf("Resultado: Carta %s é a vencedora, possui Area km maior que a carta adversaria.\n", cidadeA);
} else if (areaA < areaB)
{
    printf("Resultado: Carta %s é a vencedora, possui Area km maior que a carta adversaria.\n", cidadeB);
} else
{
    printf("Resultado: Tivemos um Empate.\n");
}
    break;
case 3:
printf("Voce escolheu duelo de Densidade Demografica Vence a carta com Menor atributo *-* \n");
printf("Carta de %s possui: %.1f em Densidade Demografica -- Carta de %s possui: %.1f em Densidade Demografica \n", cidadeA , densidade_Demografica1 , cidadeB, densidade_Demografica2);
if (densidade_Demografica1 < densidade_Demografica2)
{
    printf("Resultado: Carta %s é a vencedora, possui Densidade Demografica Menor que a carta adversaria.\n", cidadeA);
} else if (densidade_Demografica1 > densidade_Demografica2)
{
    printf("Resultado: Carta %s é a vencedora, possui Densidade Demografica que a carta adversaria.\n", cidadeB);
} else
{
    printf("Resultado: Tivemos um Empate.\n");
}
    break;
case 4:
printf("Voce escolheu duelo de Densidade Demografica Vence a carta com Maior atributo *-* \n");
printf("Carta de %s possui: %.3f BI em Pib -- Carta de %s possui: %.3f BI em Pib \n", cidadeA , pibA , cidadeB, pibB);
if (pibA > pibB)
{
    printf("Resultado: Carta %s é a vencedora, possui PIB Maior que a carta adversaria.\n", cidadeA);
} else if (pibA < pibB)
{
    printf("Resultado: Carta %s é a vencedora, possui PIB Maior que a carta adversaria.\n", cidadeB);
} else
{
    printf("Resultado: Tivemos um Empate.\n");
}
    break;
case 5:
printf("Voce escolheu duelo de Pib per Capita Vence a carta com Maior atributo *-* \n");
printf("Carta de %s possui: %.3f em Pib -- Carta de %s possui: %.3f em Pib \n", cidadeA , percapita1 , cidadeB, percapita2);
if (percapita1 > percapita2)
{
    printf("Resultado: Carta %s é a vencedora, possui PIB per Capita Maior que a carta adversaria.\n", cidadeA);
} else if (percapita1 < percapita2)
{
    printf("Resultado: Carta %s é a vencedora, possui PIB per Capita Maior que a carta adversaria.\n", cidadeB);
} else 
{
    printf("Resultado: Tivemos um Empate.\n");
}
    break;
case 6:
printf("Voce escolheu duelo de Pontos Turisticos Vence a carta com Maior atributo *-* \n");
printf("Carta de %s possui: %d em Pontos Turisticos -- Carta de %s possui: %.d em Pontos Turisticos \n", cidadeA , pontos_turisticosA , cidadeB, pontos_turisticosB);
if (pontos_turisticosA > pontos_turisticosB)
{
    printf("Resultado: Carta %s é a vencedora, possui Pontos Turisticos Maior que a carta adversaria.\n", cidadeA);
} else if (pontos_turisticosA < pontos_turisticosB)
{
    printf("Resultado: Carta %s é a vencedora, possui Pontos Turisticos Maior que a carta adversaria.\n", cidadeB);
} else 
{
    printf("Resultado: Tivemos um Empate.\n");
}
    break;

default:
    printf("Opção invalida, escola opção de 1 a 6.");
    break;
}
    return 0;
}

