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

	int id;
	int nCount = 0;

	char c;
	char registro = '\n';
	char nome;
	char email;
	char celular;
	char gmailchar = "@gmail.com";
	char hotmailchar = "@hotmail.com";
	char outloo1char = "@outlook.com";
	char outlook2char = "@outlook.com.br";
	char yahoo1char = "@yahoo.com";
	char yahoo2char = "@yahoo.com.br";

	p_arq = fopen("agenda.txt", "a");

	while(fread (&c, sizeof(char), 1, p_arq)) {
        if(c == registro) {
           nCount++;
        }
    }

	id = nCount/4;

	printf("Nome:\n");
	scanf("%s", nome);

	printf("E-mail:\n");
	scanf("%s", email);

	while(strstr(email, gmailchar) == NULL || strstr(email, hotmailchar) == NULL || strstr(email, outloo1char) == NULL || strstr(email, outlook2char) == NULL|| strstr(email, yahoo1char) == NULL || strstr(email, yahoo2char) == NULL){
		printf("E-mail inválido!\nDigite um e-mail válido:\n")
		scanf("%s", email);
	}

	printf("Celular:");
	scanf("%s", celular);

	fputs(id, p_arq);
	fputs(id, p_arq);
	fputs(id, p_arq);
	fputs(id, p_arq);
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
