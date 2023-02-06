#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa p1{"Joao", static_cast<unsigned long>(11111111111), 20};
	Pessoa p2{"Maria"};

	Disciplina d1{"Orientacao a Objetos"};

	std::cout << p1.getNome() << '\t' << p1.getIdade() << '\t' <<  p1.getCpf() << std::endl;
	std::cout << p2.getNome() << std::endl;

	std::cout << d1.getNome() << std::endl;

	return 0;
}
