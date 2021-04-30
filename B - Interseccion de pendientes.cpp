#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	double m1, m2, b1, b2, bi, mi, x, y;						//double para que puedan ser negativos
	
	cout << "Ingresar la pendiente de la recta 1: "; cin >> m1;
	cout << "\nIngresar la ordenada de la recta 1: "; cin >> b1;	
	
	cout << "\nIngresar la pendiente de la recta 2: "; cin >> m2;
	cout << "\nIngresar la ordenada de la recta 2: "; cin >> b2;
	
	if (m1 == m2)												//si las pendientes son iguales
	{
		if (b1 == b2)											//si las ordenadas son iguales (y las pendientes)
		{
			cout << "\nLas rectas son iguales";
		}
		else 
		{
			cout << "\nLas rectas son paralelas";				//Si tienen misma pendiente y distinta ordenada, son paralelas
		}
	}
	else
	{
		//m1*x + b1 = m2*x + b2
		bi = b2 - b1;											//por despeje
		mi = m1 - m2;											//por despeje
		x = bi / mi;											//por despeje
		
		y = (m1*x) + b1; 										//la Y de la interseccion
		
		cout << "El punto de intersección es: (" << x << "," << y << ")"; 							
	}
	
	return 0;
}
