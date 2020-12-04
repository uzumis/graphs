#include <iostream>
#include<list>
#include<algorithm> 
//GRAFO USADO
//https://i.imgur.com/6WHvcWi.png
using namespace std;

class Grafo
{
	int V;
	list<int> *adjacente;
	
	public:
		Grafo(int V);
		void adicionarArest(int v1, int v2);
		
		int grausaida(int v);
		
		bool vizinho(int v1, int v2);
		
};

Grafo::Grafo(int V)
{
	this->V=V;
	adjacente = new list<int>[V];
}

void Grafo::adicionarArest(int v1, int v2){
	adjacente[v1].push_back(v2);
}

int Grafo::grausaida(int v)
{
	return adjacente[v].size();
}
bool Grafo::vizinho(int v1, int v2)
{
	   if(find(adjacente[v1].begin(),adjacente[v1].end(),v2) != adjacente[v1].end())	
	   		return true;
 return false;
}

	int main()
	{
		Grafo grafo(7);
		grafo.adicionarArest(0,1);
		grafo.adicionarArest(1,2);
		grafo.adicionarArest(2,3);
		grafo.adicionarArest(2,4);
		grafo.adicionarArest(1,5);
		grafo.adicionarArest(5,6);
		grafo.adicionarArest(5,7);
		
		//mostrar g. de saída
		cout<<"\nGrau de saída do vértice 1: \n"<< grafo.grausaida(1);
		cout<<"\nGrau de saida do vertice 3: \n"<< grafo.grausaida(3);
		//vizinho aqui se faz o teste se sao vizinhos
		//exemplos de verificacao
		if (grafo.vizinho(0,1))
			cout<<"\n\nO 1  eh vizinho de 0 \n";
		else
			cout <<"\n\n O 1 nao eh vizinho de 0 \n";
		if (grafo.vizinho(0,2))
			cout <<"\n\nO 2 eh vizinho de 0\n";
		else
			cout<<"\n\nO 2 nao eh vizinho de 0\n";
		
		return 0;
	}