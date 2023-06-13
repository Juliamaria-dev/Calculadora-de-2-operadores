#include <stdio.h> //biblioteca
#include <stdlib.h> //biblioteca

/*Exerc�cio:Fa�a uma calculadora b�sica com quatro opera��es 
(adi��o,subtra��o,multiplica��o e divis�o)*/

void soma(){ //fun��o de soma
	float valor1, valor2, result; //declarando as vari�veis 
	
	printf("\nDigite o primeiro valor: \n"); //pedindo um valor ao usu�rio
	scanf("%f",&valor1); //armazenando o primeiro valor
	
	printf("\nDigite o segundo valor: \n"); //pedindo outro valor ao usu�rio
	scanf("%f",&valor2); //armazenando o segundo valor em um float
	
	result = valor1+valor2; //opera��o de soma 2 valores 
	printf("\nResultado: %.2f\n\n", result); //apresenta o resultado da opera��o de soma
	system("pause"); //pausa 
	system("cls"); //limpa a tela do usu�rio 
	menu(); //chama o menu novamente
}
void subtrai(){ //fun��o de subtra��o
     float valor1, valor2, resultado; //declarando as vari�veis
     printf("\nDigite o primeiro valor: \n"); //pedindo o primeiro valor ao usu�rio
     scanf("%f",&valor1); //armazena o valor na vari�vel
     printf("\nDigite o segundo valor: \n"); //pedindo o segundo valor ao usu�rio
     scanf("%f",&valor2); //armazena segundo valor na vari�vel 
     result = valor1 - valor2; //opera��o de subtra��o de 2 valores
     printf("\nResultado: %.2f\n\n",result); //apresenta o resultado ao usu�rio
     system("pause"); //pausa
     system("cls") //limpa a tela
     menu(); //chama o menu novamente
}
void divide(){ //fun��o de divis�o 
     float valor1,valor2,result;
     printf("\nDigite o primeiro valor: ");
     scanf("%f",&valor1);
     printf("\nDigite o segundo valor: ");
     scanf("%f",&valor2);
     result = valor1/valor2;
     printf("\nResultado: %.2f\n\n",result);
     system("pause");
     system("cls");
     menu();
}
void multiplica(){ //fun��o de multiplica��o
     float valor1,valor2,result;
     printf("\nDigite o primeiro valor: ");
     scanf("%f",&valor1);
     printf("\nDigite o segundo valor: ");
     scanf("%f",&valor2);
     result = valor1 * valor2;
     printf("\nResultado: %.2f\n\n",result);
     system("pause");
     system("cls");
     menu()
}
void menu(){ //in�cio do menu
	int escolha; //determinando fun��o de vari�vel inteira
	
	printf("/t/tBem vinde a calculadora em C\n\n"); //imprimindo mensagem na tela com /n = saltar linhas
	
	printf("\nSelecione uma opera��o matematica:\n"); 
	printf("\t1 - Adicao\n");
	printf("\t2 - Subtracao\n");
	printf("\t3 - Divisao\n");
	printf("\t4 - Multiplicacao\n");
	printf("\t5 - Sair do sistema\n");
	scanf("%d",&escolha); //armazenando a escolha desejada - int
	
	switch(escolha){ //fun��o de sele��o de escolha do menu
	
	case 1: //caso digitado 1 execute isso:
	soma(); //fun��o de soma efetuada acima
	break; //termino da fun��o de soma
	
	
	case 2: //caso digitado 2 execute isso: 
	subtrai(); //fun��o de subtra��o efetuada acima
	break; //termino da fun��o de subtra��o 
	
	
	case 3: //caso digitado 3 execute isso:
	divide(); //fun��o de divis�o 
	break; //termino da fun��o de divis�o 
	
	case 4: //caso digitado 4 execute isso: 
	multiplica(); //fun��o de multiplica��o
	break; //termino da fun��o de multiplica��o
	
	case 5: //caso digitado 5 execute isso: 
	system("exit"); //comando de fechar o programa
	printf("\nFim do Programa!\n\n"); //imprime mensagem na tela
	break; //termino da fun��o 5 selecionada
	
	default: //caso n�o haja escolha digite que nenhum dos casos est�o dispon�veis 
	printf("\nComando Invalido, tente novamente!\n\n"); //mensagem 5 escolha
	system("pause"); //pausa o sistema
	system("cls");  //limpa a tela
	menu(); //retorna ao menu inicial
	break; //termina fun��o
				
	}	
	

int main() //fun��o principal
{
    menu(); //chama o menu
    system("pause"); //pausa
    return 0; //retorna que o programa est� ok 

}
     
}

