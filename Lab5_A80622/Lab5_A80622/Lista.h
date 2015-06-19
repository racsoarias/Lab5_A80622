#pragma once
#include "Elemento.h"

using namespace std;

class Lista{

private:
	Elemento * cabeza;
	int getListaTam();

public:
	Lista();
	~Lista();
	void insertarInicio(Elemento *);
	void insertarFinal(Elemento *);
	void insertarPosEspecifica(int, Elemento *);
	void eliminarInicial();
	void eliminarFinal();
	void eliminarPosEspecifica(int);
};

