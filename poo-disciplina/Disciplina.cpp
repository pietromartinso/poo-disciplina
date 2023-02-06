#include "Disciplina.hpp"
#include <iostream>

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

void Disciplina::imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso) {
	double pctCurso = (double)cargaHoraria / cargaTotalCurso;
	pctCurso = pctCurso * 100;
	std::cout << cabecalho << std::endl;
	std::cout << "Disciplina: " << nome << std::endl;
	std::cout << "Carga: " << cargaHoraria << std::endl;
	std::cout << "Percentagem do curso: " << pctCurso << "%" << std::endl;
	std::cout << "Professor: " << professor->getNome() << std::endl;
}