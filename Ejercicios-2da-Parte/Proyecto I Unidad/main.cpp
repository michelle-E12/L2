#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

        system("cls");

        cout << "********************" << endl;
        cout << "   MENU DE JUEGOS   " << endl;
        cout << "********************" << endl << endl;
        cout << "Seleccione un juego" << endl;
        cout << "1 - Starship" << endl << endl;
        cout << "2 - Snake" << endl;
        cout << endl;
        cout << "Ingrese un numero del menu para seleccionar un juego: ";
        cin >> opcion;

        system("cls");

        switch (opcion)
        {
        case 1:
            starShip();
            break;
        
        case 2:
            snake();
            break;
        
        default:
            break;
        }

    return 0;
}
