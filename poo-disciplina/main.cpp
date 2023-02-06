#include<iostream>
#include<list>
#include "Pessoa.hpp"

int main() {
	std::list<Pessoa*> pessoas;
	pessoas.push_back(new Pessoa{ "Joao", 15 });//adicionando no final da lista
	pessoas.push_back(new Pessoa{ "Maria", 16 });//adicionando no final da lista
	Pessoa* p3{ new Pessoa{"Pedro", 20} };
	pessoas.push_front(p3);//adicionando no in�cio da lista
	std::list<Pessoa*>::iterator it{ pessoas.begin() };
	for (; it != pessoas.end(); it++) {//a lista cont�m ponteiros para pessoas, e n�o pessoas
		std::cout << (*it)->getNome() << std::endl;//o itPes � um �ponteiro� que aponta para um ponteiro de pessoa!
		delete* it;//n�o esque�a de deletar os ponteiros para desalocar a mem�ria
	}
	return 0;
}