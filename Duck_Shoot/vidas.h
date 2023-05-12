class Corazones{
	private:
		int ida;
	
	public:
		Corazones(float);
		void Barra_Corazones();
};

Corazones(float cor){
	vida=cor;
	Barra_Corazones();
}

void Corazones::Corazones(){
	color(AZUL);
	linea(800,560,840,560);
	linea(800,560,800,580);
	linea(840,560,840,580);
	linea(800,580,840,580);
	texto(810,570,"Vidas: ");
	texto(820,570, std::to_string(vida));
	
}
