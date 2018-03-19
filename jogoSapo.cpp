#include <iostream>
#include "jogoSapo.h"


JogoSapo::JogoSapo(int newDistancia) {
	distancia = newDistancia;
}

JogoSapo::~JogoSapo(){}



void
JogoSapo::addJogador(Sapo* jogador) {
	if(total_jogadores < MAX_JOGADORES) {
		jogadores[total_jogadores++] = jogador;
	}
}

void
JogoSapo::setTotal_Jogadores(int qtd) {
	total_jogadores = qtd;
}


void
JogoSapo::runGame() {
	bool ganhou = false;
	int rodadas = 0;
	
	while(!ganhou) {
		
		std::cout << "--------------------------- Rodada " << rodadas << " ---------------------------" << std::endl;

		for(int i = 0; i < total_jogadores; i++) {
			
			if(!ganhou)jogadores[i]->pular();
			jogadores[i]->showStatus();
			if(jogadores[i]->getDistancia() >= distancia) {
				ganhou = true;
				vencedor = jogadores[i];
			}
		}
		rodadas++;
	}
	exibirResultado();
}

void
JogoSapo::exibirResultado() {
	std::cout << "--------------------------- FIM DO JOGO -------------------------" << std::endl;

	std::cout << "O Vencedor foi " << vencedor->getId() << std::endl; 
}