// Aguiar - github.com/JeovaJrAguiar/data-structures
// Federal University of Ceara - Crateus campus
// Brazil

#include <stdio.h>
#include <stdlib.h>

// print a vector
void printVector(int vec[], int size){
        printf("[");
        for(int i = 0; i < size; i++){
                printf(" %d", vec[i]);
        }
        printf("]");
}

// search element in a vector
// return -1 if not found or int > 0 with repective index in vector
int searchVectorByElement(int vec[], int size, int element){
	for(int i = 0; i < size, i++)
		if(vec[i] == element) return i;
	return -1;
}

int main(){
        int aux = 0;
        // start simple vector
        int vector[10] = {0,0,0,0,0,0,0,0,0,0};

        // insertion
        for(int i = 0; i < 10; i++){
                printVector(vector, 10);
                printf("> ");
                scanf("%d", &aux );
                vector[i] = aux;
        }

        // Search
	printf("");
	printVector(vector, 10);

        return 0;
}
