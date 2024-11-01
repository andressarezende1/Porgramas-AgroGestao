#include <stdio.h>

int main() {
    int progresso[6]; 
    int i;           

    char *etapas[6] = {
        "Análise de Requisitos",
        "Estudo de Viabilidade",
        "Design",
        "Codificação",
        "Teste",
        "Instalação"
    };

    while (1) {
        for (i = 0; i < 6; i++) {
            printf("Qual o progresso da etapa \"%s\" (0 a 100): ", etapas[i]);
            scanf("%d", &progresso[i]);

            while (progresso[i] < 0 || progresso[i] > 100) {
                printf("Por favor, insira um valor entre 0 e 100: ");
                scanf("%d", &progresso[i]);
            }
        }

        int todasConcluidas = 1; 
        for (i = 0; i < 6; i++) {
            if (progresso[i] < 100) {
                todasConcluidas = 0; 
                break; 
            }
        }

        if (todasConcluidas) {
            break; 
        } else {
            printf("Nem todas as etapas estão concluídas. Vamos tentar novamente.\n");
        }
    }

    printf("\nResumo do progresso das etapas:\n");
    for (i = 0; i < 6; i++) {
        printf("%s: %d%%\n", etapas[i], progresso[i]);
    }

    printf("Todas as etapas concluídas! Software desenvolvido 100%%.\n");
    return 0;
}
