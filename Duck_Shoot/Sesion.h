class Sesion{
	private:
	float F;
	float _F;
	float G;
	float _G;
	bool clic;
	
		
	public:
		Sesion(float, float, float, float);
		void IniciarS();
		void setpres(bool);
};

Sesion::Sesion(float a, float _a, float b, float _b){
	F=a;
	_F=_a;
	G=b;
	_G=_b;
	IniciarS();	
	
}

void Sesion::IniciarS(){
		if(clic==false){
 		color(BLANCO);
 		linea(F,G,F+_F,G);
 		linea(F,G,F,G+_G);
 		color(NEGRO);
 		linea(F,G+_G,F+_F,G+_G);
 		linea(F+_F,G+_G,F+_F,G);
 		texto(F+(.15*_F),G+(.25*_G),"Registrarse");
	 }
 	else{
 		color(NEGRO);
 		linea(F,G,F+_F,G);
 		linea(F,G,F,G+_G);
 		color(BLANCO);
 		linea(F,G+_G,F+_F,G+_G);
 		linea(F+_F,G+_G,F+_F,G);
 		color(NEGRO);
 		texto(F+(.15*_F),G+(.25*_G),"Registrarse");
	 }
	
	
	
}


void Sesion::setpres(bool fd){
	clic=fd;
	IniciarS();
	
}






