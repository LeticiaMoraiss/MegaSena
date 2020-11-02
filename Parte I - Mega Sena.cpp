#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<windows.h>

using namespace std;

#define valido   1
#define invalido 0

int main()
{
   int a,b,x;
   int vet['x'];
   int teste;

   cout<<"\n\t\t\t\t MEGA SENA \n\n";
   cout<<"  Informe o valor inicial: ";
   cin>>a;
   cout<<"\n  Informe o valor final: ";
   cin>>b;
   cout<<"\n  Informe a  quantidade de numeros para o sorteio: ";
   cin>>x;
   
   system("cls");
   
   while((b<x)|| (a>=b)) //Condições de erro... O valor final nao pode ser menor que a qtd de numeros sorteados e o valor inicial nao poder ser maior que o final.
   {
   	 cout<<"\n\t\t SORTEIO IMPOSSIVEL, TENTE OUTRA VEZ!!!\n\n";
   	 system("pause");
   	 system("cls");
   	 
   	 cout<<"\n\t\t\t\t MEGA SENA \n\n";
   	 cout<<"  Informe o valor inicial: ";
   	 cin>>a;
   	 cout<<"\n  Informe o valor final: ";
   	 cin>>b;
   	 cout<<"\n  Informe a  quantidade de numeros para o sorteio: ";
   	 cin>>x;
   	 system("cls");
   }	
   
   
   cout<<"\n\t\t\t\t MEGA SENA \n\n";
   cout<<"\n  Inicio: "<<a;
   cout<<"\n\n  Fim: "<<b;
   cout<<"\n\n  Quantidade: "<<x;

   cout<<"\n\n\n\n\t\t\t\t  SORTEIO \n\n";

   srand(time(NULL));
   
    for(int i=0;i<x;i++) //Exibe os numeros sorteados
    {
    	do // Atribui os numeros sorteados em um vetor
    	{
    	  vet[i]= a + rand() % (b-a);	
    	  teste=valido;
    	  
    	  for(int j=0; j<i;j++) //Compara os numeros para não repetir nenhum
    	  {
    	  	if(vet[i]==vet[j])
    	  	{
    	  	  teste=invalido;	
			}
		  }
		  
		}while(teste==invalido);
		
		cout<<"  "<<vet[i];
		Sleep(1000); //Faz os numeros aparecerem lentamente
	}

getch();
return 0;	
}
