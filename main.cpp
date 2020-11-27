//	**********************************************
//	*	UNIVERSIDAD AERONAUTICA EN QUERÉTARO	*
//	*									*
//	*	Presenta: Emiliano Cabrera y			*
//	*			Omar Mendoza				*
//	*	Motivo:	Proyecto final				*
//	*	Materia:	Programación en paralelo		*
//	*	Matricula:4576						*
//	*	Fecha:	02/Dic/2020				*
//	**********************************************

//#include "gasolinera.h"
//#include "bomba.h"
#include "auto.h"

#include <iostream>
#include <unistd.h>
#include <thread>
#include <time.h>

using namespace std;

void * autom1(void * arg){
	autom * p = (autom * ) arg;
	while (1){
		p -> showAuto(1);
	}
}

/*void * autom2(void * arg){
	autom * q = (autom * ) arg;
	while (1){
		q -> showAuto(2);
	}
}*/

int main (){
	autom p(30);
	//autom q(40);

	thread hilo_uno(autom1, &p);
	//thread hilo_dos(autom2, &q);
	
	hilo_uno.join();
	//hilo_dos.join();
	
	return 0;	
}
