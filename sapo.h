#ifndef SAPO_H
#define SAPO_H

#include <string>
#include <random>

#define PULOS_METROS_MAX 5

class Sapo 
{
private:
	std::string id;
	int qtdDePulos;
	int distancia;
	

	static int distanciaTotalCorrida;

	std::random_device 				rd; 
	std::default_random_engine 		gen; 
	std::uniform_int_distribution<> dis;

public:
	Sapo(std::string newId);
	~Sapo();

	std::string getId();
	int getQtdDePulos();
	int getDistancia();

	static int getDistanciaTotalCorrida();

	void setId(std::string newId);


	void pular();

	void showStatus();
};

#endif