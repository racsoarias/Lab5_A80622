#include "stdafx.h"
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "Lista.h"

int _tmain(int argc, _TCHAR* argv[]){

	Lista a;

	for (int i = 0; i < 4; i++){
		a.insertarFinal(new ElementoInt(10+i));
	}
	for (int i = 0; i < 4; i++){
		a.insertarInicio(new ElementoInt(20+i));
	}
	a.insertarPosEspecifica(5, new ElementoInt(10000));

	a.eliminarInicial();
	a.eliminarFinal();
	a.eliminarPosEspecifica(2);

	cout << endl;
	system("pause");
	return 0;
}


