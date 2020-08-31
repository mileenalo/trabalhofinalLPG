#include <stdio.h>

fIncluir();
fExcluir();
fAlterar();
fListar();

int main(){

	int nOpc = 0;
    char cResult = "";

	printf("*****AGENDA DE CONTATOS*****");
	printf("SELECIONE UMA DAS OPÇÕES:\n");
	printf("1 - Incluir um novo contato \n2 - Alterar um contato existente \n3 - Excluir um contato existente \n4 - Listar todos os contatos \n5 - Encerrar agenda\n");
	scanf("%d", &nOpc);

	switch(nOpc){
		case 1:
			cResult = fIncluir();
		break;
		case 2:
			cResult = fAlterar();
		break;
		case 3:
			cResult = fExcluir();
		break;
		case 4:
			cResult = fListar();
		break;
		case 5:
			printf("Agenda encerrada!\nPrograma finalizado!");
		break;
		default:
			printf("Valor inválido!\n");
			main();
		break;
	}
return 0;
}

/**************************************************
| Função de Inclusão de um novo contato na agenda |
| 31/08/2020									  |
|**************************************************/
fIncluir(){

	FILE p_arq*;

	p_arq = fopen("agenda.txt", "a");

	fclose(p_arq);

return printf("Teste de incluir");
}
/***************************************************
| Função de Alteração de um contato da agenda      |
| 31/08/2020									   |
|***************************************************/
fAlterar(){

return printf("Teste de alterar");
}
/**************************************************
| Função de Exclusão de um contato da agenda      |
| 31/08/2020									  |
|**************************************************/
fExcluir(){

return printf("Teste de excluir");
}
/**************************************************
| Função de Listar os contatos da agenda          |
| 31/08/2020									  |
|**************************************************/
fListar(){

return printf("Teste de listar");
}
