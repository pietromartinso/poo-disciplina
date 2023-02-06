#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	int* array{ new int[10] };//vetor de 10 posições
	for (int i = 0; i < 10; i++) {
		array[i] = i;
		std::cout << array[i] << std::endl;
	}
	return 0;

}
