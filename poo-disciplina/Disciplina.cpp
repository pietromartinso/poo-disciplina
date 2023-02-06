#include "Disciplina.hpp"

Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina} {
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string novoNome){
	nome = novoNome;
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int novaCarga){
	cargaHoraria = novaCarga;
}

Pessoa* Disciplina::getProfessor() {
	return professor;
}

void Disciplina::setProfessor(
	Pessoa* prof) {
	professor = prof;
}
