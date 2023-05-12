class Letras{
	private:
		float X1;
		float _X;
		float X2;
		float Y1;
		float _Y;
		float Y2;
		float _;
		float x3;
		float x4;
		float x5;
		float y4;
		float y5;
		
	public:
		Letras(float,float,float,float);
		void dibujarN();
		
	
};

 Letras::Letras(float w, float z, float a, float b){
 	X1=w;
 	_X=z;
 	X2=X1+_X;
 	x3=_X/3;
 	x4=_X/4;
 	x5=_X/5;
 	_=_X+20;
 	Y1=a;
 	_Y=b;
 	Y2=Y1+_Y;
 	y4=_Y/4;
 	y5=_Y/5;
 	dibujarN();
 }
 
 void Letras::dibujarN(){
 	//D
 	color(BLANCO);
 	rectangulo_lleno(X1,Y1,X2,Y2);
 	color(NEGRO);
 	rectangulo_lleno(X1+x3,Y1+y5,X1+2*x3,Y2-y5);
 	//U
 	rectangulo_lleno(X1+_,Y1,X1+_+x3,Y2);
 	rectangulo_lleno(X1+_+2*x3,Y1,X1+_+_X,Y2);
 	rectangulo_lleno(X1+_,Y1+3*y4,X1+_+_X,Y2);
 	//C
 	color(BLANCO);
 	rectangulo_lleno(X1+2*_,Y1,X1+2*_+x3,Y2);
 	rectangulo_lleno(X1+2*_,Y1+3*y4,X1+2*_+_X,Y2);
 	rectangulo_lleno(X1+2*_,Y1,X1+2*_+_X,Y1+y4);
 	//K
 	color(NEGRO);
 	rectangulo_lleno(X1+3*_,Y1,X1+3*_+x4,Y2);
 	rectangulo_lleno(X1+3*_+x4,Y1+2*y5,X1+3*_+2*x4,Y1+3*y5);
 	rectangulo_lleno(X1+3*_+2*x4,Y1+3*y5,X1+3*_+3*x4,Y1+4*y5);
 	rectangulo_lleno(X1+3*_+3*x4,Y1+4*y5,X1+3*_+4*x4,Y1+5*y5);
 	rectangulo_lleno(X1+3*_+2*x4,Y1+y5,X1+3*_+3*x4,Y1+2*y5);
 	rectangulo_lleno(X1+3*_+3*x4,Y1,X1+3*_+4*x4,Y1+y5);
 	
 	//S
 	rectangulo_lleno(X1+5*_,Y1,X1+5*_+_X,Y1+y5);
 	rectangulo_lleno(X1+5*_,Y1+4*y5,X1+5*_+_X,Y1+5*y5);
 	rectangulo_lleno(X1+5*_,Y1+2*y5,X1+5*_+_X,Y1+3*y5);
 	rectangulo_lleno(X1+5*_,Y1,X1+5*_+x5,Y1+3*y5);
 	rectangulo_lleno(X1+5*_+4*x5,Y1+3*y5,X1+5*_+_X,Y2);
 	//H
 	rectangulo_lleno(X1+6*_,Y1,X1+6*_+x4,Y2);
 	rectangulo_lleno(X1+6*_+3*x4,Y1,X1+6*_+_X,Y2);
 	rectangulo_lleno(X1+6*_,Y1+2*y5,X1+6*_+_X,Y1+3*y5);
 	//O
 	color(BLANCO);
 	rectangulo_lleno(X1+7*_,Y1,X1+7*_+_X+20,Y2);
 	color(NEGRO);
 	rectangulo_lleno(X1+7*_+y4,Y1+y4,X1+7*_+3*y4,Y2-y4);
 	//O
 	color(BLANCO);
 	rectangulo_lleno(X1+8*_+20,Y1,X1+8*_+_X+40,Y2);
 	color(NEGRO);
 	rectangulo_lleno(X1+8*_+y4+20,Y1+y4,X1+8*_+3*y4+20,Y2-y4);
 	//T
 	rectangulo_lleno(X1+9*_+40,Y1,X1+9*_+40+_X,Y1+y4);
 	rectangulo_lleno(X1+9*_+40+x3,Y1,X1+9*_+40+2*x3,Y2);
 	
 }
 
 class BotonI{
 	private:
 		float W;
 		float _W;
 		float R;
 		float _R;
 		bool pres;
 		
 	public:
 		BotonI(float,float,float,float,bool);
 		void dibuBI();
 		void setPress(bool);
 };
 
 BotonI::BotonI(float a, float s, float d, float f, bool xp){
 	W=a;
 	_W=s;
 	R=d;
 	_R=f;
 	pres=xp;
 	dibuBI();
 }
 
 void BotonI::dibuBI(){
 	if(pres==false){
 		color(BLANCO);
 		linea(W,R,W+_W,R);
 		linea(W,R,W,R+_R);
 		color(NEGRO);
 		linea(W,R+_R,W+_W,R+_R);
 		linea(W+_W,R+_R,W+_W,R);
 		texto(W+(.25*_W),R+(.25*_R),"INICIAR");
	 }
 	else{
 		color(NEGRO);
 		linea(W,R,W+_W,R);
 		linea(W,R,W,R+_R);
 		color(BLANCO);
 		linea(W,R+_R,W+_W,R+_R);
 		linea(W+_W,R+_R,W+_W,R);
 		color(NEGRO);
 		texto(W+(.25*_W),R+(.25*_R),"INICIAR");
	 }
 }
 
 void BotonI::setPress(bool px){
	pres=px;
	dibuBI();
}
 
 
 
 
 
 
 
