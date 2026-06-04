#include <iostream>
#include <ctime>
#include "rlutil.h"

using namespace std;

void opcion1()
{
  int opcion=1;
  int pos = 1;
  rlutil::cls();

  rlutil::hidecursor();
  while(opcion != 49)
  {
    opcion = rlutil::nb_getch();

    if(opcion == 224)
    {
      pos++;
    }

    rlutil::locate(pos, 2);
    cout << " " << 0 << endl;
  }
}

void opcion2()
{
  string nombre, apellido;
  rlutil::cls();
  rlutil::locate(1,1);
  cout << "Ingrese Nombre: ";
  rlutil::locate(1,2);
  cout << "Ingrese Apellido: ";

  rlutil::locate(19,1);
  cin >> nombre;
  rlutil::locate(19,2);
  cin >> apellido;
}


void opcion3()
{
  rlutil::saveDefaultColor();

  rlutil::setColor(rlutil::BLUE);
  rlutil::setBackgroundColor(rlutil::LIGHTBLUE);
  cout << "Opcion 3" << endl;

  rlutil::resetColor();
}

void opcion4()
{
  rlutil::cls();
  rlutil::saveDefaultColor();

  for(int i=1; i<=rlutil::tcols(); i++)
  {
    rlutil::locate(i,2);
    cout << (char)177;
  }

  rlutil::hidecursor();
  for(int i=1; i<=rlutil::tcols(); i++)
  {
    rlutil::msleep(rand()%500);
    
    
    rlutil::locate(i,2);
    rlutil::setBackgroundColor(rlutil::WHITE);
    cout << " ";
    rlutil::resetColor();
    rlutil::locate(1,3);

    switch(i%3)
    {
    case 0:
      cout << "Pensando.  ";
      break;

    case 1:
      cout << "Pensando.. ";
      break;

    case 2:
      cout << "Pensando...";
      break;

    }


  }
  cout << endl;
  rlutil::resetColor();
  rlutil::showcursor();
}

int main()
{
  srand(time(0));
  int opcion;
  rlutil::setColor(rlutil::WHITE);
  rlutil::setBackgroundColor(rlutil::DARKGREY);
  do
  {
    rlutil::cls();
    cout << "1- Opcion 1" << endl;
    cout << "2- Opcion 2" << endl;
    cout << "3- Opcion 3" << endl;
    cout << "4- Opcion 4" << endl;
    cout << "0- Salir" << endl;

    cout << " -------------------- " << endl;
    cout << "Opcion: ";
    opcion = rlutil::getkey();

    cout << opcion << endl;

    switch(opcion)
    {
    case 49:
      cout << "Opcion 1!";
      opcion1();
      break;
    case 50:
      opcion2();
      break;
    case 51:
      opcion3();
      break;
    case 52:
      opcion4();
      break;

    }

    cout << "Precione una tecla para continuar...";
    rlutil::anykey();
  }
  while(opcion != 0);

  return 0;
}
