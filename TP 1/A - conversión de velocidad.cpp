#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	float vel;
	
	cout << "Ingresar una velocidad en km/h: "; cin >> vel;
	
	vel = (vel * 5) / 18;
	
	cout << "La velocidad expresada en mts/s es: " << vel;
	
	return 0;
}
