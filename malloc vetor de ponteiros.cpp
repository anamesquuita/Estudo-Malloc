#include <stdio.h>
#include <stdlib.h>

 typedef struct {
    char nome[100];
    int idade;
    float salario;
} funcionario;

void guardarfuncionario(funcionario **funcionarios, int n);
void exibirfuncionario(funcionario **funcionarios, int n);

int main(){
	int n;
	funcionario **funcionarios;
	
	printf("Digite o numero de funcionarios: ");
	scanf("%d", &n);
	
	funcionarios=(funcionario**)malloc(n*sizeof(funcionario*));
	
	for(int i=0; i<n; i++){
		funcionarios[i]=(funcionario*)malloc(sizeof(funcionario));
	}
	
	
	guardarfuncionario(funcionarios, n);
	exibirfuncionario(funcionarios, n);
	getchar();
}

 void guardarfuncionario(funcionario **funcionarios, int n){
 	for(int i=0; i<n; i++){
 	printf("Funcionario %d:\n ", i+1);
 	printf("Nome: ");
 	getchar();
 	fgets(funcionarios[i]->nome, sizeof(funcionarios[i]->nome), stdin);
 	printf("Idade: ");
 	scanf("%d", &funcionarios[i]->idade);
	printf("Salario: ");
	scanf("%f", &funcionarios[i]->salario);
	printf("Cadastro do funcionario %d concluido com sucesso!\n\n", i+1);
	getchar();
 }
 }
 
 void exibirfuncionario(funcionario **funcionarios, int n){
 		for(int i=0; i<n; i++){
 			printf("Exibindo funcionarios cadastrados...\nFuncionario %d\nNome: %sIdade: %d\nSalario: %.2f\n\n", i+1, funcionarios[i]->nome, funcionarios[i]->idade, funcionarios[i]->salario);
		 }
 	
 }
