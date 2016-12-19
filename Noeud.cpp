#include<iostream>
#include"Noeud.h"

class Noeud{

  Noeud(int* cle){
    this<-cle=cle;
	Noeud* fg=NULL;
	Noeud* fd=NULL;
  }
  int* Noeud:: Get_cle(){
	return cle;

  }
  Noeud* Noeud:: Get_fg(){
    return fg;
  }
  Noeud* Noeud:: Get_fd(){
    return fd;
  }
  void Noeud:: Set_cle(int*a){
    cle=a;
  }
  void Noeud:: Set_fg(Noeud* a){
    fg=a;
  }
  void Noeud:: Set_fd(Noeud* a){
    fd=a;
  }

  Noeud Noeud:: new_nd(int* a){
    Noeud objet(a);
    fd=&objet;
    return objet;

  }

  Noeud Noeud:: new_ng(int* a){
    Noeud objet(a);
    fg=&objet;
    return objet;
  }


}
