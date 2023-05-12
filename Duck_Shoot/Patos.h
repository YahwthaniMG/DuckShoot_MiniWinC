class PatosN{
	private:
		float X;
		float _X;
		float X2;
		float X4;
		float _X_;
		float Y;
		float _Y;
		float Y2;
		float Y3;
		float _Y_;
		
		
	public:
		PatosN(float,float,float,float);
		void PintarP();
};

PatosN::PatosN(float x1, float _x, float y, float _y){
	X=x1;
	_X=_x;
	X2=X+_X;
	X4=_X/4;
	_X_=_X+100;
	Y=y;
	_Y=_y;
	Y2=Y+_Y;
	Y3=_Y/3;
	_Y_=_Y+100;
	
	PintarP();
}

void PatosN::PintarP(){
	
		for(int i=0; i<1; i++){	
			color_rgb(255,230,0);
			//Pato 1
			rectangulo_lleno(X+200*i,Y,X2+200*i,Y2); //cuerpo
			rectangulo_lleno(X-2*X4+200*i,Y,X+200*i,Y+Y3); //cola
			rectangulo_lleno(X-X4+200*i,Y,X+200*i,Y-Y3); //cola
			rectangulo_lleno(X-X4+200*i,Y+Y3,X+200*i,Y+2*Y3); //cola
			rectangulo_lleno(X2-X4+200*i,Y,X2+2*X4+200*i,Y-2*Y3); //Cabeza
			color(NEGRO);
			rectangulo_lleno(X2+.75*X4+200*i,Y-.75*Y3,X2+1.25*X4+200*i,Y-1.25*Y3); //ojo
			color_rgb(255,128,0);
			rectangulo_lleno(X2+2*X4+200*i,Y-.60*Y3,X2+2.9*X4+200*i,Y-.9*Y3); //boca
			color(NEGRO);
			linea(X+X4+200*i,Y+.7*Y3,X2-X4+200*i,Y+.7*Y3);
			linea(X+X4+200*i,Y+.7*Y3,X+X4+200*i,Y+1.4*Y3);
			linea(X+X4+200*i,Y+1.4*Y3,X+1.5*X4+200*i,Y+1.4*Y3);
			linea(X+1.5*X4+200*i,Y+1.4*Y3,X+1.5*X4+200*i,Y+1.9*Y3);
			linea(X+1.5*X4+200*i,Y+1.9*Y3,X+2.2*X4+200*i,Y+1.9*Y3);
			linea(X+2.2*X4+200*i,Y+1.9*Y3,X+2.2*X4+200*i,Y+2.3*Y3);
			linea(X+2.2*X4+200*i,Y+2.3*Y3,X+3*X4+200*i,Y+2.3*Y3);

}

}



class Nombre{
	private:
		float G;
		float _G;
		float H;
		float _H;
		std::string nombre;
		
	public:
		Nombre(float,float,float,float,std::string);
		void EscN();
	
};

Nombre::Nombre(float r1,float r2, float r3, float r4,std::string  name){
	G=r1;
	_G=r2;
	H=r3;
	_H=r4;
	nombre=name;
	EscN();
	
}

void Nombre::EscN(){
	color(NEGRO);
 		linea(G,H,G+_G,H);
 		linea(G,H,G,H+_H);
 		linea(G,H+_H,G+_G,H+_H);
 		linea(G+_G,H+_H,G+_G,H);
 		texto(G+(.25*_G),H+(.25*_H),"Nombre: "+nombre);
	
}

class Puntos{
	private:
		float K;
		float _K;
		float M;
		float _M;
		int score;
	public:
		Puntos(float,float,float,float);
	
		void EscP();
};



Puntos::Puntos(float n1,float n2, float n3, float n4){
	K=n1;
	_K=n2;
	M=n3;
	_M=n4;
	score=0;
	EscP();
	
}

void Puntos::EscP(){
	color(NEGRO);
 		linea(K,M,K+_K,M);
 		linea(K,M,K,M+_M);
 		linea(K,M+_M,K+_K,M+_M);
 		linea(K+_K,M+_M,K+_K,M);
 		texto(K+(.25*_K),M+(.25*_M),"Score:");
	
}


 class BotonM{
 	private:
 		float O;
 		float _O;
 		float P;
 		float _P;
 		bool presion;
 		
 	public:
 		BotonM(float,float,float,float,bool);
 		void dibuBM();
 		void setPress(bool);
 };
 
 BotonM::BotonM(float a, float s, float d, float f, bool xp){
 	O=a;
 	_O=s;
 	P=d;
 	_P=f;
 	presion=xp;
 	dibuBM();
 }
 
 void BotonM::dibuBM(){
 	if(presion==false){
 		color(BLANCO);
 		linea(O,P,O+_O,P);
 		linea(O,P,O,P+_P);
 		color(NEGRO);
 		linea(O,P+_P,O+_O,P+_P);
 		linea(O+_O,P+_P,O+_O,P);
 		texto(O+(.25*_O),P+(.25*_P),"MENU");
	 }
 	else{
 		color(NEGRO);
 		linea(O,P,O+_O,P);
 		linea(O,P,O,P+_P);
 		color(BLANCO);
 		linea(O,P+_P,O+_O,P+_P);
 		linea(O+_O,P+_P,O+_O,P);
 		color(NEGRO);
 		texto(O+(.25*_O),P+(.25*_P),"MENU");
	 }
 }
 
 void BotonM::setPress(bool px){
	presion=px;
	dibuBM();
}
 
 
