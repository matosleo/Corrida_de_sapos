#include "sapo.h"

#include <iostream>

Sapo::Sapo (std::string newId): qtdDePulos(0),  distancia(0), rd(), gen(rd()), dis(1, PULOS_METROS_MAX) {
	id = newId;
}

Sapo::~Sapo(){}

void
Sapo::setId(std::string newId) {
	id  = newId;
}

std::string
Sapo::getId() {
	return id;
}

int
Sapo::getDistancia() {
	return distancia;
}

int
Sapo::getQtdDePulos() {
	return qtdDePulos;
}

int
Sapo::getDistanciaTotalCorrida() {
	return distanciaTotalCorrida;
}

void
Sapo::pular() {
	qtdDePulos++;
	distancia += std::round(dis(gen));
}

void
Sapo::showStatus() {
	for(int i = 0; i < distancia; i++) {
		std::cout << ".";
	}
	std::cout << " " << id << " (" << distancia << "m)" << std::endl;
}


