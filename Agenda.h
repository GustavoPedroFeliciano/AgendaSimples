#include <iostream>
#include<vector>

using namespace std;

class Pessoa{

protected:
  string nome;
  int idade;

public:

Pessoa(int i, string n);
Pessoa();
void ler();
void mostrar();
};

class Amigo : public Pessoa {

protected: 
string anv;

public:

Amigo();
void ler();
void mostrar();
};

class Conhecido : public Pessoa {

protected:
string email;
string aux;
public:

Conhecido();
void ler();
void mostrar();

};

class Agenda{

protected:
int qtd;
int amg = 0;
int cnd = 0;
  

public:

vector<Pessoa> agnd;
Agenda(int q);
void addinformacoes();
void imprimeaniversarios();
void imprimeEmail();
void imprime();
};


