#include <iostream>
using namespace std;
int main() {
	char palabrain[21];
	int lpal;
	int l;
	char *palpun;
	

	cout<<"Ingrese una palabra a lo mas con 20 caracteres: "<<endl;
	cin>>palabrain;
	l=0;
	
	palpun = palabrain;

//	while (palpun != NULL){
//		palpun++;
//		l=l+1;
//	}



cout<<palpun[3]<<endl;
	cout<<"La cantidad de letras de la palabra es:"<<l<<endl;

return 0;
}
