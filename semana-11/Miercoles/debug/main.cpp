#include <iostream>

using namespace std;


void mostrar2(int ppe){
  cout << ppe << endl;
}

void mostrar(int vec[]){
  cout << vec[1] << endl;
}

int main()
{
  int cant=0, num[5]={2,5,-3,4};
  
  for(int i=0; i<5; i++){
    if(num[i] % 2 != 0 ){
      cant ++;    
    }  
  }
  
  cout << "Cantidad de impares es: " << cant << endl;
  
  
  /*
    int n[5] = {1,2,3,4,5};
        
    
    mostrar(n);
    */
    
    system("pause");
    return 0;
}
