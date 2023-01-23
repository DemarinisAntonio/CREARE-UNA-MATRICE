	/*
	Name: Caricamento Matrice 
	Copyright: colamonico chiarulli
	Author:antonio demrarinis 
	Date:13/12/22 14:12 
	Description: Scrivere un programma per caricare dei numeri interi in una matrice di numeri interi con un ciclo for.
Successivamente scrivere un ciclo per stampare gli elementi della matrice a video.
*/
#include<iostream>
using namespace std;
int main ()
{
	int i;
	int e;
	//dichiaro una matrice
	const int righe=3;
	const int colonne=3;
	int matrice [righe][colonne];
	 for(i=0;i<righe;i++)
	 {
	 for(e=0;e<colonne;e++)
	{
		cout<<"inserisci un numero"<<endl;
		cin>>matrice[i][e];

	 }
	
	}
	for(i=0;i<righe;i++)
	 {
	 for(e=0;e<colonne;e++)
	{
		cout<<matrice[i][e]<<" ";
	

	 }
		cout<<endl;
	}
	
	
	
	
	return 0;
	
}
