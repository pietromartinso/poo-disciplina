#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

class Disciplina{
	public:
		Disciplina(std::string nomeDisciplina);

		std::string getNome();
		void setNome(std::string novoNome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int novaCarga);
		
	private:
		std::string nome;
		unsigned short int cargaHoraria;
};
#endif
