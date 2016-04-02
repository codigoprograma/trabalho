#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

char login [30];

struct regra_negocio{
	int idcarro;
	int rgcliente;	
};
struct pessoa{
	int rg, cpf;
	char nome[50], data[10];
};

struct carro{
	int ano;
	char placa[10], modelo [20], marca[10];
};



struct pessoa pessoa1[1000];
struct carro carro1 [1000];
struct regra_negocio regra_negocio1[1000];
int contador_pessoa, contador_carro;

senha = 654321;

//menu de login
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int senha, t;
        
		for(t=1; t<4; t++){     
        system ("cls");
        printf("#----------------------------------#\n");
        printf("   %iº Tentativa                    \n", t);
        printf("             Bem vindo!             \n");
        printf("                    Senha: 654321   \n");
        printf("#----------------------------------#\n");
	    printf("\n");
	    printf("Seu nome: ");
	    fflush (stdin);
	    gets (&login);
	    printf("Senha: ");
     	scanf("%i", &senha);
		         //teste de senha
		    if (senha != 654321){
			   system ("cls");
			   printf("\n\n\n\n\n\n");
			   printf("                         Acesso negado!");
			   printf("\n");
			   printf("                    %i° tentativa desperdiçada", t);			 
			   _sleep(2000);
			   }
			   if (t==3){
				   system("cls");
				   printf("\n\n\n\n\n\n");
				   printf("              Ultrapassou o limite de tentativas");
				   _sleep(2000);
				   system("cls");
				   printf("\n\n\n\n\n\n");
				   printf("                  Saindo.");
				   _sleep(1000);
				   system("cls");
				   printf("\n\n\n\n\n\n");
				   printf("                  Saindo..");
				   _sleep(1000);
				   system("cls");
				   printf("\n\n\n\n\n\n");
				   printf("                  Saindo...");
				   _sleep(1000);
				   exit(0);
			   }
		    
			if (senha == 654321){
			   system ("cls");
			   printf("\n\n\n\n\n\n");
			   printf("                   Bem vindo(a) %s.", login);
			   _sleep (1000);
			   system("cls");
			   printf("\n\n\n\n\n\n");
			   printf("                   Bem vindo(a) %s..", login);
			   _sleep (1000);
			   system("cls");
			   printf("\n\n\n\n\n\n");
			   printf("                   Bem vindo(a) %s...", login);
			   _sleep (1000);
			   menu();
            }
            
}
		system("pause");
}

//menu principal
int menu(){
	int opcao;
		
	do{
		system ("cls");
	    printf("#----------------------------------#\n");
	    printf("             login: %s              \n", login);
	    printf("          DIGITE O NUMERO           \n");
	    printf("         DA OPÇÃO DESEJADA          \n");
	    printf("#----------------------------------#\n");
	    printf("\n");
		printf("1 - CADASTRO DE CLIENTES\n");
		printf("2 - CADASTRO DE CARROS\n");
		printf("3 - CONSULTA DE CLIENTES\n");
		printf("4 - CONSULTA DE CARROS\n");
		printf("5 - ALTERAR CADASTRO DE CLIENTES\n");
		printf("6 - ALTERAR CADASTRO DE CARROS\n");
		printf("7 - VENDER CARRO\n");
		printf("8 - VOLTAR A TELA DE LOGIN ");
	    scanf ("%i", &opcao);		
		
		switch(opcao){
		
			case 1: 
				cadastro();	
				break;			
	         case 2:
				cadastro_carros();
		   	 	 break;
			case 3:
				consulta();
				break;
			case 4:
				consulta_carros();
				break;
			case 5:
				alterar_cliente();
				break;
			case 6: 
				alterar_carro();
				break;
			case 7:
				venda();
				break;
			case 8:
				return(opcao);
				break;
			default:
					system("cls");	
	        		printf("\n\n\n\n\n\n");
					printf("                   Opção Inválida!");
					_sleep(2000);
		}	
	}while(opcao != 8);

	system("pause");
}

//função de cadastro de pessoas
int cadastro(){
int i;
char opcao;
		system ("cls");
        printf("#----------------------------------#\n");
        printf("             login: %s              \n", login);
        printf("         CADASTRO DE CLIENTES       \n");
        printf("                                    \n");
        printf("#----------------------------------#\n");
        printf("\n");
	             
					  	
        for (i=contador_pessoa; i<1000; i++){
              
		   printf("\nDigite seu RG: ");
           scanf("%d", &pessoa1[i].rg);
           printf("Digite seu CPF: ");
           scanf("%d", &pessoa1[i].cpf);
           printf("Digite seu nome completo: ");
           fflush(stdin);
           gets (&pessoa1[i].nome);
           printf("Data de nascimento: ");
           gets(&pessoa1[i].data);
           contador_pessoa++;
           printf("     \nCadastro realizado com sucesso!\n\n");
		   fflush(stdin);
		   printf("Deseja cadastrar novamente s/n?");
           scanf("%c", &opcao);
		   if(opcao == 'n') break;
		   		
        }
         
		 getch();
 	 	   		
   		   
}

//função de consulta de pessoas
int consulta(){
		int i;
		   system ("cls");	
        printf("#----------------------------------#\n");
        printf("               login: %s            \n", login);
        printf("          CADASTROS REALIZADOS      \n");
        printf("                                    \n");
        printf("#----------------------------------#\n");
        printf("\n");
	
	for (i=0; i<contador_pessoa; i++){
		printf("Nome: %s", pessoa1[i].nome);
		printf("\nRG: %d", pessoa1[i].rg);
		printf("\nCPF: %d", pessoa1[i].cpf);
		printf("\nData de nascimento: %s", pessoa1[i].data);
		printf("\n\n");
		
	}
	getch();
}

//fução de cadastro de carros
int cadastro_carros(){
int i;
char opcao;

		system ("cls");
        printf("#----------------------------------#\n");
        printf("             login: %s              \n", login);
        printf("         CADASTRO DE CARROS         \n");
        printf("                                    \n");
        printf("#----------------------------------#\n");
        printf("\n");
	             
					  	
        for (i=contador_carro; i<1000; i++){
              
		   printf("\nDigite a placa: ");
           fflush(stdin);
		   gets(&carro1[i].placa);
           printf("Digite o modelo: ");
           gets(&carro1[i].modelo);
           printf("Digite a marca: ");
           gets(&carro1[i].marca);
           printf("Digite o ano de fabricação: ");
           scanf ("%i",&carro1[i].ano);
           contador_carro++;
           fflush(stdin);
		   printf("Deseja cadastrar novamente s/n?");
           scanf("%c", &opcao);
		   if(opcao == 'n') break;
		   		
        }
         
		 printf("     \nCadastro realizado com sucesso!\n");
		 getch();
 	 	   		
   		   
}

//função de consulta de carros
int consulta_carros(){
		int i;
	
system("cls");
	  
        printf("#----------------------------------#\n");
        printf("               login: %s            \n", login);
        printf("          CADASTROS REALIZADOS      \n");
        printf("                                    \n");
        printf("#----------------------------------#\n");
        printf("\n");
	
	for (i=0; i<contador_carro; i++){		
		printf("\nID: %i", i);
		printf("\nPlaca: %s", carro1[i].placa);
		printf("\nModelo: %s", carro1[i].modelo);
		printf("\nMarca: %s", carro1[i].marca);
		printf("\nAno de Fabricação: %i", carro1[i].ano);
		printf("\n");
		
	}
	getch();
}

//função de alterar dados do cliente
int alterar_cliente() {


int rg_cliente, i;

		printf("#----------------------------------#\n");
        printf("               login: %s            \n", login);
        printf("       ALTERAR DADOS DE CLIENTE     \n");
        printf("                                    \n");
        printf("#----------------------------------#\n");
        printf("\n");
        
printf("Digite o RG do cliente: ");
scanf("%i", &rg_cliente);

	for(i=0;i<contador_pessoa; i++){
    	if (rg_cliente == pessoa1[i].rg){
		  		printf("\nDigite seu RG: ");
           		scanf("%d", &pessoa1[i].rg);
           		printf("Digite seu CPF: ");
           		scanf("%d", &pessoa1[i].cpf);
           		printf("Digite seu nome completo: ");
           		fflush(stdin);
           		gets (&pessoa1[i].nome);
           		printf("Data de nascimento: ");
           		gets(&pessoa1[i].data);
   	      		fflush(stdin);
                break;
				
	   	}
	
	   	if (rg_cliente != pessoa1[i].rg){
		printf("Usuario n cadastrado!");
		break;
		
	}
		}
		
		
					 
 
	getch();
	return 0;
}

//função de alterar dados dos carros
int alterar_carro() {
int placa_carro, i;

		printf("#----------------------------------#\n");
        printf("               login: %s            \n", login);
        printf("        ALTERAR DADOS DO CARRO      \n");
        printf("                                    \n");
        printf("#----------------------------------#\n");
        printf("\n");
        
printf("Digite a placa do carro: ");
scanf("%i", &placa_carro);

	for(i=0;i<100; i++){
		
	if (placa_carro==carro1[i].placa){
		  	  	  
               printf("\nDigite a placa: ");
           	   fflush(stdin);
		   	   gets(&carro1[i].placa);
           	   printf("Digite o modelo: ");
           	   gets(&carro1[i].modelo);
           	   printf("Digite a marca: ");
           	   gets(&carro1[i].marca);
           	   printf("Digite o ano de fabricação: ");
           	   scanf ("%i",&carro1[i].ano);
           	   fflush(stdin);		
           	   break;
    }
	   	if (placa_carro==carro1[i].placa){
		printf("Carro n cadastrado!!!");
		break;
	    return 0;
		}
	
	}
	getch();
	return 0;
	}


