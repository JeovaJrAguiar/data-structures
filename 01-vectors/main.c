// Aguiar - github.com/JeovaJrAguiar/data-structures
// Federal University of Ceara - Crateus campus
// Brazil

#include <stdio.h>
#include <stdlib.h>

// print a vector
void printVector(int vec[], int size){
        printf("[");
        for(int i = 0; i < size; i++)
                printf(" %d", vec[i]);
        printf("]");
}

// search element in a vector
// return -1 if not found or int > 0 with repective index in vector
int searchVectorByElement(int vec[], int size, int element){
	for(int i = 0; i < size; i++)
		if(vec[i] == element) return i;
	return -1;
}

// start a main menu
void menu(){
	int vector[10] = {0,0,0,0,0,0,0,0,0,0};
	int option = 0, aux = -1;
	while(option != -1){
		printf("\n\n ==== MENU ==== \n");
        	printf("1 - Print vector\n");
		printf("2 - Insert elements\n");
		printf("3 - Search element\n");
		printf("4 - Remove element\n");
		printf("5 - Exit\n");
	
		printf("> ");
		scanf(" %d", &option);
		
		switch(option){
			case 1:
				printVector(vector, 10);
				break;
			case 2:
				for(int i = 0; i < 10; i++){
                			printVector(vector, 10);
                			printf("> ");
                			scanf("%d", &aux );
                			vector[i] = aux; 
        			} 
				break;			
			case 3: 
				aux = -1;
        			printf("Insert element for search: ");
        			scanf(" %d", &aux);
        			int indexSearch = searchVectorByElement(vector, 10, aux);
        
        			if(indexSearch == -1){
                			printf("\nElement not found. =( \n");
        			}else{  
                			printf("\nElement found. Index element: %d", indexSearch);
        			} 
				break;
			case 4:
				aux = -1;
				printf("\nElement to remove: \n");
				scanf(" %d", &aux);
				int indexSearched = searchVectorByElement(vector, 10, aux);

				if(aux == -1){
					printf("\nERROR - Element not found\n");
				} else{
					vector[indexSearched] = 0;
					printf("\nOK - Element removed\n");
				}	
			case 5:
				printf("\n ==== END MENU ====\n");
				option = -1;
				break;
			default:
				printf("\nInsert option valid.\n");
				break;								
		}
	}
}

int main(){
	menu();

        return 0;
}
