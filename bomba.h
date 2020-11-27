#ifndef _BOMBA_H_
#define _BOMBA_H_

class bomba{
	public:
		int queueBomba; //10 unidades por vez
		int depositoGas;//deposito de gasolina
		
	private:
		bomba();
		bomba():
		~bomba();
			
	//Metodos
	void despacha();//un auto a la vez
};

#endif
