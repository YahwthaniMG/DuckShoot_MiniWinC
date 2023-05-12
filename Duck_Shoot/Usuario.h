std::string printAndinputKeys(int x, int y, std::string s){
  int z = s.length() * 11;
  char nombre[50];
  int i=0;
  nombre[i]='|'; // para que se vea el cursor
  nombre[i+1]='\0';
  bool sigue=true;
  color(NEGRO);
  texto(x,y,s);
  texto(x+z,y,nombre);
  refresca();
  do{
		int t = tecla(); //funcion de miniwin lee un caracter
		if(t==NINGUNA){
		}
		else{
			if(t==RETURN){
	            nombre[i]='\0';
	            sigue=false;
			}else{
				if(t==IZQUIERDA){
					if(i>1)
		               	i--;
		            else
		            	i=0;
			  	}else{
					if(t==ESPACIO){
						nombre[i]=' ';
					}else{
			  			nombre[i]=t;	
					}
					i++;
				}			
			    nombre[i]='|'; // para que se vea el cursor
				nombre[i+1]='\0';
				texto(x,y,s);
				texto(x+z,y,nombre);
				refresca();
			}
		}
		espera(30);
	}while(sigue);
	// podemos convertir un arreglos de chars a strings 
	// por medio de su constructor
    std::string escribiste(nombre);  
	return escribiste;
}
