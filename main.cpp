#include "jogoSapo.h"


int Sapo::distanciaTotalCorrida = 50;

int main(int argc, const char *argv[]) {

	//Instacia um novo jogo
	JogoSapo jogo(Sapo::getDistanciaTotalCorrida());

	jogo.addJogador(new Sapo("Kha'Zix"));
	jogo.addJogador(new Sapo("VI"));
	jogo.addJogador(new Sapo("Sivir"));
	jogo.addJogador(new Sapo("Varus"));
	jogo.addJogador(new Sapo("Rek'Sai"));

	//Inicia jogo
	jogo.runGame();
	

	return 0;
}