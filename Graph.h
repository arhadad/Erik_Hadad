
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "VertexSet.h"

using namespace std;

ifstream infile("test1.csv");
ofstream outfile("text.csv");


class Graph
{
private:
	int _E_size;
	bool flag;
	string _file_name;
	vector<VertexSet> _v;
	double _TH;	
	void init();
public:
	Graph(string file, double th);
};

Graph::Graph(string file, double th)
{
	this->_file_name = th;
	_TH = th;
	vector<VertexSet*>::iterator _v;
	init();
}

void Graph::init()
{
	cout<<"Clique Algorithm." <<endl; 
	int n;
	infile>>n;
	if(infile.is_open())
	{
		try{	  
			int line=0;
			char str[]="";
			char * pch;
			pch = strtok(str," ,");
			while(pch != NULL)
			{
			  vector<VertexSet*>::iterator vs;
				if(flag)
				{
					for(int i=0; i<n; i++){
						pch = strtok(NULL,".");
						float v = (float)pch;
						if(v>_TH & line < i)
						{
							 vs.add(i);
							_E_SIZE++;
						}
					}
				}
			}
		}catch(){}

				}else{
					cout<< "Error open file." << endl;
			}
}
