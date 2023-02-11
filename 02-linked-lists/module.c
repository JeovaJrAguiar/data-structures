// Aguiar - github.com/JeovaJrAguiar/data-structures
// Federal University of Ceara - Crateus campus
// Brazil
// Linked List

#include "lib.h"

// create a Node point based in a value from Input
NO* createNode(int value){
	NO* no = (NO*) malloc(sizeof(NO*));
	no->prev = null;
	no->next = null;
	no->value = value;
}

// return "O" if OK or "N" if NO-OK
char insertNode(NO* root, NO* element){
	NO* noAux = createNode();
	noAux = root;
	int aux = element.value;
	char opt = "I";

	do{
                if(noAux.value > element.value) opt = "O";
		noAux = noAux->next;
	}while(opt != "O");
	
	element->next = &noAux;
	element->prev = &noAux->prev;
	noAux->prev->next = element;
	noAux->prev = element;

	return "O";
}

// return "O" if sucess or "N" for error
char removeNode(NO* root, int element){
	if(root == null) return "N";
	if(element == 0) return "N";	

	NO* noAux = createNode();
	noAux = root;
	char opt = "I";
	
	if(element > 0){
		do{
                	if(noAux.value == element) break;
                	noAux = noAux->next;
        	}while(opt != "O");

        	noAux->next->prev = noAux->prev;
        	noAux->prev->next = noAux->next;
	
	}else{
		do{
                	if(noAux.value == element) break;
                	noAux = noAux->prev;
        	}while(opt != "O");

        	noAux->prev->next = noAux->next;
        	noAux->next->prev = noAux->prev;
	}
	free(noAux);
	return "O";
}

// return "O" if sucess or "N" for error
char callClient(No* root, int isPreferential){
	if(root == null){
		printf("\nNo exist preferential."); 
		return "N";
	}
	
	int auxElement = 0;
	if(isPreferential == 1) {
		auxElement = root->prev.value;
		removeNode(root, auxElement);
	} else{
		auxElement = root->next.value;
		removeNode(root, auxElement);
	}
        print("\nKey: %d", auxElement);
}

int optionInput(){
        int opt = -1;
        printf("\n\n=== MENU ====");
        printf("\n 1 - Register pacient");
        printf("\n 2 - Call pacient");
        printf("\n 3 - Exit");

        printf("\n Option: ");
        scanf(" %d", &opt);

        if(opt == 1 || opt == 2 || opt == 3) return opt;
        return -1;
}

// root is a root of list
// opt define if preferential(2) or normal(1)
void registerPacient(NO* root, int opt){
	int aux = -1, auxWhile = -1, auxTicketPacient = 0;
	NO* auxNode = (NO*) malloc(sizeof(NO*));
	if(opt == 1){
		opt = -2;
		auxNode = root;
		do{     
			if(auxNode->next == null) break;
			auxNode = auxNode->next;
			opt = 1;
        	}while(auxWhile == -2);
		
		auxTicketPacient = (auxNode.value)+1;
		auxNode = createNode(auxTicketPacient);
		if(insertNode(root, auxTicketPacient) == "N"){
			printf("\n === ERROR ===\n");
		}
	}else{
		opt = -2;
                auxNode = root;
                do{
                        if(auxNode->prev == null) break;
                        auxNode = auxNode->prev;
                        opt = 1;
                }while(auxWhile == -2);

                auxTicketPacient = (auxNode.value)-1;
                auxNode = createNode(auxTicketPacient);
                if(insertNode(root, auxTicketPacient) == "N"){
                        printf("\n === ERROR ===\n");
                }	
	}
}

void menu(){
        int opt = -1;
	No* root = (NO*) malloc(sizeof(No*));
        do{
                system("cls");
                opt = optionInput();
		switch(opt){
			case 1: 
				do{
					printf("\nPreferential(1) or No-Preferential(2): ");
                                	scanf(" %d", &opt);
					if(opt != 1 || opt !=2){
						printf("\nInvalid Option. Try Again.");
						opt = 1;
					}else{
						opt == -2;
					}
					
				}while(opt != -2);
				registerPacient(root, opt);
				break;
			case 2:
				do{
                                        printf("\nPreferential(1) or No-Preferential(2): ");
                                        scanf(" %d", &opt);
                                        if(opt != 1 || opt !=2){
                                                printf("\nInvalid Option. Try Again.");
                                                opt = 1;
                                        }else{
                                                opt == -2;
                                        }

                                }while(opt != -2);
				callClient(root, opt);
				break;
			case 3:
				break;
			default:
				break;
		}
        }while(opt == 0);                
        printf("\n\nThanks for user Client System. :]\n");
}

