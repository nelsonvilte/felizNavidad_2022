/* Este programa muestra un saludo de Feliz Navidad */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main ()
	
	
{

	int i,j,n,m,altura,base,longitud;
	char c;
	char mensaje[30] = "** ¡FELIZ NAVIDAD! :) **\n";
	
	c=48;
	altura = 24;
	   
	printf("\n");
	
	for (i=0,j=altura;i<altura;i++,j--)
	{
		for(n=0;n<j;n++)
			printf(" ");
		for(m=altura;m>=j;m--)
		{   
			    
			printf("1");
			Sleep(10);  
			printf ("%c",c);
		}
		printf ("\n");
	}
	
	base=(altura-altura%3)/3;
	
	
	for(j=1;j<=base;j++)
	{
		for(i=1;i<altura;i++)
			printf(" ");
		Sleep(100);  
		printf("| |\n");
	}
	printf("\n");
	for(i=1;i<(altura/2);i++)
		printf(" ");
	
	
	longitud = strlen(mensaje);
	
	for(i=0;i<=longitud;i++){
		Sleep(100);
		printf("%c",mensaje[i]);
	}
		
	
	
	Sleep(1000);
	
	return 0;
}
