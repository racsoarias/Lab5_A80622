#include "stdafx.h"
#include "Lista.h"

Lista::Lista(){
	cabeza = NULL;
}

Lista::~Lista(){
}

void Lista::insertarInicio(Elemento * elemento){
	if (cabeza == NULL){
		cabeza = elemento;
	}
	else{
		elemento->setProx(cabeza);
		cabeza = elemento;
	}
}

void Lista::insertarFinal(Elemento * elemento){
	Elemento *temp = cabeza;

	if (cabeza == NULL){
		cabeza = elemento;
	}
	else{
		while (temp->getProx() != NULL){
			temp = temp->getProx();
		}
		temp->setProx(elemento);
	}
}

void Lista::insertarPosEspecifica(int pos, Elemento * elemento){
	Elemento *temp = cabeza;
	if (pos == 0){
		elemento->setProx(cabeza);
		cabeza = elemento;
	}
	else{		
		/*Si el tamaño de la lista es menor a la posición
		 *indicada, entonces se reasigna la posición para
		 *que se inserte al final */
		int tam = getListaTam();
		if (pos > tam){ pos = tam; }
		for (int i = 1; i < pos; i++){
			temp = temp->getProx();
		}
		elemento->setProx(temp->getProx());
		temp->setProx(elemento);
	}
}

void Lista::eliminarInicial(){
	if (cabeza != NULL){
		cabeza = cabeza->getProx();
	}
}

void Lista::eliminarFinal(){
	Elemento *toDelete = cabeza;
	Elemento *temp = toDelete;
	if (cabeza != NULL){
		while (toDelete->getProx() != NULL){
			temp = toDelete;
			toDelete = toDelete->getProx();
		}
	toDelete = NULL;
	temp->setProx(toDelete); 
	}
}

void Lista::eliminarPosEspecifica(int pos){
	Elemento *temp = cabeza;
	if (pos == 0){
		cabeza = cabeza->getProx();
	}
	else{
		/*Si el tamaño de la lista es menor a la posición
		*indicada, entonces se reasigna la posición para
		*que se elimine el elemento final */
		int tam = getListaTam();
		if (pos > tam){ pos = tam; }
		
		for (int i = 1; i < pos; i++){
			temp = temp->getProx();
		}
		temp->setProx(temp->getProx()->getProx());
	}
}

int Lista::getListaTam(){
	Elemento *temp = cabeza; 
	int tam = 1;
	while (temp->getProx() != NULL){
		temp = temp->getProx();
		tam++;
	}
	return tam;
}