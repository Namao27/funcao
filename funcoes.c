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

//- Postos
Posto posto[MAX];
int totalPosto = 0;

//- Componentes
Componente componente[MAX];
int totalComponente = 0;

//- Operacoes
Operacoes operacao[MAX];
int totalOperacao = 0;


void inserirFuncionario(){
    if (totalFuncionario >= MAX) {
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