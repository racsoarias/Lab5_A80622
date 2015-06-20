#include "stdafx.h"
#include "ArbolBinario.h"
#include "Lista.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoIntInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

int _tmain(int argc, _TCHAR* argv[]){

	srand((unsigned int)time(NULL));
	Lista a, b, c, d;
	string names[] =
	{ "Faby", "Mati", "Kari", "Caro", "Rapu", "Naty", "Guly", "Pelu", "Joha", "Bora" };
	for (int i = 0; i < 5; i++){
		a.insertarInicio(new ElementoInt(100 + i));
		a.insertarFinal(new ElementoInt(200 + i));
		b.insertarInicio(new ElementoIntInt((i * 10), (i * 20)));
		b.insertarFinal(new ElementoIntInt((i * 20), (i * 10)));
		c.insertarInicio(new ElementoDouble((rand() % 100 + 100) / 3.5));
		c.insertarFinal(new ElementoDouble((rand() % 100 + 200) / 3.5));
		d.insertarInicio(new ElementoPersona(new Persona((rand() % 100 + 100), names[rand() % 9])));
		d.insertarFinal(new ElementoPersona(new Persona((rand() % 100 + 200), names[rand() % 9])));
	}

	cout << "Listas originales: " << endl;
	cout << "Lista de ElementoInt: " << a << endl;
	cout << "Lista de ElementoIntInt: " << b << endl;
	cout << "Lista de ElementoDouble: " << c << endl;
	cout << "Lista de ElementoPersona: " << d << "\n" << endl;

	a.insertarPosEspecifica(5, new ElementoInt(7007));
	a.eliminarInicial();
	a.eliminarFinal();
	a.eliminarPosEspecifica(2);

	b.insertarPosEspecifica(5, new ElementoIntInt(70,77));
	b.eliminarInicial();
	b.eliminarFinal();
	b.eliminarPosEspecifica(2);

	c.insertarPosEspecifica(5, new ElementoDouble(70.07));
	c.eliminarInicial();
	c.eliminarFinal();
	c.eliminarPosEspecifica(2);

	d.insertarPosEspecifica(5, new ElementoPersona(new Persona(7007, "Sin Nombre")));
	d.eliminarInicial();
	d.eliminarFinal();
	d.eliminarPosEspecifica(2);

	cout << "Listas moodificadas: " << endl;
	cout << "Lista de ElementoInt: " << a << endl;
	cout << "Lista de ElementoIntInt: " << b << endl;
	cout << "Lista de ElementoDouble: " << c << endl;
	cout << "Lista de ElementoPersona: " << d << "\n" << endl;

	system("pause");
	return 0;
}


