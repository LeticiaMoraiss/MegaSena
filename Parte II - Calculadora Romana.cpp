#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	string nr3, nr4, op;
	int nd1=0, nd2=0, n1=0, n2=0, r, rf=0, aux, aux2, u=0;
	char result[99];
	//################################################################## Legenda das Variaveis ###############################################################################
	//#																																										 #					
	//#																																										 #
	//# nr3:primeiro numero romano informado, 	nr4:Segundo numero romano informado, 	op: Operador informado,																 #
	//#																																										 #
	//# nd1: Primeiro numero decimal, 	nd2: Segundo numero decimal, 	n1: Recebe o valor da operação, 	n2:Recebe a quantidade de numeros no resultado da operação,      #
	//#																																										 #
	//# r:recebe o valor a ser dividido pelo n2, 	rf: Recebe o mod da divisao, 	aux: Recebe o valor de n1, 	aux2: recebe o valor da divisão entre aux e r.				 #
	//# 																																									 #
	//# result[99]: Resultado final a ser exibido.																															 #	
	//#																																										 #
	//########################################################################################################################################################################
	
	cout<<"Digite um numero romano: "<<endl;//Pede ao usuario para informar o numero romano desejado
	cin>>nr3;								//Variavel nr3 Recebe o valor informado pelo usuario
	cout<<"\nInforme o operador: "<<endl;		//Pede ao usuario para informar a operação desejada
	cin>>op;								//Variavel op recebe o valor da operação
	cout<<"\nDigite um numero romano: "<<endl;//Pede ao usuario para informar o numero romano desejado
	cin>>nr4;								//Variavel nr4 Recebe o valor informado pelo usuario

	for (int i = 0; i < nr3.length(); i++)  //For para definir o valor em decimal dos numeros romanos informados em nr3
	{	
		if(nr3[i]=='I' || nr3[i]=='i') 		//Condição testa o valor recebido em nr3 para definir o valor em decimal
		{	
			nd1=nd1+1;
			if(nr3[i+1]=='V' || nr3[i+1]=='v') // Condição define que se a letra V vier depois do I ela ira somar 4 e não apenas 1.
			{
				nd1=nd1+3;					// Soma o valor definido a variavel nd1 que sera o resultado total em decimal do primeiro numero romano
				i++;						// Contador para pular a casa ja recebida
			}
			
			else
			if(nr3[i+1]=='X' || nr3[i+1]=='x')// Condição define que se a letra X vier depois do I ela ira somar 9 e não apenas 1.
			{
				nd1=nd1+8;					// Soma o valor definido a variavel nd1 que sera o resultado total em decimal do primeiro numero romano
				i++;						// Contador para pular a casa ja recebida
			}			
			
		}
		
		else
		if(nr3[i]=='V' || nr3[i]=='v')
		{
			nd1=nd1+5;
		}
		
		else
		if(nr3[i]=='X' || nr3[i]=='x')
		{
			nd1=nd1+10;
			if(nr3[i+1]=='L' || nr3[i+1]=='l')
			{
				nd1=nd1+30;
				i++;
			}
			
			else
			if(nr3[i+1]=='C' || nr3[i+1]=='c')
			{
				nd1=nd1+80;
				i++;
			}
		}
		
		else
		if(nr3[i]=='L' || nr3[i]=='l')
		{
			nd1=nd1+50;
		}
		
		else
		if(nr3[i]=='C' || nr3[i]=='c')
		{
			nd1=nd1+100;
			if(nr3[i+1]=='D' || nr3[i+1]=='d')
			{
				nd1=nd1+300;
				i++;
			}
			
			else
			if(nr3[i+1]=='M' || nr3[i+1]=='m')
			{
				nd1=nd1+800;
				i++;
			}
		}
		
		else
		if(nr3[i]=='D' || nr3[i]=='d')
		{
			nd1=nd1+500;
		}
		
		else
		if(nr3[i]=='M' || nr3[i]=='m')
		{
			nd1=nd1+1000;
		}		
	}
	
	for (int i = 0; i < nr4.length(); i++)
	{
		if(nr4[i]=='I' || nr4[i]=='i')
		{	
			nd2=nd2+1;
			if(nr4[i+1]=='V' || nr4[i+1]=='v')
			{
				nd2=nd2+3;
				i++;
			}
			
			else
			if(nr4[i+1]=='X' || nr4[i+1]=='x')
			{
				nd2=nd2+8;
				i++;
			}			
		}
		
		else
		if(nr4[i]=='V' || nr4[i]=='v')
		{
			nd2=nd2+5;
		}
		
		else
		if(nr4[i]=='X' || nr4[i]=='x')
		{
			nd2=nd2+10;
			if(nr4[i+1]=='L' || nr4[i+1]=='l') 
			{
				nd2=nd2+30;
				i++;
			}
			
			else
			if(nr4[i+1]=='C' || nr4[i+1]=='c')
			{
				nd2=nd2+80;
				i++;
			}
		}
		
		else
		if(nr4[i]=='L' || nr4[i]=='l')
		{
			nd2=nd2+50;
		}
		
		else
		if(nr4[i]=='C' || nr4[i]=='c')
		{
			nd2=nd2+100;
			if(nr4[i+1]=='D' || nr4[i+1]=='d')
			{
				nd2=nd2+300;
				i++;
			}
		
			else
			if(nr4[i+1]=='M' || nr4[i+1]=='m')
			{
				nd2=nd2+800;
				i++;
			}
		}
		
		else
		if(nr4[i]=='D' || nr4[i+1]=='d')
		{
			nd2=nd2+500;
		}
		
		else
		if(nr4[i]=='M' || nr4[i+1]=='m')
		{
			nd2=nd2+1000;
		}	
	}

	
	if(op[0]=='+')				//Condição para testar qual sera o operador
	{
		n1=nd1+nd2;				//Realiza a operação informada pelo usuario
	}
	
	else
	if(op[0]=='-')
	{
		n1=nd1-nd2;
	}
	
	else
	if(op[0]=='*')
	{
		n1=nd1*nd2;
	}
	
	else
	if(op[0]=='/')
	{
		n1=nd1/nd2;
	}
	
	else
	if(op[0]!='+' && op[0]!='-' && op[0]!='*' && op[0]!='/')	//Se o usuario informar outro valor na operação o programa exibe Operador invalido.
	{
		cout<<"Operador Invalido\n";
		system("pause");
	}
	
	aux=n1;
	
	if (n1 == 0) n2 = 1;

    else									
	{
	     while (n1 != 0) 			// Função para definir quanto digitos tem na variavel n1;
         {							
             n2 = n2 + 1;
             n1 = n1 / 10;
         }
	}
	
	do
	{						
		if(n2==1)r=1;				// -|
		if(n2==2)r=10;				//  |
		if(n2==3)r=100;				//  |	
		if(n2==4)r=1000;			//  | \
		if(n2==5)r=10000;			//  |-- Define qual valor sera divido por aux;
		if(n2==6)r=100000;			//  | /
		if(n2==7)r=1000000;			//  |
		if(n2==8)r=10000000;		//  |
		if(n2==9)r=100000000;		//  |
		if(n2==10)r=1000000000;		// _|
		
		rf=(aux%r);					// rf recebe o resultado mod de aux por r
		n2=n2-1;					// Subtrai o valor de n2 para o proximo laço
		aux2=aux/r;					//aux2 recebe o resultado da divisão entre aux e r
		
		if(aux>=1000) 				//Condição para determinar qual a letra que result vai receber;
		{
			do
			{
			
				strcat(result,"M"); // Concatena a Letra que result recebera, na variavel
				aux2=aux2-1;		// Subtrai q quantidade de digitos que o numero possui	
				u++;
				      				// Contador para saber quantas vezes a letra foi concatenada
			}while(aux2>0);			
			
			aux=aux-(1000*u);		// Subtrai o valor que ja foi concatenado em result
		}
	
		if(aux2!=0)					// enquanto a variavel aux2 for diferente de 0, ainda pode-se concatenar letra a variavel result
		if(aux>=900)
		{
			strcat(result,"CM");
			aux=aux-900;
			aux2=aux2-9;
		}

		if(aux2!=0)
		if(aux>=500)
		{
			strcat(result,"D");
			aux=aux-500;
			aux2=aux2-5;
		}

		if(aux2!=0)
		if(aux>=400)
		{
			strcat(result,"CD");
			aux=aux-400;
			aux2=aux2-4;
		}

		if(aux2!=0)
		if(aux>=100)
		{
			u=0;
			do{
			
				strcat(result,"C");
				aux2=aux2-1;
				u++;
				
			}while(aux2>0);
			aux=aux-(100*u);
		}

		if(aux2!=0)
		if(aux>=90)
		{
			strcat(result,"XC");
			aux=aux-90;
			aux2=aux2-9;
		}

		if(aux2!=0)
		if(aux>=50)
		{
			strcat(result,"L");
			aux=aux-50;
			aux2=aux2-5;
		}

		if(aux2!=0)
		if(aux>=40)
		{
			strcat(result,"XL");
			aux=aux-40;
			aux2=aux2-4;
		}

		if(aux2!=0)
		if(aux>=10)
		{

			u=0;
			do{
			
				strcat(result,"X");
				aux2=aux2-1;
				u++;
				
			}while(aux2>0);
			aux=aux-(10*u);
		}

		if(aux2!=0)
		if(aux>=9)
		{
			strcat(result,"IX");
			aux=aux-9;
			aux2=aux2-9;
		}

		if(aux2!=0)
		if(aux>=5)
		{
			strcat(result,"V");
			aux=aux-5;		
			aux2=aux2-5;
		}

		if(aux2!=0)
		if(aux>=4)
		{
			strcat(result,"IV");
			aux=aux-4;
			aux2=aux2-4;
		}

		if(aux2!=0)
		if(aux>=1)
		{
			u=0;
			do{
			
				strcat(result,"I");
				aux2=aux2-1;
				u++;
			}while(aux2>0);
			aux=aux-(1*u);
		}
		
	}while(aux > 0);
	
	cout<<"\nO Resultado Final e: "<<result<<endl; 		//Exibe o resultado final;	

system("pause");
return 0 ;
}
