#include<iostream>
#include"Noeud.h"

using namespace std;

Noeud creation(){
  int* cle=NULL;
  Noeud arbre_vide(cle);
  return arbre_vide;
}

Noeud* recherche(int* r,Noeud p){
  Noeud* pN = &p;
  Noeud N(NULL);
  bool t = false; 
  while(r==false){
    N=*pN;
    if(*(N.Get_cle())==*r){
      t=true;
      cout<<"Le noeud qu'on recherche existe et a été atteint."<<endl;
      return pN;
    } else if((*(N.Get_cle())<*r)and(N.Get_fg()!=NULL)){
      pN=N.Get_fg();
    } else if((*(N.Get_cle())>*r)and(N.Get_fd()!=NULL)){
      pN=N.Get_fd();
    } else {
      t=true;
      cout<<"Le noeud qu'on recherche n'existe pas, le plus proche a été renvoye."<<endl;
      return pN;
    }
  }
}

int main(){
  Noeud pere=creation();
  
}
