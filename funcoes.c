#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estruturas.h"
#define MAX 30

// Variáveis globais 
//Empresas
Empresa empresa[MAX];
int totalEmpresa = 0;

// Funcionarios
Funcionario funcionario[MAX];
int totalFuncionario = 0;

// Postos
Posto posto[MAX];
int totalPosto = 0;

// Componentes
Componente componente[MAX];
int totalComponente = 0;

// Operacoes
Operacoes operacao[MAX];
int totalOperacao = 0;

void inserirFuncionario(){
    if (totalFuncionario > MAX) {
        printf("Limite de funcionarios atingido!\n");
        return;
    }
 
    Funcionario *f = &funcionario[totalFuncionario];
    printf("ID: ");
    scanf("%d", &f->ID_funcionario);
 
    for (int i = 0; i < totalFuncionario; i++) {
        if (funcionario[i].ID_funcionario == f->ID_funcionario) {
            printf("Funcionario com este ID ja existe!\n");
            return;
        }
    }
    
    printf("Nome: ");
    scanf(" %[^\n]", f->nome);
    printf("Funcao: ");
    scanf(" %[^\n]", f->funcao);
    printf("Descricao: ");
    scanf(" %[^\n]", f->descricao);
    
    totalFuncionario++;
    printf("Funcionario inserido com sucesso!\n");
}

void inserirEmpresa(){
    if (totalEmpresa > MAX) {
        printf("Limite de empresas atingido!\n");
        return;
    }
    
    Empresa *e = &empresa[totalEmpresa];
    printf("ID: ");
    scanf("%d", &e->ID_empresa);
    
    for (int i = 0; i < totalEmpresa; i++) {
        if (empresa[i].ID_empresa == e->ID_empresa) {
            printf("Empresa com este ID ja existe!\n");
            return;
        }
    }

    printf("Nome: ");
    scanf(" %[^\n]", e->nome);
    printf("Tipo (Fornecedor/Fabricante/Reciclagem/Agencia): ");
    scanf(" %[^\n]", e->tipo);
    printf("Contacto: ");
    scanf(" %[^\n]", e->contacto);
    
    totalEmpresa++;
    printf("Empresa inserida com sucesso!\n");
}

void inserirPosto(){
    if (totalPosto > MAX) {
        printf("Limite de postos atingido!\n");
        return;
    }
    
    Posto *p = &posto[totalPosto];
    printf("ID: "); 
    scanf("%d", &p->ID_posto);
    
    for (int i = 0; i < totalPosto; i++) {
        if (posto[i].ID_posto == p->ID_posto) {
            printf("Posto com este ID ja existe!\n");
            return;
        }
    }
    
    printf("Nome: ");
    scanf(" %[^\n]", p->nome);
    printf("Localizacao: ");
    scanf(" %[^\n]", p->localizacao);
    printf("Seccao: ");
    scanf(" %[^\n]", p->seccao);
    printf("Descricao: ");
    scanf(" %[^\n]", p->descricao);
    printf("ID_funcionario: ");
    scanf("%d", &p->ID_funcionario);
    
    totalPosto++;
    printf("Posto inserido com sucesso!\n");
}

void inserirComponente() {
    if (totalComponente > MAX) {
        printf("Limite de componentes atingido!\n");
        return;
    }
    
    Componente *c = &componente[totalComponente];
    printf("ID: "); 
    scanf("%d", &c->ID_produto);
    
    for (int i = 0; i < totalComponente; i++) {
        if (componente[i].ID_produto == c->ID_produto) {
            printf("Componente com este ID ja existe!\n");
            return;
        }
    }
    
    printf("Descricao: ");
    scanf(" %[^\n]", c->descricao);
    printf("Numero_serie: ");
    scanf(" %[^\n]", c->numero_serie);
    printf("Data_aquisicao (DD/MM/YYYY): ");
    scanf(" %[^\n]", c->data_aquisicao);
    printf("Garantia (meses): ");
    scanf("%d", &c->garantia);
    printf("ID_fornecedor: ");
    scanf("%d", &c->ID_fornecedor);
    printf("ID_fabricante: ");
    scanf("%d", &c->ID_fabricante);
    printf("Tipo: ");
    scanf(" %[^\n]", c->tipo);
    printf("Condicao (0=Novo,1=Utilizado): ");
    scanf("%d", &c->condicao);
    printf("ID_posto: ");
    scanf("%d", &c->ID_posto);
    printf("Observacoes: ");
    scanf(" %[^\n]", c->observacoes);
    
    totalComponente++;
    printf("Componente inserido com sucesso!\n");
    }

    void inserirOperacao() {
    if (totalOperacao > MAX) { 
        printf("Limite de operacoes atingido!\n");
        return;
    }
    Componente *c = &componente[totalComponente];
    printf("ID: ");
    scanf("%d", &c->ID_produto);
    for (int i = 0; i < totalComponente; i++) {
        if (componente[i].ID_produto == c->ID_produto) {
            printf("Operacao com este ID ja existe!\n");

            
                                                                                                                                                                                                                                                                                                                                                                                                                                                                
            return;
       
        }
    }
