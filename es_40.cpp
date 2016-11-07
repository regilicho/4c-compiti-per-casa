/* Reginato Simone 4^C */

#include <iostream>

using namespace std;

float m, q, x, y;
bool inters;

bool appartiene (float m,float q,float x,float y, bool inters)
{
	int b1, b2;
	b1=y;
	cout<<"B1= " <<b1 <<endl;
	b2=(m*x)+q;
	cout<<"B2= " <<b2 <<endl;
	if (b1==b2)
		return inters=true;
	else
		return inters=false;
}

int main ()
{
	cout<<"Inserisci il coefficente angolare m: ";
	cin>>m;
	cout<<"Inserisci il termine noto q: ";
	cin>>q;

	cout<<"Inserisci l'ascissa del punto p: ";
	cin>>x;
	cout<<"Inserisci l'ordinata del punto p: ";
	cin>>y;

	cout<<"Retta:  " <<"y=" <<m <<"x+" <<q <<endl;
	cout<<"Punto: P(" <<x <<";" <<y <<")" <<endl;

	if (appartiene (m,q,x,y,inters)==true)
		cout<<"Il punto appartiene alla Retta" <<endl;
	else
		cout<<"Il punto non appartiene alla Retta" <<endl;

    return 0;
}
