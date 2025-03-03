#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1

    char estado1;
    char codigo_da_carta1[4]; // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade1[50];
    unsigned long int populacao1; //Nova variável pra maiores valores
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // Nova variável para densidade populacional
    float pib_per_capita1;         // Nova variável para PIB per capita

    // Declaração de variáveis para a Carta 2

    char estado2;
    char codigo_da_carta2[4]; // Aumentado para 4 para acomodar o caractere nulo
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2; // Nova variável para densidade populacional
    float pib_per_capita2;         // Nova variável para PIB per capita

    // Declaração de variáveis para armazenar os resultados das comparações

    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade;
    int resultado_pib_per_capita;

    // Buffer para limpar o stdin

    char buffer;

    // Variável para as opções do menu principal

    int opcao;

    // Início do menu interativo
while (1)//loop infinito
{
    printf("=== Bem vindo ao Super Trunfo!! ===\n");
printf("\nVeja as opções e escolha uma delas no final\n");
printf("\n1. Iniciar o jogo\n");
printf("2. Ver as Regras\n");
printf("3. Sobre o jogo\n");
printf("\nAgora escolha uma opção(1, 2 ou 3):");
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

    case 2:// Menu das regras do jogo

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

    case 3: // Menu sobre o jogo

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