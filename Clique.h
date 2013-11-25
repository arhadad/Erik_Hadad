#include <iostream>
#include "VertexSet.h"
#include "Graph.h"

using namespace std;

class Clique
{
private:
	VertexSet _clique;
	VertexSet _Ni;
    static Graph _graph;

public:
	static void init(Graph g)
	{
		_graph = g;
	}

	Clique(int a,int b);
	Clique(Clique& ot);
	Clique(Clique ot, int vertex);
	string toFile();
	int size();
	VertexSet clique();
	void addVertex(int vertex);
	VertexSet commonNi();
};

Clique::Clique(int a,int b)
{
	_clique = new VertexSet();
	_clique.add(a);
	_clique.add(b);
	_Ni = _graph.Ni(a).intersection(_grap.Ni(b));
}
Clique::Clique(Clique& ot)
{
	_clique = new VertexSet(ot._clique);
	_Ni = new VertexSet(ot._Ni);
}

Clique::Clique(Clique ot, int vertex)
{
	this(ot);
	this.addVertex(vertex);
}

String Clique::string toFile()
{
	 String ans = "";
     for(int i=0;i<this._clique.size();i++)
	 {
		ans+=this._clique.at(i)+",";
	 }           
	 return ans;
}

int Clique::size()
{
	return this._clique.size();
}

Clique::VertexSet clique()
{
	return this._clique;
}

void Clique::addVertex(int vertex)
{
	_clique.add(vertex);
	_Ni = _Ni.intersection(_graph.Ni(vertex));
}
VertexSet commonNi()
{
	return _Ni;
}

