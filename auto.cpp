//#include "gasolinera.h"
//#include "bomba.h"
#include "auto.h"

#include <iostream>
#include <time.h>
#include <unistd.h>

using namespace std;

	autom::autom(int tg){
		this -> tanqueGas = tg;
		
		srand(time(NULL));
	}

	autom::autom(){
		this -> tanqueGas = 0; //inicializacion por default
	}

	autom::~autom(){
	}
	
	void autom::conducete(){
		srand(time(NULL));
		tanqueGas -= 2;
	}
	
	void autom::cargaGas(int i){
		while(tanqueGas < 100){
			tanqueGas += 10;
			cout << "Llenando tanque auto " << i << " nivel: " << tanqueGas << endl;
			sleep(1);
		}
	}
	
	void autom::showAuto(int i){
		for(;;){
			cout << "_________________________________________________" << endl;
			cout << "El estatus de este auto " << i <<" es:" << endl;
			while (tanqueGas <= 10){
				cout << "Cargando gasolina auto " << i << " nivel: " << tanqueGas << endl;
				cargaGas(i);
			}
			conducete();
			cout << "Conduciendo auto " << i << " nivel: " << tanqueGas << endl;
			sleep(1);
		}
	}
