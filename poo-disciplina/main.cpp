#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){

	int** mat = new int*[10];

	int k = 1;

	for (int i = 0; i < 10; i++) {
		mat[i] = new int[10];
		for (int j = 0; j < 10; j++) {
			mat[i][j] = k;
			k++;
			std::cout << mat[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	delete[] mat;
	return 0;

}
