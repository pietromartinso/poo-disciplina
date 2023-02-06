#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa p1{"Joao", static_cast<unsigned long>(11111111111), 20};
	
	Disciplina d1{ "Orientacao a Objetos" };
	d1.setProfessor(&p1);

	p1.setNome("Joao Silva");

	std::cout << p1.getNome() << '\t' << p1.getIdade() << '\t' << p1.getCpf() << std::endl;

	std::cout << d1.getNome() << std::endl;
	std::cout << d1.getProfessor()->getNome() << std::endl;
	return 0;


	return 0;
}
