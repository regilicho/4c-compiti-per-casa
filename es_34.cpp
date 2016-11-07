/* Simone Reginato 4^C */

#include <iostream>

using namespace std;

int n;
void sequenza (int n){
	int p;
	p=n+5;
	do{
		n=n+1;
		cout<<n <<'\t';

	} while (n!=p);
}

int main (){
	cout<<"Inserisci il numero: ";
	cin>>n;
	cout<<endl;
	sequenza (n);
	cout<<endl;

	return 0;
}
