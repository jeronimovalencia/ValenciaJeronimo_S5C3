#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;


int main(){
  int i, numeroal;
  int cont = 0;
  for(i=0;i<1000;i++){
    numeroal = rand() % 100 + 1;
    if(numeroal%2 == 0 && numeroal < 89 && cont < 25)
	{
		cout << "Número '" << cont + 1 << "' menor a 89" << endl;
		cout << numeroal << endl;
		cont++;
		if(cont == 25) {break;}
	}	 	 
  }	
  return 0;
}

