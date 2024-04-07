#include <iostream>
#include <list>


#pragma region Classe Aluno
	class Aluno {
	private:
		int id;
		std::string nome;
	public:
		Aluno(int id, std::string nome) {
			this->id = id;
			this->nome = nome;
		}

		std::string getName();
	};

	std::string Aluno::getName() {
		return nome;
	}

#pragma endregion


class System {
private:
	int new_id = 0;
	std::list<Aluno> alunos = {};
public:
	void insertAluno(std::string);
	void displayAlunos();
};

void System::insertAluno(std::string nome) {
	new_id++;
	Aluno aluno(new_id, nome);
	alunos.push_back(aluno);
}

void System::displayAlunos() {
	std::cout << "*ALUNOS MATRICULADOS" << std::endl;
	for (Aluno aluno : alunos) {
		std::cout << aluno.getName() << std::endl;
	}
}

int main() {
	System sistema;
	sistema.insertAluno("Jose");
	sistema.insertAluno("Maria");
	sistema.insertAluno("Chiquinha");
	sistema.insertAluno("Zeca");

	sistema.displayAlunos();

	return EXIT_SUCCESS;
}