#include "Agenda.h"
#include<iostream>
#include<cstdlib>


using namespace std;

Pessoa::Pessoa(int i, string n){
  this -> idade = i;
  this -> nome = n;
}

 void Pessoa::ler(){
    //cin >> idade >> nome;
 }

 void Pessoa::mostrar(){
   cout << nome << "," << idade << endl;
 }

Pessoa::Pessoa(){
  nome = "indefinido";
  idade = 0;
  //cout << idade << endl << nome << endl;
}

Amigo::Amigo(){
  anv = "indefinido";
   //cout << anv << endl;
}

void Amigo::ler(){
  Pessoa::ler();
  cout << "Insira a data:";
  cin >> anv;
}

void Amigo::mostrar(){
  cout << anv <<endl;
}

Conhecido::Conhecido(){
  email = "indefinido";
   //cout << email << endl;
}

void Conhecido::ler(){
  Pessoa::ler();
  cout <<"Insira o email:";
  cin >> email;
}

void Conhecido::mostrar(){
  //Pessoa::mostrar();
  cout << email << endl;
}

Agenda::Agenda(int q){
  
  this -> qtd = q;
  agnd [qtd];
  
  unsigned seed = time(NULL);
  srand(seed);

for(int i = 0; i < qtd; i++){
  int random = (rand()%2);

    if(random == 0){
      Amigo A1;
      agnd.push_back(A1);
      amg++;
      A1.ler();
    }
   else{
     Conhecido C1;
     agnd.push_back(C1);
     cnd++;
     C1.ler();
   }
}
}

void Agenda::addinformacoes(){

  for(int j = 0; j < qtd; j++){
    agnd [j].ler();
  }
}

void Agenda::imprimeaniversarios(){

  for(int a = 0; a < qtd; a++){
    agnd[a].mostrar();

  }
}

void Agenda::imprimeEmail(){

  for(int b = 0; b < qtd; b++){
    agnd[b].mostrar();
    
  }
}

void Agenda::imprime(){
  cout << "A quantidade de amigos é:" << amg << endl;
 cout << "A quantidade de conhecidos é:" << cnd << endl;

}





