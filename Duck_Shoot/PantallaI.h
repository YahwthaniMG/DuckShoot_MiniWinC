class Ranking{
	private:
		float P;
		float _P;
		float O;
		float _O;
		//titulo
		float U;
		float _U;
		float V;
		float _V;
		float B;
		float UU;
		
	public:
		Ranking(float, float, float, float);
		Ranking(float,float, float,float,float);
		void pintaR();
		void pintarT();
	
};

Ranking::Ranking(float g, float h, float j, float k){
	P=g;
	_P=h;
	O=j;
	_O=k;
	pintaR();
	
}

void Ranking::pintaR(){
	color(NEGRO);
	rectangulo_lleno(P-20,O+10,P+_P+20,O+_O+10);
	color(BLANCO);
	texto(P+35,O+20,"Jugadores.");
	texto(P+170, O+20,"Clasificacion.");
	texto(P+25, O+40,"1- LUCAS11.");
	texto(P+170,O+40,"3600 puntos.");
	texto(P+25, O+60,"2- MARILOVE.");
	texto(P+170,O+60,"3450 puntos.");
	texto(P+25, O+80,"3- MIKEDEAD.");
	texto(P+170,O+80,"3200 puntos.");
	texto(P+25, O+100,"4- TOXIONE.");
	texto(P+170,O+100,"2800 puntos.");
	texto(P+25, O+120,"5- BETTYLAFEA.");
	texto(P+170,O+120,"2300 puntos.");
}

Ranking::Ranking(float c, float v, float b, float n, float m){
	U=c;
	_U=v;
	V=b;
	_V=n;
	B=m;
	UU=_U+B;
	pintarT();
	
}

void Ranking::pintarT(){
	color(NEGRO);
	//R
	linea(U,V,U,V+_V);
	linea(U,V,U+_U,V);
	linea(U,V+(.5*_V),U+_U,V+(.5*_V));
	linea(U+_U,V,U+_U,V+(.5*_V));
	linea(U,V+(.5*_V),U+_U,V+_V);
	
	//A
	linea(U+UU,V,U+UU,V+_V);
	linea(U+UU+_U,V,U+UU+_U,V+_V);
	linea(U+UU,V,U+UU+_U,V);
	linea(U+UU,V+(.5*_V),U+UU+_U,V+(.5*_V));
	
	//N
	linea(U+2*UU,V,U+2*UU,V+_V);
	linea(U+2*UU+_U,V,U+2*UU+_U,V+_V);
	 linea(U+2*UU,V,U+2*UU+_U,V+_V);
	
	//K
	linea(U+3*UU,V,U+3*UU,V+_V);
	linea(U+3*UU,V+(.5*_V),U+3*UU+_U,V+_V);
	linea(U+3*UU,V+(.5*_V),U+3*UU+_U,V);
	
	//I
	linea(U+4*UU,V,U+4*UU+_U,V);
	linea(U+4*UU,V+_V,U+4*UU+_U,V+_V);
	linea(U+4*UU+(.5*_U),V,U+4*UU+(.5*_U),V+_V);
	
	//N
	linea(U+5*UU,V,U+5*UU,V+_V);
	linea(U+5*UU+_U,V,U+5*UU+_U,V+_V);
	linea(U+5*UU,V,U+5*UU+_U,V+_V);
	
	//G
	linea(U+6*UU,V,U+6*UU,V+_V);
	linea(U+6*UU,V,U+6*UU+_U,V);
	linea(U+6*UU,V+_V,U+6*UU+_U,V+_V);
	linea(U+6*UU+_U,V+_V,U+6*UU+_U,V+(.5*_V));
	linea(U+6*UU+(.5*_U),V+(.5*_V),U+6*UU+_U,V+(.5*_V));
	
}

class BotI{
	private:
		float Q;
		float _Q;
		float L;
		float _L;
		bool clic;
	
	public:
		BotI(float,float,float,float,bool);
		BotI(float,float,float,float);
		void DibBI();
		void DibuBIN();
		void setClic(bool);
	
};

BotI::BotI(float E, float EE, float EEE, float EEEE, bool xd){
 	Q=E;
 	_Q=EE;
 	L=EEE+10;
 	_L=EEEE;
 	clic=xd;
 	DibBI();
 	
 }
 
 
 void BotI::DibBI(){
 	
 	if(clic==false){
 		color(BLANCO);
 		linea(Q,L,Q+_Q,L);
 		linea(Q,L,Q,L+_L);
 		color(NEGRO);
 		linea(Q,L+_L,Q+_Q,L+_L);
 		linea(Q+_Q,L+_L,Q+_Q,L);
 		texto(Q+(.25*_Q),L+(.25*_L),"Aceptar");
	 }
 	else{
 		color(NEGRO);
 		linea(Q,L,Q+_Q,L);
 		linea(Q,L,Q,L+_L);
 		color(BLANCO);
 		linea(Q,L+_L,Q+_Q,L+_L);
 		linea(Q+_Q,L+_L,Q+_Q,L);
 		color(NEGRO);
 		texto(Q+(.25*_Q),L+(.25*_L),"Aceptar");
	 }
 	
 }

BotI::BotI(float E1, float E2, float E3, float E4){
 	Q=E1;
 	_Q=E2;
 	L=E3;
 	_L=E4;
 	DibuBIN();
 	
 }
 
void BotI::DibuBIN(){
	    color(NEGRO);
 		linea(Q,L,Q+_Q,L);
 		linea(Q,L,Q,L+_L);
 		linea(Q,L+_L,Q+_Q,L+_L);
 		linea(Q+_Q,L+_L,Q+_Q,L);
 		texto(Q+(.25*_Q),L+(.25*_L),"Contraseña:");
 		
		 
		linea(Q,L-60,Q+_Q,L-60);
 		linea(Q,L-60,Q,L+_L-60);
 		linea(Q,L+_L-60,Q+_Q,L+_L-60);
 		linea(Q+_Q,L+_L-60,Q+_Q,L-60);
 		texto(Q+(.25*_Q),L+(.25*_L)-60,"Nombre:");
		 
		 
		 
		 
 		
}

void BotI::setClic(bool fd){
	clic=fd;
	DibBI();
}

