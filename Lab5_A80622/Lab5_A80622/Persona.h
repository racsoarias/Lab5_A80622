#pragma once

using namespace std;

class Persona{

protected:
	int id;
	string nombre;

public:
	Persona(int, string);
	virtual ~Persona();
};

