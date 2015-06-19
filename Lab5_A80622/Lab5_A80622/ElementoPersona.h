#pragma once
#include "Elemento.h"
#include "Persona.h"

using namespace std;

class ElementoPersona : public Elemento, public Persona{

public:
	ElementoPersona(int, string);
	virtual ~ElementoPersona();
	virtual int compareTo(Elemento *);
	virtual void imprimir(ostream &) const;
};

