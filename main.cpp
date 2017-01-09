#include<iostream>
#include"Noeud.h"
using namespace std;

Noeud creation(){
  int* cle=NULL;
  Noeud arbre_vide(cle);
  return arbre_vide;
}

void insertion(cle){
  Noeud_pere=*recherche(cle);
  if(cle<*Noeud_pere.cle){
    Noeud_pere.new_ng(cle);  
  }
  else{
    Noeud_pere.new_nd(cle);
  }
 
}



int main(){
  creation();
 
  
}
