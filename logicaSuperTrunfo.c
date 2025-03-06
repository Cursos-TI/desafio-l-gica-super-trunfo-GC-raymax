#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1

    char estado1;
    char codigo_da_carta1[4];      // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade1[50];
    unsigned long int populacao1;  //Nova variável pra maiores valores
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // Nova variável para densidade populacional
    float pib_per_capita1;         // Nova variável para PIB per capita

    // Declaração de variáveis para a Carta 2

    char estado2;
    char codigo_da_carta2[4];      // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade2[50];
    unsigned long int populacao2;  //Nova variável pra maiores valores
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2; // Nova variável para densidade populacional
    float pib_per_capita2;         // Nova variável para PIB per capita

    // Declaração de variáveis para modo dois atributos, carta1

    char estado_MOD1;
    char codigo_da_carta_MOD1[4]; // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade_MOD1[50];
    unsigned long int populacao_MOD1;  //Nova variável pra maiores valores
    float area_MOD1;
    float pib_MOD1;
    int pontos_turisticos_MOD1;
    float densidade_populacional_MOD1; // Nova variável para densidade populacional
    float pib_per_capita_MOD1;         // Nova variável para PIB per capita

    // Declaração de variáveis para modo dois atributos, carta1

    char estado_MOD2;
    char codigo_da_carta_MOD2[4]; // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade_MOD2[50];
    unsigned long int populacao_MOD2;  //Nova variável pra maiores valores
    float area_MOD2;
    float pib_MOD2;
    int pontos_turisticos_MOD2;
    float densidade_populacional_MOD2; // Nova variável para densidade populacional
    float pib_per_capita_MOD2;         // Nova variável para PIB per capita

    // Buffer para limpar o stdin

    char buffer;

    // Variável para as opções do menu principal

    int opcao;

    // Variáveis para as opções do menu MOD

    int opcao_MOD1;
    int opcao_MOD2;


    // Início do menu interativo
while (1)//loop infinito
{
    printf("=== Bem vindo ao Super Trunfo!! ===\n");
printf("\nVeja as opções e escolha uma delas no final\n");
printf("\n1. Iniciar o jogo\n");
printf("2.Iniciar jogo : Modo dois atributos\n");
printf("3. Ver as Regras\n");
printf("4. Sobre o jogo\n");
printf("5. Sobre o modo dois atributos\n");
printf("\nAgora escolha uma opção(1, 2, 3 ou 4):");
scanf("%d", &opcao);
   // Uso do switch para saber qual opção escolhida e qual ação prosseguir
    switch (opcao)
    {
    case 1:// Início do jogo
    printf("\nInicializando o jogo...\n");

        // Cadastro da Carta 1

    printf("\n=== Cadastro de Carta 1 ===\n");
    printf("Estado (letra de A a H): ");
    scanf("%c", &estado1);
    
    // Limpar o buffer de entrada após a leitura do caractere

    scanf("%c", &buffer);
    
    printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): ");
    scanf("%3s", codigo_da_carta1);
    
    // Limpar o buffer de entrada

    scanf("%c", &buffer);
    
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome_da_cidade1);
    
    printf("População (em habitantes): ");
    scanf("%u", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Limpar o buffer de entrada após todos os dados da primeira carta

    scanf("%c", &buffer);
    
    // Cadastro da Carta 2

    printf("\n=== Cadastro de Carta 2 ===\n");
    printf("Estado (letra de A a H): ");
    scanf("%c", &estado2);
    
    // Limpar o buffer de entrada

    scanf("%c", &buffer);
    
    printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): ");
    scanf("%3s", codigo_da_carta2);
    
    // Limpar o buffer de entrada

    scanf("%c", &buffer);
    
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nome_da_cidade2);
    
    printf("População (em habitantes): ");
    scanf("%u", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a Carta 1

    densidade_populacional1 = populacao1 / area1;                                                               // Habitantes por km²
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;                                                         // PIB total em reais dividido pela população

    // Cálculos para a Carta 2

    densidade_populacional2 = populacao2 / area2;                                                               // Habitantes por km²
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;                                                         // PIB total em reais dividido pela população
  
    // Exibição dos dados da Carta 1

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %u habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    // Exibição dos dados da Carta 2

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %u habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparação de Cartas
    
    printf("\n=== Comparação de Cartas: ===\n");

// Verificação do resultado da População
printf("\n=== População ===\n");
    if (populacao1 != populacao2)
    {
        if (populacao1 > populacao2)
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
        }
        else
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        }
    }
    else
    {
        printf("\nCarta 1 - %s\n", nome_da_cidade1);
        printf("Carta 2 - %s\n", nome_da_cidade2);
        printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade1, nome_da_cidade2);
    }
    


// Verificação do resultado da Area
printf("\n=== Area ===\n");
    if (area1 != area2)
    {
        if (area1 > area2)
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
        }
        else
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        }
    }
    else
    {
        printf("\nCarta 1 - %s\n", nome_da_cidade1);
        printf("Carta 2 - %s\n", nome_da_cidade2);
        printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade1, nome_da_cidade2);
    } 

// Verificação do resultado do PIB
printf("\n=== PIB ===\n");
    if (pib1 != pib2)
    {
        if (pib1 > pib2)
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
        }
        else
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        }
    }
    else
    {
        printf("\nCarta 1 - %s\n", nome_da_cidade1);
        printf("Carta 2 - %s\n", nome_da_cidade2);
        printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade1, nome_da_cidade2);
    }

// Verificação do resultado de Pontos Turísticos
printf("\n=== Pontos Turísticos ===\n");
    if (pontos_turisticos1!= pontos_turisticos2)
    {
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
        }
        else
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        }
    }
    else
    {
        printf("\nCarta 1 - %s\n", nome_da_cidade1);
        printf("Carta 2 - %s\n", nome_da_cidade2);
        printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade1, nome_da_cidade2);
    }

// Verificação do resultado da Densidade Populacional
printf("\n=== Densidade Populacional ===\n");
    if (densidade_populacional1 != densidade_populacional2)
    {
        if (densidade_populacional1 > densidade_populacional2)
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
        }
        else
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
        }
    }
    else
    {
        printf("\nCarta 1 - %s\n", nome_da_cidade1);
        printf("Carta 2 - %s\n", nome_da_cidade2);
        printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade1, nome_da_cidade2);
    }

// Verificação do resultado do PIB per capita
printf("\n=== PIB per capita ===\n");
    if (pib_per_capita1 != pib_per_capita2)
    {
        if (pib_per_capita1 > pib_per_capita2)
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
        }
        else
        {
            printf("\nCarta 1 - %s\n", nome_da_cidade1);
            printf("Carta 2 - %s\n", nome_da_cidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
    }
    }
    else
    {
        printf("\nCarta 1 - %s\n", nome_da_cidade1);
        printf("Carta 2 - %s\n", nome_da_cidade2);
        printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade1, nome_da_cidade2);
    }

    // Término do jogo
    return 0;

        break;

    case 2: // Início do Jogo dois atributos

    printf("\nEscolha dois atributos para serem usados : \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("1º atributo : ");
    scanf("%d", &opcao_MOD1);
        switch (opcao_MOD1) {
            case 1:
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per capita\n");
            printf("2º atributo : ");
            scanf("%d", &opcao_MOD2);
                if (opcao_MOD2 == 1) {
                    printf("Erro: Você já escolheu o atributo 'População'. Escolha outro.\n");
                    scanf("\n %d", &opcao_MOD2);
                }
            // Cadastro da Carta 1

            printf("\n=== Cadastro de Carta 1 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD1);
    
            // Limpar o buffer de entrada após a leitura do caractere

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): \n");
            scanf("%3s", codigo_da_carta_MOD1);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD1);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao1);
            
            switch (opcao_MOD2)
            {
            case 2:
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Área: %.2f km²\n", area_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Área: %.2f km²\n", area_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 3:
            
            printf("PIB (em bilhões de reais): \n");
            scanf("%f", &pib_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("PIB (em bilhões de reais): \n");
            scanf("%f", &pib_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 4:
            
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado dos Pontos turísticos
            printf("\n=== Pontos Turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;

            case 5:

            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            // Cálculo para a Carta 1

            densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Área: %.2f km²\n", area_MOD1);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Área: %.2f km²\n", area_MOD2);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            // Verificação do resultado da densidade Populacional 
              printf("\n=== Densidade Populacional ===\n");
            if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
            {
                if (densidade_populacional_MOD1 < densidade_populacional_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            
            case 6:

            printf("PIB (em Bilhões): \n");
            scanf("%f", &pib_MOD2);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("PIB (em Bilhões): \n");
            scanf("%f", &pib_MOD2);

            // Cálculo para a Carta 1

            pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("PIB: %.2f Bilhões\n", pib_MOD1);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("PIB: %.2f Bilhões\n", pib_MOD2);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
            // Verificação do resultado do PIB per capita
              printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }

        }
         break;
        case 2:
            printf("1. População\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per capita\n");
            printf("2º atributo : ");
            scanf("%d", &opcao_MOD2);
            if (opcao_MOD2 == 2) {
                printf("Erro: Você já escolheu o atributo 'Área'. Escolha outro.\n");
                scanf("\n %d", &opcao_MOD2);
            }
            // Cadastro da Carta 1

            printf("\n=== Cadastro de Carta 1 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD1);
    
            // Limpar o buffer de entrada após a leitura do caractere

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): \n");
            scanf("%3s", codigo_da_carta_MOD1);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD1);
    
            printf("Area(Em Km²): \n");
            scanf("%f", &area_MOD1);

            switch (opcao_MOD2)
            {
            case 1:
            printf("População (em habitantes): \n");
            scanf("%f", &populacao_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Área: %.2f km²\n", area_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Área: %.2f km²\n", area_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 3:
            
            printf("PIB (em bilhões de reais): \n");
            scanf("%f", &pib_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);
    
            printf("PIB (em bilhões de reais): \n");
            scanf("%f", &pib_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("Area: %u Km²\n", area_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 4:
            
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);
    
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("Area: %.2f Km²\n", area_MOD2);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado da Area
            printf("\n=== Pontos Turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;

            case 5:

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);

            // Cálculo para a Carta 1

            densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Área: %.2f km²\n", area_MOD1);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Área: %.2f km²\n", area_MOD2);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");


            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
              } 

              // Verificação do resultado da Densidade populacional
              printf("\n=== Densidade Populacional ===\n");
            if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
            {
                if (densidade_populacional_MOD1 < densidade_populacional_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            
            case 6:

            printf("PIB (em Bilhões): \n");
            scanf("%f", &pib_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);
    
            printf("PIB (em Bilhões): \n");
            scanf("%f", &pib_MOD2);

            // Cálculo para a Carta 1

            pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("PIB: %.2f Bilhões\n", pib_MOD1);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("Area: %.2f Km²\n", area_MOD2);
            printf("PIB: %.2f Bilhões\n", pib_MOD2);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            // Verificação do resultado do PIB per capita
              printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            }
            break;

        case 3:
            printf("1. População\n");
            printf("2. Área\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per capita\n");
            printf("2º atributo : ");
            scanf("%d", &opcao_MOD2);
            if (opcao_MOD2 == 3) {
                printf("Erro: Você já escolheu o atributo 'PIB'. Escolha outro.\n");
                scanf("\n %d", &opcao_MOD2);
            }
            // Cadastro da Carta 1

            printf("\n=== Cadastro de Carta 1 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD1);
    
            // Limpar o buffer de entrada após a leitura do caractere

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): \n");
            scanf("%3s", codigo_da_carta_MOD1);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD1);
    
            printf("PIB(Em Bilhões de reais): \n");
            scanf("%f", &pib_MOD1);

            switch (opcao_MOD2)
            {
            case 1:
            printf("População (em habitantes): \n");
            scanf("%f", &populacao_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("PIB(Em Bilhões de reais): \n");
            scanf("%f", &pib_MOD1);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 2:
            
            printf("Area(Em Km²): \n");
            scanf("%f", &area_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);
    
            printf("PIB (em bilhões de reais): \n");
            scanf("%f", &pib_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("Area: %.2f Km²\n", area_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 4:
            
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("PIB (Em Bilhões de reais): \n");
            scanf("%f", &pib_MOD2);
    
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado dos Pontos Turísticos
            printf("\n=== Pontos Turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;

            case 5:

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD1);

            printf("Area(Em Km²): \n");
            scanf("%f", area_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("PIB(Em bilhões de reais): \n");
            scanf("%f", pib_MOD2);

            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);

            // Cálculo para a Carta 1

            densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Área: %.2f km²\n", area_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");


            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
              } 

              // Verificação do resultado da Densidade populacional
              printf("\n=== Densidade Populacional ===\n");
            if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
            {
                if (densidade_populacional_MOD1 < densidade_populacional_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            
            case 6:

            printf("População(Em habitantes): \n");
            scanf("%u", &populacao_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População(Em habitantes): \n");
            scanf("%u", &populacao_MOD2);

            printf("PIB (em Bilhões): \n");
            scanf("%f", &pib_MOD2);

            // Cálculo para a Carta 1

            pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u Habitantes\n", populacao_MOD1);
            printf("PIB: %.2f Bilhões\n", pib_MOD1);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u Habitantes\n", populacao_MOD2);
            printf("PIB: %.2f Bilhões\n", pib_MOD2);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            // Verificação do resultado do PIB per capita
              printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            }

            break;
        case 4:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per capita\n");
            printf("2º atributo : ");
            scanf("%d", &opcao_MOD2);
            if (opcao_MOD2 == 4) {
                printf("Erro: Você já escolheu o atributo 'Pontos Turísticos'. Escolha outro.\n");
                scanf("\n %d", &opcao_MOD2);
            }

            // Cadastro da Carta 1

            printf("\n=== Cadastro de Carta 1 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD1);
    
            // Limpar o buffer de entrada após a leitura do caractere

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): \n");
            scanf("%3s", codigo_da_carta_MOD1);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD1);

            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD1);

            switch (opcao_MOD2)
            {
            case 1:
            printf("População (em habitantes): \n");
            scanf("%f", &populacao_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);
    
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Pontos turísticos: %d\n", pontos_turisticos_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Pontos turísticos: %d\n", pontos_turisticos_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado dos Pontos Turísticos
            printf("\n=== Pontos Turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 2:
            
            printf("Area(Em Km²): \n");
            scanf("%f", &area_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);
    
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("Pontos turísticos: %d\n", pontos_turisticos_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("Area: %.2f Km²\n", area_MOD2);
            printf("Pontos turísticos: %d\n", pontos_turisticos_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado dos Pontos Turísticos
            printf("\n=== Pontos turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 3:
            
            printf("PIB(Em Bilhçoes de reais): \n");
            scanf("%d", &pib_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);

            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);
    
            printf("PIB (Em Bilhões de reais): \n");
            scanf("%f", &pib_MOD2);
    

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);
            printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado dos Pontos Turísticos
            printf("\n=== Pontos Turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;

            case 5:

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD1);

            printf("Area(Em Km²): \n");
            scanf("%f", area_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Número de Pontos Turísticos: \n");
            scanf("%d", pontos_turisticos_MOD2);

            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);

            // Cálculo para a Carta 1

            densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Área: %.2f km²\n", area_MOD1);
            printf("Pontos Turísticos: %d\n", pontos_turisticos_MOD1);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Pontos Turísticos: %d\n", pontos_turisticos_MOD2);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");


            // Verificação do resultado dos Pontos Turísticos
            printf("\n=== Pontos Turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
              } 

              // Verificação do resultado da Densidade populacional
              printf("\n=== Densidade Populacional ===\n");
            if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
            {
                if (densidade_populacional_MOD1 < densidade_populacional_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            
            case 6:

            printf("População(Em habitantes): \n");
            scanf("%u", &populacao_MOD1);

            printf("PIB (em Bilhões): \n");
            scanf("%f", &pib_MOD1);


            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);

            printf("Número de Pontos Turísticos: \n");
            scanf("%d", &pontos_turisticos_MOD2);
    
            printf("População(Em habitantes): \n");
            scanf("%u", &populacao_MOD2);

            printf("PIB (em Bilhões): \n");
            scanf("%f", &pib_MOD2);

            // Cálculo para a Carta 1

            pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u Habitantes\n", populacao_MOD1);
            printf("PIB: %.2f Bilhões\n", pib_MOD1);
            printf("Pontos Turísticos: %d\n", pontos_turisticos_MOD1);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u Habitantes\n", populacao_MOD2);
            printf("PIB: %.2f Bilhões\n", pib_MOD2);
            printf("Pontos Turísticos: %d\n", pontos_turisticos_MOD2);
            printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado dos Pontos Turísticos
            printf("\n=== Pontos Turísticos ===\n");
            if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
            {
                if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            // Verificação do resultado do PIB per capita
              printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
            }


            break;
        case 5:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("6. PIB per capita\n");
            printf("2º atributo : ");
            scanf("%d", &opcao_MOD2);
            if (opcao_MOD2 == 5) {
                printf("Erro: Você já escolheu o atributo 'Densidade populacional'. Escolha outro.\n");
                scanf("\n %d", &opcao_MOD2);
            }

                        // Cadastro da Carta 1

                        printf("\n=== Cadastro de Carta 1 ===\n");
                        printf("\nEstado (letra de A a H): \n");
                        scanf("%c", &estado_MOD1);
                
                        // Limpar o buffer de entrada após a leitura do caractere
            
                        scanf("%c", &buffer);
                
                        printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): \n");
                        scanf("%3s", codigo_da_carta_MOD1);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Nome da Cidade: \n");
                        scanf("%[^\n]", nome_da_cidade_MOD1);
            
                        printf("População(Em habitantes): \n");
                        scanf("%u", &populacao_MOD1);

                        printf("Area(Em Km²): \n");
                        scanf("%f", &area_MOD1);
            
                        switch (opcao_MOD2)
                        {
                        case 1:
                        
                        // Limpar o buffer de entrada após todos os dados da primeira carta
            
                        scanf("%c", &buffer);
                
                        // Cadastro da Carta 2
            
                        printf("\n=== Cadastro de Carta 2 ===\n");
                        printf("\nEstado (letra de A a H): \n");
                        scanf("%c", &estado_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
                        scanf("%3s", codigo_da_carta_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Nome da Cidade: \n");
                        scanf("%[^\n]", nome_da_cidade_MOD2);
                
                        printf("População (em habitantes): \n");
                        scanf("%u", &populacao_MOD2);
                
                        printf("Area(Em Km²): \n");
                        scanf("%f", &area_MOD2);
            
                        // Cálculo para a Carta 1
            
                        densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²
            
                        // Cálculo para a Carta 2
            
                        densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²

                        // Exibição dos dados da Carta 1
            
                        printf("\n=== Carta 1 ===\n");
                        printf("Estado: %c\n", estado_MOD1);
                        printf("Código: %s\n", codigo_da_carta_MOD1);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
                        printf("População: %u habitantes\n", populacao_MOD1);
                        printf("Area: %.2f Km²\n", area_MOD1);
                        printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_MOD1);
            
                        // Exibição dos dados da Carta 2
            
                        printf("\n=== Carta 2 ===\n");
                        printf("Estado: %c\n", estado_MOD2);
                        printf("Código: %s\n", codigo_da_carta_MOD2);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
                        printf("População: %u habitantes\n", populacao_MOD2);
                        printf("Area: %.2f Km²\n", area_MOD2);
                        printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_MOD2);
            
                        // Comparação de Cartas
                
                        printf("\n=== Comparação de Cartas: ===\n");
            
                        // Verificação do resultado da População
                        printf("\n=== População ===\n");
                        if (populacao_MOD1 != populacao_MOD2)
                        {
                            if (populacao_MOD1 > populacao_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                        {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        }
                    
                
                
                        // Verificação do resultado da Densidade Populacional
                        printf("\n=== Densidade Populacional ===\n");
                        if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
                        {
                            if (densidade_populacional_MOD1 > densidade_populacional_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                        {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        } 
                            break;
                        
                        case 2:
                
                        printf("Area(Em Km²): \n");
                        scanf("%f", &area_MOD1);
            
                        // Limpar o buffer de entrada após todos os dados da primeira carta
            
                        scanf("%c", &buffer);
                
                        // Cadastro da Carta 2
            
                        printf("\n=== Cadastro de Carta 2 ===\n");
                        printf("\nEstado (letra de A a H): \n");
                        scanf("%c", &estado_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
                        scanf("%3s", codigo_da_carta_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Nome da Cidade: \n");
                        scanf("%[^\n]", nome_da_cidade_MOD2);
                
                        printf("População (em habitantes): \n");
                        scanf("%u", &populacao_MOD2);
                
                        printf("Area(Em Km²): \n");
                        scanf("%f", &area_MOD2);
            
                        // Exibição dos dados da Carta 1
            
                        printf("\n=== Carta 1 ===\n");
                        printf("Estado: %c\n", estado_MOD1);
                        printf("Código: %s\n", codigo_da_carta_MOD1);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
                        printf("População: %u habitantes\n", populacao_MOD1);
                        printf("Area: %.2f Km²\n", area_MOD1);
                        printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_MOD1);
            
                        // Exibição dos dados da Carta 2
            
                        printf("\n=== Carta 2 ===\n");
                        printf("Estado: %c\n", estado_MOD2);
                        printf("Código: %s\n", codigo_da_carta_MOD2);
                        printf("População: %u habitantes\n", populacao_MOD2);
                        printf("Area: %.2f Km²\n", area_MOD2);
                        printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_MOD2);
            
                        // Comparação de Cartas
                
                        printf("\n=== Comparação de Cartas: ===\n");
            
                        // Verificação do resultado da Area
                        printf("\n=== Area ===\n");
                        if (area_MOD1 != area_MOD2)
                        {
                            if (area_MOD1 > area_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                        {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        }
                    
                
                
                        // Verificação do resultado da Densidade Populacional
                        printf("\n=== Densidade Populacional ===\n");
                        if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
                        {
                            if (densidade_populacional_MOD1 > densidade_populacional_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                        {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        } 
                            break;
                        
                        case 3:
                        
                        printf("Area(Em Km²): \n");
                        scanf("%f", &area_MOD1);

                        printf("PIB(Em Bilhões de reais): \n");
                        scanf("%d", &pib_MOD1);
            
                        // Limpar o buffer de entrada após todos os dados da primeira carta
            
                        scanf("%c", &buffer);
                
                        // Cadastro da Carta 2
            
                        printf("\n=== Cadastro de Carta 2 ===\n");
                        printf("\nEstado (letra de A a H): \n");
                        scanf("%c", &estado_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
                        scanf("%3s", codigo_da_carta_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Nome da Cidade: \n");
                        scanf("%[^\n]", nome_da_cidade_MOD2);
            
                        printf("População(Em habitantes): \n");
                        scanf("%u", populacao_MOD2);

                        printf("Area(Em Km²): \n");
                        scanf("%f", &area_MOD2);

                        printf("PIB(Em Bilhões de reais): \n");
                        scanf("%d", &pib_MOD2);
                
            
                        // Exibição dos dados da Carta 1
            
                        printf("\n=== Carta 1 ===\n");
                        printf("Estado: %c\n", estado_MOD1);
                        printf("Código: %s\n", codigo_da_carta_MOD1);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
                        printf("População: %u habitantes\n", populacao_MOD1);
                        printf("Area: %.2f Km²\n", area_MOD1);
                        printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);
                        printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_MOD1);
            
                        // Exibição dos dados da Carta 2
            
                        printf("\n=== Carta 2 ===\n");
                        printf("Estado: %c\n", estado_MOD2);
                        printf("Código: %s\n", codigo_da_carta_MOD2);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
                        printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);
                        printf("Pontos Turísticos: %.2f \n", pontos_turisticos_MOD2);
                        printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_MOD2);
            
                        // Comparação de Cartas
                
                        printf("\n=== Comparação de Cartas: ===\n");
            
                        // Verificação do resultado do PIB
                        printf("\n=== PIB ===\n");
                        if (pib_MOD1 != pib_MOD2)
                        {
                            if (pib_MOD1 > pib_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                        {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        }
                    
                
                
                        // Verificação do resultado da Densidade Populacional
                        printf("\n=== Densidade Populacional ===\n");
                        if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
                        {
                            if (densidade_populacional_MOD1 > densidade_populacional_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                        {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        } 
                            break;
            
                        case 4:

                        printf("Area(Em Km²): \n");
                        scanf("%.2f", area_MOD1);

                        printf("Número de Pontos Turísticos: \n");
                        printf("%d", pontos_turisticos_MOD1);

                        // Limpar o buffer de entrada após todos os dados da primeira carta
            
                        scanf("%c", &buffer);
                
                        // Cadastro da Carta 2
            
                        printf("\n=== Cadastro de Carta 2 ===\n");
                        printf("\nEstado (letra de A a H): \n");
                        scanf("%c", &estado_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
                        scanf("%3s", codigo_da_carta_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Nome da Cidade: \n");
                        scanf("%[^\n]", nome_da_cidade_MOD2);

                        printf("População (em habitantes): \n");
                        scanf("%u", &populacao_MOD2);

                        printf("Área (em km²): \n");
                        scanf("%f", &area_MOD2);
                
                        printf("Número de Pontos Turísticos: \n");
                        scanf("%d", pontos_turisticos_MOD2);
                        
                        // Cálculo para a Carta 1
            
                        densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²
            
                        // Cálculo para a Carta 2
            
                        densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²
            
                        // Exibição dos dados da Carta 1
            
                        printf("\n=== Carta 1 ===\n");
                        printf("Estado: %c\n", estado_MOD1);
                        printf("Código: %s\n", codigo_da_carta_MOD1);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
                        printf("População: %u habitantes\n", populacao_MOD1);
                        printf("Área: %.2f km²\n", area_MOD1);
                        printf("Pontos Turísticos: %d\n", pontos_turisticos_MOD1);
                        printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD1);
            
                        // Exibição dos dados da Carta 2
            
                        printf("\n=== Carta 2 ===\n");
                        printf("Estado: %c\n", estado_MOD2);
                        printf("Código: %s\n", codigo_da_carta_MOD2);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
                        printf("População: %u habitantes\n", populacao_MOD2);
                        printf("Pontos Turísticos: %d\n", pontos_turisticos_MOD2);
                        printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD2);
            
                        // Comparação de Cartas
                
                        printf("\n=== Comparação de Cartas: ===\n");
            
            
                        // Verificação do resultado dos Pontos Turísticos
                        printf("\n=== Pontos Turísticos ===\n");
                        if (pontos_turisticos_MOD1 != pontos_turisticos_MOD2)
                        {
                            if (pontos_turisticos_MOD1 > pontos_turisticos_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                          {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                          } 
            
                          // Verificação do resultado da Densidade populacional
                          printf("\n=== Densidade Populacional ===\n");
                        if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
                        {
                            if (densidade_populacional_MOD1 < densidade_populacional_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                          {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        }
                        
                        case 6:
            
                        printf("Área (em km²): \n");
                        scanf("%f", &area_MOD1);
            
                        printf("PIB (em Bilhões): \n");
                        scanf("%f", &pib_MOD1);
            
            
                        // Limpar o buffer de entrada após todos os dados da primeira carta
            
                        scanf("%c", &buffer);
                
                        // Cadastro da Carta 2
            
                        printf("\n=== Cadastro de Carta 2 ===\n");
                        printf("\nEstado (letra de A a H): \n");
                        scanf("%c", &estado_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
                        scanf("%3s", codigo_da_carta_MOD2);
                
                        // Limpar o buffer de entrada
            
                        scanf("%c", &buffer);
                
                        printf("Nome da Cidade: \n");
                        scanf("%[^\n]", nome_da_cidade_MOD2);
                
                        printf("População(Em habitantes): \n");
                        scanf("%u", &populacao_MOD2);

                        printf("Área (em km²): \n");
                        scanf("%f", &area_MOD2);
            
                        printf("PIB (em Bilhões): \n");
                        scanf("%f", &pib_MOD2);
            
                        // Cálculo para a Carta 1
            
                        pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Reais/hab
            
                        // Cálculo para a Carta 2
            
                        pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Reais/hab
            
                        // Cálculo para a Carta 1
            
                        densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²
            
                        // Cálculo para a Carta 2
            
                        densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²
            
                        // Exibição dos dados da Carta 1
            
                        printf("\n=== Carta 1 ===\n");
                        printf("Estado: %c\n", estado_MOD1);
                        printf("Código: %s\n", codigo_da_carta_MOD1);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
                        printf("População: %u Habitantes\n", populacao_MOD1);
                        printf("PIB: %.2f Bilhões\n", pib_MOD1);
                        printf("Area: %.2f Km²\n", area_MOD1);
                        printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD1);
                        printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD1);
            
                        // Exibição dos dados da Carta 2
            
                        printf("\n=== Carta 2 ===\n");
                        printf("Estado: %c\n", estado_MOD2);
                        printf("Código: %s\n", codigo_da_carta_MOD2);
                        printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
                        printf("População: %u Habitantes\n", populacao_MOD2);
                        printf("PIB: %.2f Bilhões\n", pib_MOD2);
                        printf("Area: %.2f Km²\n", area_MOD2);
                        printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD2);
                        printf("PIB per capita : %.2f reais\n", pib_per_capita_MOD2);
            
                        // Comparação de Cartas
                
                        printf("\n=== Comparação de Cartas: ===\n");
            
                        // Verificação do resultado da Densidade populacional
                        printf("\n=== Densidade populacional ===\n");
                        if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
                        {
                            if (densidade_populacional_MOD1 > densidade_populacional_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                        {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        }
                        // Verificação do resultado do PIB per capita
                          printf("\n=== PIB per capita ===\n");
                        if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
                        {
                            if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                            }
                            else
                            {
                                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                                printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                            }
                        }
                        else
                          {
                            printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                            printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
                        }
                        }
            break;
        case 6:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade populacional\n");
            printf("2º atributo : ");
            scanf("%d", &opcao_MOD2);
            if(opcao_MOD2 == 6) {
                printf("Erro: Você já escolheu o atributo 'PIB per capita'. Escolha outro.\n");
                scanf("\n %d", &opcao_MOD2);
            }

            // Cadastro da Carta 1

            printf("\n=== Cadastro de Carta 1 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD1);
    
            // Limpar o buffer de entrada após a leitura do caractere

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: A01): \n");
            scanf("%3s", codigo_da_carta_MOD1);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD1);

            printf("Area(Em Km²): \n");
            scanf("%f", &area_MOD1);

            printf("PIB(Em bilhões de reais): \n");
            scanf("%f", pib_MOD1);

            switch (opcao_MOD2)
            {
            case 1:
            printf("População (em habitantes): \n");
            scanf("%f", &populacao_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);

            printf("Area(Em Km²): \n");
            scanf("%f", &area_MOD2);

            printf("PIB(Em bilhões de reais): \n");
            scanf("%f", pib_MOD2);
    
            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);

            // Cálculo para a Carta 1
            
            pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Reais/hab
            
            // Cálculo para a Carta 2

            pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Reais/hab

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Area: %.2f Km²\n", area_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da População
            printf("\n=== População ===\n");
            if (populacao_MOD1 != populacao_MOD2)
            {
                if (populacao_MOD1 > populacao_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado do PIB per capita
            printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 2:

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);
    
            printf("Area(Em Km²): \n");
            scanf("%f", &area_MOD2);

            printf("PIB(Em bilhões de reais): \n");
            scanf("%f", pib_MOD2);

            // Cálculo para a Carta 1
            
            pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Reais/hab
            
            // Cálculo para a Carta 2

            pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Reais/hab

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("Area: %.2f Km²\n", area_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado da Area
            printf("\n=== Area ===\n");
            if (area_MOD1 != area_MOD2)
            {
                if (area_MOD1 > area_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado do PIB per capita
            printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;
            
            case 3:

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);

            printf("Area(Em Km²): \n");
            scanf("%f", &area_MOD2);

            printf("PIB(Em bilhões de reais): \n");
            scanf("%f", pib_MOD2);
    
            // Cálculo para a Carta 1
            
            pib_per_capita_MOD1 = populacao_MOD1 / pib_MOD1;                                   // Reais/hab
            
            // Cálculo para a Carta 2

            pib_per_capita_MOD2 = populacao_MOD2 / pib_MOD2;                               // Reais/hab

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("Area: %.2f Km²\n", area_MOD1);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD1);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("Area: %.2f Km²\n", area_MOD2);
            printf("PIB: %.2f Bilhões de reais\n", pib_MOD2);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");

            // Verificação do resultado do PIB
            printf("\n=== PIB ===\n");
            if (pib_MOD1 != pib_MOD2)
            {
                if (pib_MOD1 > pib_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        
    
    
            // Verificação do resultado do PIB per capita
            printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 > pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
            {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            } 
                break;

            case 5:

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD1);

            // Limpar o buffer de entrada após todos os dados da primeira carta

            scanf("%c", &buffer);
    
            // Cadastro da Carta 2

            printf("\n=== Cadastro de Carta 2 ===\n");
            printf("\nEstado (letra de A a H): \n");
            scanf("%c", &estado_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Código da Carta (letra do estado seguida de 01 a 04, exemplo: B02): \n");
            scanf("%3s", codigo_da_carta_MOD2);
    
            // Limpar o buffer de entrada

            scanf("%c", &buffer);
    
            printf("Nome da Cidade: \n");
            scanf("%[^\n]", nome_da_cidade_MOD2);
    
            printf("Área (em km²): \n");
            scanf("%f", &area_MOD2);

            printf("População (em habitantes): \n");
            scanf("%u", &populacao_MOD2);

            printf("PIB(Em bilhões de reais): \n");
            scanf("%f", pib_MOD2);

            // Cálculo para a Carta 1

            densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²

            // Cálculo para a Carta 2

            densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²

            // Cálculo para a Carta 1
            
            densidade_populacional_MOD1 = populacao_MOD1 / area_MOD1;                                   // Habitantes por km²
            
            // Cálculo para a Carta 2

            densidade_populacional_MOD2 = populacao_MOD2 / area_MOD2;                               // Habitantes por km²

            // Exibição dos dados da Carta 1

            printf("\n=== Carta 1 ===\n");
            printf("Estado: %c\n", estado_MOD1);
            printf("Código: %s\n", codigo_da_carta_MOD1);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD1);
            printf("População: %u habitantes\n", populacao_MOD1);
            printf("Área: %.2f km²\n", area_MOD1);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD1);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD1);

            // Exibição dos dados da Carta 2

            printf("\n=== Carta 2 ===\n");
            printf("Estado: %c\n", estado_MOD2);
            printf("Código: %s\n", codigo_da_carta_MOD2);
            printf("Nome da Cidade: %s\n", nome_da_cidade_MOD2);
            printf("População: %u habitantes\n", populacao_MOD2);
            printf("Área: %.2f km²\n", area_MOD2);
            printf("PIB per capita: %.2f Reais", pib_per_capita_MOD2);
            printf("Densidade populacional : %.2f hab/Km²\n", densidade_populacional_MOD2);

            // Comparação de Cartas
    
            printf("\n=== Comparação de Cartas: ===\n");


            // Verificação do resultado da Densidade Populacional
            printf("\n=== Densidade Populacional ===\n");
            if (densidade_populacional_MOD1 != densidade_populacional_MOD2)
            {
                if (densidade_populacional_MOD1 < densidade_populacional_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
              } 

              // Verificação do resultado do PIB per capita
              printf("\n=== PIB per capita ===\n");
            if (pib_per_capita_MOD1 != pib_per_capita_MOD2)
            {
                if (pib_per_capita_MOD1 < pib_per_capita_MOD2)
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_MOD1);
                }
                else
                {
                    printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                    printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_MOD2);
                }
            }
            else
              {
                printf("\nCarta 1 - %s\n", nome_da_cidade_MOD1);
                printf("Carta 2 - %s\n", nome_da_cidade_MOD2);
                printf("Resultado: Carta 1 (%s) e Carta 2 (%s) empataram!\n", nome_da_cidade_MOD1, nome_da_cidade_MOD2);
            }
        }
    }
    // Volta para o menu principal
    printf("\nTecle 1 para voltar ao munu principal: ");
    scanf("%d", &opcao);
        break;

    case 3: // Menu das regras do jogo

    printf("\n=== Regras ===\n");
    printf("\nRegra 1: Para o 'Estado', digite somente letras de A a H, sendo letras maiúsculas\n");
    printf("Regra 2: Para o 'Código da Cidade', escreva a letra do 'Estado' + '0' + número de 1 a 4\n");
    printf("Regra 3: Para a 'População', escreva a quantidade exata da população. Ex: 2486570\n");
    printf("Regra 4: Para a 'Area', digite como se fosse em km². Ex: 245 km². NÃO É NECESSÁRIO ESCREVER 'KM²'\n");
    printf("Regra 5: Para o 'PIB', digite como se fosse em bilhões. Ex: 245 bilhões. NÃO É NECESSÁRIO ESCREVER 'bilhões'\n");
    printf("Regra 6: Ao final do jogo, vence a carta com mais ganhos\n");
    printf("Regra 7: Para sua carta obter um 'ganho', precisará ter algum aspecto(como população, PIB...) maior que a carta adversária\n");
    printf("Regra 8: Para obter 'ganho' no aspecto 'Densidade populacional', a sua densidade deverá ser menor que a do adversário\n");
    printf("Regra 9: Após escrever o critério para os aspectos, SEMPRE pressione ENTER\n");
    // Fim do munu das regras do jogo
    // Volta para o menu principal
    printf("\nTecle 1 para voltar ao munu principal: ");
    scanf("%d", &opcao);
        break;

    case 4: // Menu sobre o jogo

    printf("\n === Sobre o Jogo ===\n");
    printf("\n- É um jogo estilo batalha de cartas\n");
    printf("- Vence quem tiver mais 'ganhos'\n");
    printf("- São apresentadas duas cartas, onde deverá ser inserido seus critérios(como números, letras ou nomes) em seus respectivos aspectos(População, Estado...)\n");
    // Fim do menu sobre o jogo
    // Volta para o menu principal
    printf("\nTecle 1 para voltar ao munu principal: ");
    scanf("%d", &opcao);
        break;
        
    }
}
}