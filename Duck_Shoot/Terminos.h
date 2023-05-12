class Terminos{
	private:
		float S;
		float _S;
		float T;
		float _T;
		float F;
		float SF;
	public:
		Terminos(float, float, float, float, float);
		void EscrT();
		
	
};
 
Terminos::Terminos(float t1, float t2, float t3, float t4, float t5){
	S=t1;
	_S=t2;
	T=t3;
	_T=t4;
	F=t5;
	SF=_S+F;
	EscrT();
	
}

void Terminos::EscrT(){
	color(NEGRO);
	//T
	linea(S,T,S+_S,T);
	linea(S+.5*_S,T,S+.5*_S,T+_T);
	
	//E
	linea(S+SF,T,S+SF+_S,T);
	linea(S+SF,T+.5*_T,S+SF+_S,T+.5*_T);
	linea(S+SF,T+_T,S+SF+_S,T+_T);
	linea(S+SF,T,S+SF,T+_T);
	
	//R
	linea(S+2*SF,T,S+2*SF+_S,T);
	linea(S+2*SF,T,S+2*SF,T+_T);
	linea(S+2*SF,T+.5*_T,S+2*SF+_S,T+.5*_T);
	linea(S+2*SF+_S,T,S+2*SF+_S,T+.5*_T);
	linea(S+2*SF,T+.5*_T,S+2*SF+_S,T+_T);
	
	//M
	linea(S+3*SF,T,S+3*SF,T+_T);
	linea(S+3*SF+_S,T,S+3*SF+_S,T+_T);
	linea(S+3*SF,T,S+3*SF+.5*_S,T+.5*_T);
	linea(S+3*SF+.5*_S,T+.5*_T,S+3*SF+_S,T);
	
	//I
	linea(S+4*SF,T,S+4*SF+_S,T);
	linea(S+4*SF+.5*_S,T,S+4*SF+.5*_S,T+_T);
	linea(S+4*SF,T+_T,S+4*SF+_S,T+_T);
	
	//N
	linea(S+5*SF,T,S+5*SF,T+_T);
	linea(S+5*SF+_S,T,S+5*SF+_S,T+_T);
	linea(S+5*SF,T,S+5*SF+_S,T+_T);
	
	//O
	linea(S+6*SF,T,S+6*SF,T+_T);
	linea(S+6*SF+_S,T,S+6*SF+_S,T+_T);
	linea(S+6*SF,T,S+6*SF+_S,T);
	linea(S+6*SF,T+_T,S+6*SF+_S,T+_T);
	
	//S
	linea(S+7*SF,T,S+7*SF+_S,T);
    linea(S+7*SF,T+_T,S+7*SF+_S,T+_T);
	linea(S+7*SF,T+.5*_T,S+7*SF+_S,T+.5*_T);
	linea(S+7*SF,T,S+7*SF,T+.5*_T);
	linea(S+7*SF+_S,T+.5*_T,S+7*SF+_S,T+_T);
	
	texto(S+3*SF,T+2*_T, "Para poder jugar este videojuego, debe aceptar nuestros términos y condiciones.");
	texto(S+3*SF,T+2.4*_T, "Se requiere acceso a sus contactos.");
	texto(S+3*SF,T+2.8*_T, "Se necesita permiso para grabar su audio en todo momento.");
	texto(S+3*SF,T+3.2*_T, "Se necesita acceso a su ubicación actual.");
	texto(S+3*SF,T+3.6*_T, "Se necesita acceso a su cuenta de banco y su contraseña.");
	texto(S+3*SF,T+4*_T, "Todos estos requisitos son para una tarea, sin fines de lucro :)");
	
	
	//R
	linea(S,T+300,S+_S,T+300);
	linea(S,T+300,S,T+300+_T);
	linea(S,T+300+.5*_T,S+_S,T+300+.5*_T);
	linea(S+_S,T+300,S+_S,T+300+.5*_T);
	linea(S,T+300+.5*_T,S+_S,T+300+_T);
	
	//E
	linea(S+SF,T+300,S+SF+_S,T+300);
	linea(S+SF,T+.5*_T+300,S+SF+_S,T+300+.5*_T);
	linea(S+SF,T+_T+300,S+SF+_S,T+_T+300);
	linea(S+SF,T+300,S+SF,T+300+_T);
	
	//G
	linea(S+2*SF,T+300,S+2*SF+_S,T+300);
	linea(S+2*SF,T+300,S+2*SF,T+300+_T);
	linea(S+2*SF,T+300+_T,S+2*SF+_S,T+_T+300);
	linea(S+2*SF+_S,T+300+_T,S+2*SF+_S,T+300+.5*_T);
	linea(S+2*SF+.5*_S,T+300+.5*_T,S+2*SF+_S,T+300+.5*_T);
	
	//L
	linea(S+3*SF,T+300,S+3*SF,T+300+_T);
	linea(S+3*SF,T+300+_T,S+3*SF+_S,T+300+_T);
	
	//A
	linea(S+4*SF,T+300,S+4*SF,T+300+_T);
	linea(S+4*SF+_S,T+300,S+4*SF+_S,T+300+_T);
	linea(S+4*SF,T+300,S+4*SF+_S,T+300);
	linea(S+4*SF,T+300+.5*_T,S+4*SF+_S,T+300+.5*_T);
	
	//S
	linea(S+5*SF,T+300,S+5*SF+_S,T+300);
    linea(S+5*SF,T+300+_T,S+5*SF+_S,T+300+_T);
	linea(S+5*SF,T+300+.5*_T,S+5*SF+_S,T+300+.5*_T);
	linea(S+5*SF,T+300,S+5*SF,T+300+.5*_T);
	linea(S+5*SF+_S,T+300+.5*_T,S+5*SF+_S,T+300+_T);
	
	
	texto(S+3*SF,T+400, "El jugador posee 5 vidas, estas se pierden cuando no le atinas a un pato.");
	texto(S+3*SF,T+425, "Para que un tiro sea valido debes disparar al cuerpo de pato.");
	texto(S+3*SF,T+450, "La cabeza y la cola del pato no cuentan.");
	texto(S+3*SF,T+475, "Esto se realiza para no fomentar conductas psicópatas.");
	texto(S+3*SF,T+500, "Este juego no es apto para el público sensible.");
	
}

class Comenzar{
	private:
		float E;
		float _E;
		float F;
		float _F;
		bool press;
	
	public:
		Comenzar(float,float,float,float,bool);
		void DibC();
		void setpress(bool);
};
Comenzar::Comenzar(float U1, float U2, float U3, float U4, bool prx){
 	E=U1;
 	_E=U2;
 	F=U3;
 	_F=U4;
 	press=prx;
 	DibC();
 	
 }
 
 
 void Comenzar::DibC(){
 	
 	if(press==false){
 		color(BLANCO);
 		linea(E,F,E+_E,F);
 		linea(E,F,E,F+_F);
 		color(NEGRO);
 		linea(E,F+_F,E+_E,F+_F);
 		linea(E+_E,F+_F,E+_E,F);
 		texto(E+(.25*_E),F+(.25*_F),"Comenzar");
	 }
 	else{
 		color(NEGRO);
 		linea(E,F,E+_E,F);
 		linea(E,F,E,F+_F);
 		color(BLANCO);
 		linea(E,F+_F,E+_E,F+_F);
 		linea(E+_E,F+_F,E+_E,F);
 		color(NEGRO);
 		texto(E+(.25*_E),F+(.25*_F),"Comenzar");
	 }
 	
 }

void Comenzar::setpress(bool fx){
	press=fx;
	DibC();
}

