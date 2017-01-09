#include<iostream>
#include"Noeud.h"
using namespace std;

void creation(){
  int* cle=NULL;
  Noeud arbre_vide(cle);
  cout<<arbre_vide.Get_cle()<<endl;
}





int main(){
  creation();
  cout<<"coucou"<<endl;
  
}
