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
	option = 0;
	while(option == 0){
		printf("\n ==== MENU ==== \n");
        	printf("1 - Print vector\n");
		printf("2 - Insert elements in vector\n");
		printf("3 - Search element in vector\n");
		printf("4 - Exit\n");
	
		printf("> ");
		scanf(" %d", &option);
		
		switch(option){
			case 1:
				printVector(vector, 10);
			case 2:
				for(int i = 0; i < 10; i++){
                			printVector(vector, 10);
                			printf("> ");
                			scanf("%d", &aux );
                			vector[i] = aux; 
        			} 			
			case 3: 
				int aux = -1;
        			printf("Insert element for search: ");
        			scant(" %d", &aux);
        			int indexSearch = searchVectorByElement(vector, 10, aux);
        
        			if(indexSearch == -1){
                			printf("\nElement not found. =( \n");
        			}else{  
                			printf("\nElement found. Index element: %d", indexSearch);
        			} 
			case 4:
				printf("\n ==== END MENU ====\n);
				option = 1;								
		}
	}

int main(){
	menu();
        return 0;
}
