#include "iostream"
#include "jogoSapo.h"


int Sapo::distanciaTotalCorrida = 50;

int main(int argc, const char *argv[]) {

	//Instacia um novo jogo
	JogoSapo jogo(Sapo::getDistanciaTotalCorrida());


	std::cout << std::endl
				<< "***********************************************\n"
				<< "*                                             *\n"
				<< "*                                             *\n"
				<< "*       Bem-vindo à Corrida de Sapos          *\n"
				<< "*                                             *\n"
				<< "*                                             *\n"
				<< "***********************************************\n"
				<< std::endl;


	int opcao;

	do {
		std::cout
		<< " 1 - Jogar\n"
		<< " 2 - Regras\n"
		<< " 0 - Sair\n"
		<< "\n"
		<< " Opção: ";
		std::cin >> opcao;

		switch(opcao) {
			case 1:
			{
				int qtdJogadores;
				std::cout << "Digite a quantidade de jogadores para a corrida: ";
				std::cin >> qtdJogadores;
				std::string nomeJogador;
				for(int i= 0; i < qtdJogadores; i++) {
					std::cout << "Entre com o nome do " << i+1 << "º jogador: ";
					std::cin >> nomeJogador;
					jogo.addJogador(new Sapo(nomeJogador));
				}

				jogo.runGame();

				qtdJogadores = 0;
				jogo.setTotal_Jogadores(0);

				std::cout << "Digite 1 para jogar novamente ou 0 para sair" << std::endl;
				std::cin >> opcao;
				break;
			}
			
			case 2:
			{
				std::cout << "Corrida de Sapo - Regras\n"
				<< "Objetivo: Alcançar ou ultrapassar 50 metros antes que outros jogadores\n"
				<< "Modo de Jogo: Cada jogador pula uma vez por rodada em uma quantidade aleatória de metros\n"
				<< std::endl;
				break;			
			}

			case 0:
			{
				std::cout << "Auto-destruição em" << std::endl;
				for(int i = 3; i >= 1; i--) {
					std::cout << i << std::endl;
				}

				std::cout << "Até logo!" << std::endl;

				break;
			}

			default:
			{
				std::cout << "!ERRO!\n"
				<< "Digite uma opção válida"
				<< std::endl;
				break;
			}
		}

	} while(opcao != 0);




	return 0;
}