#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa* ptr1{ new Pessoa };//Utilizando construtor default
	Pessoa* ptr2{ new Pessoa{"Joana", 22} };//Utilizando construtor com parâmetros

	int* ptrInt{ new int };//inteiro alocado e com lixo de memória
	int* ptrIntIniciado{ new int{2} };//inteiro alocado e inicializado com 2

	ptr1->setNome("Maria");//operador -> para derreferenciar a função de objeto apontado
	*ptrInt = 20;//mesma coisa que com C

	std::cout << ptr1->getNome() << std::endl;
	std::cout << ptr2->getNome() << std::endl;
	std::cout << *ptrInt << std::endl;
	std::cout << *ptrIntIniciado << std::endl;
	return 0;



	return 0;
}
