// Aguiar - github.com/JeovaJrAguiar/data-structures
// Federal University of Ceara - Crateus campus
// Brazil
// Lindek List

typedef struct NODE{
	NO* prev;
	NO* next;
	
	int value;
}NO;

NO* createNode(int value);
char insertNode(NO* root, NO* element);
char removeNode(NO* root, int element);
