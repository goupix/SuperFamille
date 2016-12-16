class Noeud {

	private :
		int* Cle;
		Noeud* fg;
		Noeud* fd;


	public :
		

		void new_ng()
		Noeuds(int* cle);


		//getters
		int* Get_Cle();
		Noeud* Get_fg();
		Noeud* Get_fd();

		//setters
		void Set_Cle(int* a);
		void Set_fg(Noeud* a);
		void Set_fd(Noeud* a);


