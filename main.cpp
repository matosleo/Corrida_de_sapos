#include <iostream>

#include "sapo.h"

int Sapo::distanciaTotalCorrida = 50;

int main(int argc, const char *argv[]) {

	Sapo s1("Thanos");
	Sapo s2("Wolverine");
	Sapo s3("Deadpool");

	bool ganhou  = false;
	int rodada = 1;
	Sapo * vencedor;



	while(!ganhou) {
		std::cout << "--------------------------- Rodada " << rodada << " ---------------------------" << std::endl; 

		if(!ganhou) s1.pular();
		s1.showStatus();
		if(s1.getDistancia() >= Sapo::getDistanciaTotalCorrida()) {
			ganhou  = true;
			vencedor = &s1;
		}

		if(!ganhou) s2.pular();
		s2.showStatus();
		if(s2.getDistancia() >= Sapo::getDistanciaTotalCorrida()) {
			ganhou  = true;
			vencedor = &s2;
		}

		if(!ganhou) s3.pular();
		s3.showStatus();
		if(s3.getDistancia() >= Sapo::getDistanciaTotalCorrida()) {
			ganhou  = true;
			vencedor = &s3;
		}
		rodada++;	
	}

	std::cout << "--------------------------- FIM DO JOGO -------------------------" << std::endl;

	std::cout << "O Vencedor foi " << vencedor->getId() << std::endl; 


	return 0;
}