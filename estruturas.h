#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

// FUNCIONARIO
typedef struct funcionario{
    int ID_funcionario;
    char nome[100];
    char funcao[50];
    char descricao[200];
} Funcionario;

// EMPRESA
typedef struct empresa{
    int ID_empresa;
    char nome[100];
    char tipo[50];
    char contacto[100];
} Empresa;

// POSTO
typedef struct posto_trabalho{
    int ID_posto;
    char nome[50];
    char localizacao[100];
    char seccao[50];
    char descricao[200];
    int ID_funcionario;
} Posto;

// COMPONENTE
typedef struct componente {
    int ID_produto;
    char descricao[100];
    char numero_serie[20];
    char data_aquisicao[11];
    int garantia;
    int ID_fornecedor;
    int ID_fabricante;
    char tipo[50];
    int condicao; // 0=Novo, 1=Utilizdo
    int ID_posto;
    char observacoes[200];
} Componente;

// OPERACOES
typedef struct operacoes{
    int ID_documento;
    int ID_interno;
    int ID_externo;
    int ID_empresa;
    int ID_funcionario;
    int ID_posto;
    int ID_produto;
    char tipo_operacao[50];
    char data_operacao[11];
    char data_saida[11];
    char data_chegada[11];
    char data_prevista[11];
    float montante;
    char descricao[200];
} Operacoes;

#endif