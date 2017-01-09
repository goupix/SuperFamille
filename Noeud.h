class Noeud {

	protected :
		int* cle;
		Noeud* fg;
		Noeud* fd;


	public :
		

		void new_ng(int* a);
        void new_nd(int* a);
		Noeud(int* cle);


		//getters
		int* Get_cle();
		Noeud* Get_fg();
		Noeud* Get_fd();

		//setters
		void Set_cle(int* a);
		void Set_fg(Noeud* a);
		void Set_fd(Noeud* a);

};
