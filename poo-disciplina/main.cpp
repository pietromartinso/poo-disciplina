#include<iostream>
#include<list>
#include "Pessoa.hpp"

int main() {
	std::list<Pessoa*> pessoas;
	pessoas.push_back(new Pessoa{ "Joao", 15 });//adicionando no final da lista
	pessoas.push_back(new Pessoa{ "Maria", 16 });//adicionando no final da lista
	Pessoa* p3{ new Pessoa{"Pedro", 20} };
	pessoas.push_front(p3);//adicionando no início da lista
	std::list<Pessoa*>::iterator it{ pessoas.begin() };
	for (; it != pessoas.end(); it++) {//a lista contém ponteiros para pessoas, e não pessoas
		std::cout << (*it)->getNome() << std::endl;//o itPes é um “ponteiro” que aponta para um ponteiro de pessoa!
		delete* it;//não esqueça de deletar os ponteiros para desalocar a memória
	}
	return 0;
}