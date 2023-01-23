// Aguiar - github.com/JeovaJrAguiar/data-structures
// Federal University of Ceara - Crateus campus
// Brazil
// Linked List

#include "lib.h"

NO* createNode(int value){
	NO* no = (NO*) malloc(sizeof(NO*));
	no->prev = null;
	no->next = null;
	no->value = value;
}

// return "O" if OK or "N" if NO-OK
char insertNode(NO* root, NO* element){
	if(root == null || element == null) return "N";
	
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

// return "O" if OK or "N" if NO-OK
char removeNode(NO* root, int element){
	if(root == null) return "N";

	NO* noAux = createNode();
	noAux = root;
	char opt = "I";
	do{
		if(noAux.value == element) break;
		noAux = noAux->next;
	}while(opt != "O");

	noAux->next->prev = noAux->prev;
	noAux->prev->next = noAux->next;
	
	free(noAux);
	return "O";
}

void menu(){
        int opt = -1;
        do{
                system("cls");
                opt = optionInput();
		switch(opt){
			case 1:
				break;
			case 2:
				break;
			default:
				break;
		}
        }while(opt == 0);                
        printf("\n\nThanks for user Client System. :]\n");
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
