#ifndef _GASOLINERA_H_
#define _GASOLINERA_H_

class gas{
	public:
		int kBomba;
		int deposito;//litro maximos en la gasolinera
		int queueGas;//Autos haciendo fila para usar una bomba
		
	private:
		gas();
		gas();
		~gas();
		
	//Metodos
	void asigna();//Asigna cualquier bomba disp al sig auto el queue
};

#endif
