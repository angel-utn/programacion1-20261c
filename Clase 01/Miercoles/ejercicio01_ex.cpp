#include<iostream>
using namespace std;

int main() {
	float cantidadpedidos;
	float ganancia;
	cout << "Cantidad de pedidos: " << endl;
	cin >> cantidadpedidos;
	ganancia = 5000+1500*cantidadpedidos;
	cout << "Ganancia: $" << ganancia << endl;
	return 0;
}

