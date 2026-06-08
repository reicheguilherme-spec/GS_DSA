#include <stdio.h>

int main() {

    float temperatura;
    float energia;
    int comunicacao;
    int opcao;
    int rodando = 1;

    printf("=================================\n");
    printf("  BEM VINDO AO SISTEMA DE MISSAO \n");
    printf("=================================\n");

    while (rodando) {

        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1 - Inserir dados\n");
        printf("2 - Visualizar status\n");
        printf("3 - Executar analise\n");
        printf("4 - Encerrar sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\n-- INSERIR DADOS --\n");
                printf("Temperatura da nave (graus): ");
                scanf("%f", &temperatura);
                printf("Nivel de energia (0 a 100): ");
                scanf("%f", &energia);
                printf("Comunicação (1=OK  0=Falha): ");
                scanf("%d", &comunicacao);
                printf("Dados registrados com sucesso!\n");
                break;

            case 2:
                printf("\n-- STATUS DA MISSAO --\n");
                printf("Temperatura : %.1f graus\n", temperatura);
                printf("Energia     : %.1f%%\n", energia);
                if (comunicacao == 1) {
                    printf("Comunicacao : OK\n");
                } else {
                    printf("Comunicacao : FALHA\n");
                }
                break;

            case 3:
                printf("\n-- ANALISE DO SISTEMA --\n");
                if (temperatura > 80) {
                    printf("[!] ALERTA: Superaquecimento detectado!\n");
                }
                if (energia < 20) {
                    printf("[!] ALERTA: Energia critica!\n");
                }
                if (comunicacao == 0) {
                    printf("[!] ALERTA: Falha de comunicacao!\n");
                }
                if (temperatura <= 80 && energia >= 20 && comunicacao == 1) {
                    printf("[OK] Todos os sistemas normais.\n");
                }
                break;

            case 4:
                printf("Encerrando sistema. Ate logo!\n");
                rodando = 0;
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}