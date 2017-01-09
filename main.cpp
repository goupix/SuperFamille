
#include<iostream>
#include"Noeud.h"
using namespace std;

Noeud creation(){
  int* cle=NULL;
  Noeud arbre_vide(cle);
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

Noeud* recherche(int* r,Noeud p){
  Noeud* pN = &p;
  Noeud N(NULL);
  bool t = false; 
  while(t==false){
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

void insertion(int* cle, Noeud N){
  Noeud Noeud_pere=*recherche(cle,N);

  if(*cle<*Noeud_pere.Get_cle()){
    Noeud_pere.new_ng(cle);  
  }
  else{
    Noeud_pere.new_nd(cle);
  }
 
}

int main(){
  Noeud racine=creation();
  int a=8;
  Noeud* fin= recherche(&a,racine);
  cout<<fin<<endl;
}
