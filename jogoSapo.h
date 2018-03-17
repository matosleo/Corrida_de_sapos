#include "sapo.h"

#define MAX_JOGADORES 10

class JogoSapo {

private:
	int distancia;
	int total_jogadores;
	Sapo *jogadores[MAX_JOGADORES];
	Sapo *vencedor = nullptr;


public:
	JogoSapo(int novaDistancia);
	~JogoSapo();

	void addJogador(Sapo* jogador);
	void runGame();
	void exibirResultado();

};