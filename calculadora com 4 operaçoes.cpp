#include <stdio.h> //biblioteca
#include <stdlib.h> //biblioteca

/*Exercício:Faça uma calculadora básica com quatro operações 
(adição,subtração,multiplicação e divisão)*/

void soma(){ //função de soma
	float valor1, valor2, result; //declarando as variáveis 
	
	printf("\nDigite o primeiro valor: \n"); //pedindo um valor ao usuário
	scanf("%f",&valor1); //armazenando o primeiro valor
	
	printf("\nDigite o segundo valor: \n"); //pedindo outro valor ao usuário
	scanf("%f",&valor2); //armazenando o segundo valor em um float
	
	result = valor1+valor2; //operação de soma 2 valores 
	printf("\nResultado: %.2f\n\n", result); //apresenta o resultado da operação de soma
	system("pause"); //pausa 
	system("cls"); //limpa a tela do usuário 
	menu(); //chama o menu novamente
}
void subtrai(){ //função de subtração
     float valor1, valor2, resultado; //declarando as variáveis
     printf("\nDigite o primeiro valor: \n"); //pedindo o primeiro valor ao usuário
     scanf("%f",&valor1); //armazena o valor na variável
     printf("\nDigite o segundo valor: \n"); //pedindo o segundo valor ao usuário
     scanf("%f",&valor2); //armazena segundo valor na variável 
     result = valor1 - valor2; //operação de subtração de 2 valores
     printf("\nResultado: %.2f\n\n",result); //apresenta o resultado ao usuário
     system("pause"); //pausa
     system("cls") //limpa a tela
     menu(); //chama o menu novamente
}
void divide(){ //função de divisão 
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
void multiplica(){ //função de multiplicação
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
void menu(){ //início do menu
	int escolha; //determinando função de variável inteira
	
	printf("/t/tBem vinde a calculadora em C\n\n"); //imprimindo mensagem na tela com /n = saltar linhas
	
	printf("\nSelecione uma operação matematica:\n"); 
	printf("\t1 - Adicao\n");
	printf("\t2 - Subtracao\n");
	printf("\t3 - Divisao\n");
	printf("\t4 - Multiplicacao\n");
	printf("\t5 - Sair do sistema\n");
	scanf("%d",&escolha); //armazenando a escolha desejada - int
	
	switch(escolha){ //função de seleção de escolha do menu
	
	case 1: //caso digitado 1 execute isso:
	soma(); //função de soma efetuada acima
	break; //termino da função de soma
	
	
	case 2: //caso digitado 2 execute isso: 
	subtrai(); //função de subtração efetuada acima
	break; //termino da função de subtração 
	
	
	case 3: //caso digitado 3 execute isso:
	divide(); //função de divisão 
	break; //termino da função de divisão 
	
	case 4: //caso digitado 4 execute isso: 
	multiplica(); //função de multiplicação
	break; //termino da função de multiplicação
	
	case 5: //caso digitado 5 execute isso: 
	system("exit"); //comando de fechar o programa
	printf("\nFim do Programa!\n\n"); //imprime mensagem na tela
	break; //termino da função 5 selecionada
	
	default: //caso não haja escolha digite que nenhum dos casos estão disponíveis 
	printf("\nComando Invalido, tente novamente!\n\n"); //mensagem 5 escolha
	system("pause"); //pausa o sistema
	system("cls");  //limpa a tela
	menu(); //retorna ao menu inicial
	break; //termina função
				
	}	
	

int main() //função principal
{
    menu(); //chama o menu
    system("pause"); //pausa
    return 0; //retorna que o programa está ok 

}
     
}

