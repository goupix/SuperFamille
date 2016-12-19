#include<iostream>
#include"Noeud.h"


void creation(int taille,Noeud* pa){
  int* cle=NULL;
  for(int i=0; i<taille; i++){
    pa[i]=Noeud(cle);
    pa[i+1]=pa[i].new_ng(cle);
    pa[i+2]=pa[i].new_nd(cle);
  }



}

int main(){
  Noeud arbre[];
  creation(6, &arbre);
  std::cout<<arbre[0].cle<<std::endl;
  
}
