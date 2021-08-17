#include <iostream>
#include "scuptor.hpp" 
#include <fstream>

using namespace std;
		
int main(void) {
	
	Sculptor pato(200, 200, 200);

   //boné
	pato.setColor(0,0,1,1);
	pato.putBox(49, 53, 72, 74, 61, 64);
   	pato.putBox(49,53,72,73,59,62);
	pato.setColor(0,0,0,0);
	pato.putBox(50,52,72,73,63,64);   
   // cabeça
	pato.setColor(1, 1, 1, 1);
	pato.putBox(49, 53, 67, 72, 61, 64);
	
	//olho direito
	pato.setColor(0,0,0,1);
	pato.putBox(52,53,70,71,63,64);
	
	//olho esquerdo
	pato.putBox(49,50,70,71,63,64);
	
		
	//bico inferior
	pato.setColor(1,1,0,1);
	pato.putBox(49,53,68,69,63,67);
	
	//bico superior
	pato.setColor(1,1,0,1);
	pato.putBox(49,53,69,70,63,67);
	
	
	//corpo
	pato.setColor(1, 1, 1, 1);
	pato.putBox(48, 54, 62, 68, 55, 63);
	
	//rabo
	pato.putBox(50, 52, 65, 67, 54,55);
	
	//asa direita
    pato.putBox(54,55,64,68,56,60);
    pato.putBox(54,55,64,68,56,62);
    
    //asa esquerda
    pato.putBox(47,50,64,68,56,60);
    pato.putBox(47,50,64,68,56,62);	
  
	//perna direita
	pato.setColor(0.99,1,0,1);
	pato.putBox(52,53,60,62,59,60);
	
	//perna esquerda
	
	pato.putBox(49,50,60,62,59,60);
	
	//pata direita
	pato.putBox(52,53,59,60,59,62);
	
	//pata esquerda
	pato.putBox(49,50,59,60,59,62);

	//Gerando o arquivo .0ff para abrir no MeshLab	
	pato.writeOFF ((char*) "C:/Users/Familia/Desktop/Patoleguas Quarkson/Quack.off");
	pato.writeOFF ((char*) "D:/Arthur/Quack.off");
	
	
	
    return 0; 
}
		

