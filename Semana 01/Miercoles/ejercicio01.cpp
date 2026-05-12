#include <iostream>

using namespace std;

int main(){
  int cantidadPedidos, ganancias;
  
  cout << "Cantidad de pedidos: ";
  cin >> cantidadPedidos;

  ganancias = 5000 + 1500 * cantidadPedidos;

  cout << "Ganancia: $"<< ganancias << endl;
  
  return 0;
}


