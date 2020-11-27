#ifndef _AUTO_H_
#define _AUTO_H_

class autom{
	private:
		int tanqueGas; //0 a 100 gasolina
	
	public:
		autom(int tg);
		autom();
		~autom();	
	
	//Metodos
	void conducete(); //-2 unidades de gasolina por segundo 
	void cargaGas(int i); //solicitar a gasolinera usar estacion 
	void showAuto(int i);
};

#endif
