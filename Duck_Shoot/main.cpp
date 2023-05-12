#include "miniwin.h"
#include <math.h>
#include <iostream>
#include <string.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace miniwin;
#include "PantallaCarga.h"
#include "PantallaI.h"
#include "Terminos.h"
#include "Patos.h"
#include "Usuario.h"
#include "Sesion.h"


//Variables G
	std::string NewU;
	std::string newesp="     ";
	std::string NewC;
	std::string newclave="     ";
//Variables Gl
	std::string usuario;
	std::string nose="     ";
	std::string contra;
	std::string clave="     ";
	
	int puntos=0;
	char punS[9];
	

void fondo(){
	vredimensiona(1000, 700);
	color_rgb(255,230,0);
	rectangulo_lleno(5,5,995,695);
}

void fondo2(){
	borra();
	vredimensiona(1000, 700);
	color_rgb(255,230,0);
	rectangulo_lleno(5,5,995,695);
}

void fondo3(){
	borra();
	vredimensiona(1000, 700);
	color_rgb(205,205,205);
	rectangulo_lleno(5,5,995,695);
}

void sesion(){
	borra();
	fondo();
	Ranking puntJ(350,300,100,200);
	Ranking Titulo(330,40,45,52,10);
	
}

void sesion2(){
	fondo();
	Ranking puntJ(350,300,100,200);
	Ranking Titulo(330,40,45,52,10);
	
}

void sesion3(){
	sesion2();
	BotI nUsu (320,320,450,40);
	BotI newAcp (455,90,550,40,false);
	refresca();
	NewU= printAndinputKeys(320+8+.25*320,450-60+.25*40,newesp);
	NewC= printAndinputKeys(320+25+.25*320,450+.25*40,newclave);
		
}

void comproUs(){
	bool sus=true;
	float xx,yy;
	float Xx=455;
	float Yy=550;
	float XX=545;
	float YY=590;
	while(sus){
	raton(xx,yy);
	xx=raton_x();
	yy=raton_y();
  	if(raton_boton_izq()){
  		if(xx>Xx && xx<XX){
  			if(yy>Yy && yy<YY){
  				sesion();
  				color(BLANCO);
  				texto(375,260,"+999-");
				texto(420,260,NewU);
				texto(520,260,"0 puntos.");
				refresca();
				espera(1000);
				sus=false;
}
}
}
}
}

void usuarioS(){	
	sesion();	
	BotI innom (320,320,450,40);
	BotI inacep (455,90,500,40,false);
	refresca();
	usuario= printAndinputKeys(320+8+.25*320,450-60+.25*40,nose);
	contra= printAndinputKeys(320+25+.25*320,450+.25*40,nose);
}


void termino1(){
	fondo();
	Terminos term(100,50,100,60,10);
}

void patoAla(){
	fondo3();
	Nombre jugador(200,250,550,40,usuario);
	Puntos score(550,200,550,40);
	BotonM menu (460,80,600,40,false);
 	sprintf(punS, "%d", puntos);
 	texto(645,560, punS);
	
}





void Pantalla(){
	fondo();
	Letras nombre(89,60,100,80);
	BotonI iniciar(455,90,400,40,false);
	texto(100,550,"Sebastián Avilez Hernández");
	texto(100,580,"Yahwthani Morales Gómez");
	texto(100,610,"Ricardo Osuna Tirado ");
	texto(100,640,"Rafael Valdez Cota ");
	
	refresca();
	bool cont=true;
	float m,n;
	float M=455;
	float N=400;
	float M2=545;
	float N2=440;
	while(cont){
	raton(m,n);
	m=raton_x();
	n=raton_y();
  	if(raton_boton_izq()){
  		if(m>M && m<M2){
  			if(n>N && n<N2){
	  			borra();
	  			fondo();
	  			Letras nombre2(89,60,100,80);
	  		    iniciar.setPress(true);
	  		    refresca();
				espera(500);
				borra();
				fondo();
				Letras nombre3(89,60,100,80);
				iniciar.setPress(false);
				refresca();	
				cont=false;
}
}		
}	
}	
	sesion();
	
	BotI nom (320,320,450,40);
	BotI acep (455,90,500,40,false);
	Sesion(40,120,550,30);
	refresca();
	
	bool des=true;
	float ex,ey;
	float Ex=40;
	float Ey=550;
	float EX=160;
	float EY=580;
	while(des){
	raton(ex,ey);
	ex=raton_x();
	ey=raton_y();
  	if(raton_boton_izq()){
  		if(ex>Ex && ex<EX){
  			if(ey>Ey && ey<EY){
  				sesion3();
  				comproUs();
  				espera(1000);
	  			des=false;
	
	
}
}	
	else if(ex>320 && ex<640){
  			if(ey>390 && ey<430){
	  			des=false;
		
}
}
}
}

	usuarioS();
	
	bool correc=true;
	while(correc){
		if(NewU==usuario){
			if(NewC==contra){
				correc=false;
			}
			else if(NewC != contra){
				mensaje("La contraseña es incorrecta.");
				espera(1500);
				correc=false;
				Pantalla();
				
			}

		}
			
		else if(NewC==contra){
			if(NewU != usuario){
				mensaje("El usuario es incorrecto");
				espera(1500);
			    correc=false;
			    Pantalla();
			    
			}
		}
		
		else{
			mensaje("Este usuario no existe, registrese primero.");
			espera(1500);
			correc=false;
			Pantalla();
			
		}
		
		
	}
	
	
	
	
	
	bool sigue=true;
	float z,j;
	float Z=455;
	float J=500;
	float Z2=545;
	float J2=540;
	while(sigue){
	raton(z,j);
	z=raton_x();
	j=raton_y();
  	if(raton_boton_izq()){
  		if(z>Z && z<Z2){
  			if(j>J && j<J2){
	  			borra();
	  			sesion2();
	  			BotI nom2 (320,320,450,40);
	  		    acep.setClic(true);
	  		    refresca();
				espera(500);
				borra();
				sesion2();
				BotI nom3 (320,320,450,40);
				acep.setClic(false);
				refresca();	
				sigue=false;
}
}		
}	
}

   fondo2();
   Terminos term(100,50,100,60,10);
   Comenzar listo(750,130,600,40,false);
   refresca();
   bool proS=true;
   float eq,ye;
	float Eq=750;
	float Ye=600;
	float EQ2=880;
	float YE2=640;
   
   
   while(proS){
	raton(eq,ye);
	eq=raton_x();
	ye=raton_y();
  	if(raton_boton_izq()){
  		if(eq>Eq && eq<EQ2){
  			if(ye>Ye && ye<YE2){
	  			borra();
	  			termino1();
	  		    listo.setpress(true);
	  		    refresca();
				espera(500);
				borra();
				termino1();
				listo.setpress(false);
				refresca();	
				proS=false;
}
}		
}	
}
   
   fondo3();
   PatosN patitos(50,80,50,60);
   Nombre jugador(200,250,550,40,usuario);
   Puntos score(550,200,550,40);
   BotonM menu (460,80,600,40,false);
   refresca();
   
 
 	int vidas=5;
 	bool vive=true;
 	
 	sprintf(punS, "%d", puntos);
 	
 	
 	while(vidas>0){
 		srand(time(NULL));
 	
	 	int X, _X, Y, _Y;
	 	X=50, _X=80, Y= 50, _Y=60;
	 	
	 	int Rx, RX, rx, Ry, RY, ry;
	 
 		int Tx, Ty;
	 	
	 	Rx=rand() % 300;
	 	Ry=rand() % 150;
	 	RX=rand() % 300;
	 	RY=rand() % 150;
	 	rx=rand() % 250;
	 	ry=rand() % 120;
	 	
	 	int ranX, ranY;
	 	ranX=X+Rx+RX+rx;
	 	ranY=Y+Ry+RY+ry;
	 		
		
		
	 	patoAla();
 	    PatosN patitos(ranX,_X,ranY,_Y);
 		refresca();
 		
 		//espera(2000);


	 	int aux=20;
 		while(aux>0){
 			
 	
		
	 		if(raton_boton_izq()){
	 			Tx=raton_x();
				Ty=raton_y();
	 			
	 			if(Tx>ranX && Tx<ranX+_X){
  					if(Ty>ranY && Ty<ranY+_Y){
	 					puntos+=100;
	 					aux=0;
	 			
	 				}else{
	 					vidas-=1;
	 					espera(0);
	 					aux=0;
	 				//	mensaje("y");
					 }
	 			}else{
	 					vidas-=1;
	 					aux=0;
	 					espera(10);
	 				//	mensaje("x");
					 }
			 }	 
		espera(50);
		aux-=1;
		 }
	 	
	espera(50);	 
	}
	mensaje("GAME OVER!");



	bool rep=true;
		float k,l;
		float K=460;
		float L=600;
		float K2=540;
		float L2=640;
		while(rep){
		raton(k,l);
		k=raton_x();
		l=raton_y();
	  	if(raton_boton_izq()){
	  		if(k>K && k<K2){
	  			if(l>L && l<L2){
		  			borra();
		  			fondo();
		  		    menu.setPress(true);
		  		    refresca();
					espera(100);
					borra();
					fondo();
					menu.setPress(false);
					puntos=0;
					Pantalla();
					refresca();	
					rep=false;
	}
	}		
	}	
	}	





  
   
}


int main() {
	Pantalla();
	return 0;
}
