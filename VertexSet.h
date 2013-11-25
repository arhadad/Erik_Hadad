#include <iostream>

using namespace std;

	int * set;
	int INIT_SIZE = 20;;
	int INC = 50;
	int sp;

class VertexSet{	

public:

	VertexSet();
	VertexSet(VertexSet& ot);
    void add(int a);
	int size();
	int at(int i);
    void resize();
	string toString();
	string toFile();

};

VertexSet::VertexSet()
{
	set = new int[INIT_SIZE];
	sp = 0;
}

VertexSet::VertexSet(VertexSet& ot)
{
	set = new int[INIT_SIZE];
	sp = 0;
	for(int i=0; i<ot.size(); i++)
		VertexSet::add(ot.at(i));
}

void VertexSet::add(int a)
{
	if(sp == INIT_SIZE)
		resize();
	set[sp] = a;
	sp++;
}

int VertexSet::size()
{
	return sp;
}

int VertexSet::at(int i)
{
	return set[i];
}

void VertexSet:: resize()
{
	int size = INIT_SIZE+50;
	int* tmp = new int[size];
	for(int i=0; i<size; i++)
		tmp[i] = set[i];
	size++;
	set = tmp;
	delete[] tmp;
}


string VertexSet::toString()
{
  string ans ="";
                for(int i=0;i<size();i++) ans+= at(i)+", ";
                return ans;
}

string VertexSet::toFile()
{
	 string ans = " ";
                for(int i=0;i<size();i++) ans+= at(i)+", ";
                return ans;      
}
	void printArr(int other[])
{
	for(int i=0; i<INIT_SIZE; i++)
		   printf("%d\n",other[i]);
	cout<<"\n";
}

