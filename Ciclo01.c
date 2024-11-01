#include <stdio.h>
#include <locale.h>


int main() {
    int necessidade_usuario, necessidade_tecnica;
    setlocale(LC_ALL, "Portuguese");

    printf("Vamos determinar a prioridade das necessidades do projeto com base no impacto para o usuário.\n");
    printf("OBS: A classificação de prioridade foca no Impacto no Usuário Final e na Viabilidade Técnica, concentrando-se em funcionalidades simples e essenciais para o uso inicial satisfatório pelos pecuaristas.\n");
    
    printf("Escolha uma necessidade para descobrir sua prioridade em relação ao impacto que terá para o usuário:\n");
    printf("1 - Registrar propriedades e rebanhos\n");
    printf("2 - Perfis detalhados\n");
    printf("3 - Notificações e alertas\n");
    printf("4 - Contagem e rastreamento de animais\n");
    printf("5 - Inserir dados financeiros\n");
    printf("6 - Controle de Compra e Venda\n");
    printf("7 - Contatos de lojas/trabalhadores/profissionais\n");
    printf("8 - Gestão de saúde e bem-estar\n");
    printf("9 - Relatórios e Análises\n");
    scanf("%d", &necessidade_usuario);

    printf("Agora, escolha uma necessidade para descobrir sua prioridade em relação à viabilidade técnica:\n");
    printf("1 - Gestão de Desempenho e Produtividade\n");
    printf("2 - Gestão de Movimentação de Animais\n");
    printf("3 - Integração com Dispositivos de Monitoramento\n");
    printf("4 - Previsão do Tempo\n");
    printf("5 - Navegação offline\n");
    printf("6 - Contato de Suporte\n");
    printf("7 - Compatibilidade com Navegadores\n");
    printf("8 - Backup e armazenamento\n");
    scanf("%d", &necessidade_tecnica);

    switch (necessidade_usuario) {
        case 1:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Registrar propriedades e rebanhos: ALTA.\n", necessidade_usuario);
            break;
        case 2:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Perfis detalhados: ALTA.\n", necessidade_usuario);
            break;
        case 3:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Notificações e alertas: MEDIA.\n", necessidade_usuario);
            break;
        case 4:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Contagem e rastreamento de animais: BAIXA.\n", necessidade_usuario);
            break;
        case 5:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Inserir dados financeiros: MEDIA.\n", necessidade_usuario);
            break;
        case 6:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Controle de Compra e Venda: ALTA.\n", necessidade_usuario);
            break;
        case 7:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Contatos de lojas/trabalhadores/profissionais: ALTA.\n", necessidade_usuario);
            break;
        case 8:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Gestão de saúde e bem-estar: BAIXA.\n", necessidade_usuario);
            break;
        case 9:
            printf("Impacto no Usuário Final: A prioridade do requisito %d - Relatórios e Análises: BAIXA.\n", necessidade_usuario);
            break;
        default:
            printf("Requisito não encontrado!!\n");
            break;
    }

    switch (necessidade_tecnica) {
        case 1:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Gestão de Desempenho e Produtividade: MEDIA.\n", necessidade_tecnica);
            break;
        case 2:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Gestão de Movimentação de Animais: BAIXA.\n", necessidade_tecnica);
            break;
        case 3:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Integração com Dispositivos de Monitoramento: MEDIA.\n", necessidade_tecnica);
            break;
        case 4:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Previsão do Tempo: MEDIA.\n", necessidade_tecnica);
            break;
        case 5:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Navegação offline: ALTA.\n", necessidade_tecnica);
            break;
        case 6:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Contato de Suporte: ALTA.\n", necessidade_tecnica);
            break;
        case 7:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Compatibilidade com Navegadores: ALTA.\n", necessidade_tecnica);
            break;
        case 8:
            printf("Viabilidade Técnica: A prioridade do requisito %d - Backup e armazenamento: MEDIA.\n", necessidade_tecnica);
            break;
        default:
            printf("Requisito não encontrado!!\n");
            break;
    }

    return 0;
}
