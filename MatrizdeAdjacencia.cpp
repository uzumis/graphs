#include<iostream>

using namespace std;
//Grafo utilizado
//https://i.imgur.com/iQ6UWSA.png

	int grafo[3][5]
	{
  // A B C D E
	{0,0,1,0,0},//A
	{0,1,0,1,0},//B		
	{1,1,0,1,1},//C
  		
	
};

	bool ligacao(int v, int v2)
	{
		if(grafo[v][v2])
			return true;
		return false;
	}
	
	int main (int argc, char *argv[])
	{
		cout<<ligacao(0,2)<<endl;
		//informar se tem ligação entre a linha 0
		//e coluna 2. Aqui pode inserir os valores
	 	//da linha e coluna pra ver se tem ligacao
		return 0;
	}