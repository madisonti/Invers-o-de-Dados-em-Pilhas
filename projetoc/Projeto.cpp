#include<stdio.h>   ///Blibiotecas ///
 #include<stdlib.h>
 #define con 9   	/// constante que conten  o  tamnho 9 ///
 
	typedef struct emppilha{                                 //ESTRUTURA DE  DADOS   EMPPILHA //  
 	int dados [con];
 	int inicio;
 	int topo;
 	}  
        emppilha;
	emppilha pilha ;     	//// EMPPILHA  ==  PILHA ///
 
	void empilha (int elemento){ 	 ///  FUNÇÃO PARA EMPILHA  VALORES  /////
       	if(pilha.topo==elemento){   
           	printf("pilha cheia ");
             	system("pause");     	 
  	}
     	else
  	{
      	pilha.dados[pilha.topo]=elemento;
        	pilha.topo++;
   	}    
 	 
  }
  int desempilha(){
	int elemento;
    	if(pilha.topo==pilha.inicio){   	// FUNÇÃO DESEMPILHAR ///
        	printf("pilha  vazia \n");
              	system("pause ");
  	}
  	else
   	{
      	pilha.topo--;
           	elemento=pilha.dados[pilha.topo];
            	return elemento;
       	}}
  	int main() {
       	pilha.topo=0;
      	pilha.inicio=0;
      	int aux;
      	printf(" >>>>>> Empilhando RA 17605585 <<<<<<\n\n");
      	printf("   >> 5 ");
      	empilha(5);
      	printf(" 8 ");
      	empilha (8);
      	printf(" 5 ");
      	empilha (5);
    	printf(" 5 ");
      	empilha (5);
      	printf(" 0 ");
      	empilha(0);
      	printf(" 6 ");
      	empilha(6);
      	printf(" 7 ");
      	empilha(7);
      	printf(" 1 <<\n\n");
      	empilha(1);
     	 
         	printf(" >>>>>> Desempilhando RA: <<<<<< \n\n");
         	printf("  >> %d ",desempilha());
       	printf(" %d ",desempilha());
       	printf(" %d ",desempilha());
       	printf(" %d ",desempilha());
       	printf(" %d ",desempilha());
       	printf(" %d ",desempilha());
       	printf(" %d ",desempilha());
       	printf(" %d <<",desempilha());
        	}



