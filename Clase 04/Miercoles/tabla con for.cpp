#include <iostream>
using namespace std;

int main() {
   int num;
   
   cout << "Ingrese numero para la tabla: ";
   cin >> num;
   
   cout << "=========================================="<<endl;
   cout << "             TABLA DEL " << num << endl;
   cout << "=========================================="<<endl;
   
   /// mostrar la tabla
   for(int i=1; i<=10; i++){
      cout << num << " x " << i << " = " << i * num << endl;
   }
   
   cout << "=========================================="<<endl;
   return 0;
}

