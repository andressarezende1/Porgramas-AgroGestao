#include <stdio.h>
#include <locale.h>

int main() {
    int progresso[6]; 
    int i, A;     

    setlocale(LC_ALL, "Portuguese");   

    char *etapas[6] = {
        "Analise de Requisitos",
        "Estudo de Viabilidade",
        "Design",
        "Codificacao",
        "Teste",
        "Instalacao"
    };

    char *aspectos[6][6] = {
        {
            "Levantamento de requisitos",
            "Analise de stakeholders",
            "Especificacao de requisitos",
            "Priorizacao de requisitos",
            "Validacao e verificacao de requisitos",
            "Acompanhamento e gerenciamento de mudancas"
        },

        {
            "Viabilidade técnica",
            "Viabilidade econômica",
            "Viabilidade operacional",
            "Viabilidade legal",
            "Viabilidade temporal",
            "Relatorios"
        },

        {
            "Design de interface",
            "Design de componentes",
            "Design arquitetural",
            "Design de seguranca",
            "Prototipacao",
            "Feedback dos clientes"
        },

        {
            "Desenvolvimento de funcionalidades",
            "Escolha de linguagens e ferramentas",
            "Controle de versionamento",
            "Segurança no codigo",
            "Testes unitarios",
            "Relatorio"
        },

        {
            "Testes funcionais",
            "Testes não funcionais",
            "Testes de integracao",
            "Testes de sistema",
            "Testes de aceitacao",
            "Correcao de erros"
        },

        {
            "Planejamento de implantacao",
            "Configuracao do ambiente",
            "Treinamento de usuarios",
            "Documentacao",
            "Monitoramento pos-instalacao",
            "Suporte pos-implantacao"
        }
    };

    for (i = 0; i < 6; i++) {
        int aspectosConcluidos = 0;  
        int totalAspectos = 0;      

        printf("\nAspectos para a etapa \"%s\":\n", etapas[i]);
        for (A = 0; A < 6; A++) {
            if (aspectos[i][A][0] != '\0') {  
                totalAspectos++;  
                int resposta;
                printf("- %s: Foi concluido? (1 para Sim, 0 para Não): ", aspectos[i][A]);
                scanf("%d", &resposta);

                if (resposta == 1) {
                    aspectosConcluidos++;  
                }
            }
        }

        if (totalAspectos > 0) {
            progresso[i] = (aspectosConcluidos * 100) / totalAspectos;
        } else {
            progresso[i] = 0;
        }
    }

    printf("\nResumo do progresso das etapas:\n");
    int todasConcluidas = 1;  
    for (i = 0; i < 6; i++) {
        if (progresso[i] == 100) {
            printf("%s: %d%% - Concluida\n", etapas[i], progresso[i]);
        } else {
            printf("%s: %d%% - Nao concluida\n", etapas[i], progresso[i]);
            todasConcluidas = 0;  
        }
    }

    if (todasConcluidas) {
        printf("\nTodas as etapas foram concluidas!\n");
    } else {
        printf("\nNem todas as etapas foram concluidas!\n");
    }

    return 0;
}
