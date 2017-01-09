#include<iostream>
#include"Noeud.h"
using namespace std;

Noeud creation(){
  int* cle=NULL;
  Noeud arbre_vide(cle);
  cout<<arbre_vide.Get_cle()<<endl;
	return arbre_vide;
}

void verification(Noeud arbre){
	if (arbre.Get_cle() == NULL and arbre.Get_fg() == NULL and arbre.Get_fd() == NULL) {
    cout<< "L'arbre est vide" <<endl;
	}
	else {
		cout<< "L'arbre n'est pas vide" <<endl;
	}
}





int main(){
  creation();
  cout<<"coucou"<<endl;
	verification(creation());
}
