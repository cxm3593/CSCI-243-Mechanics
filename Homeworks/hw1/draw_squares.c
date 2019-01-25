#include <stdio.h>
#include <stdlib.h>

void draw_square(int side, int indent, char ch){
    
	for( int row = 0; row < side; row++){
		for( int i = 0; i < indent; i++){
			printf(" ");
		}
		for( int l = 0; l < side; l++){
			printf("%c",ch);
		}
		printf("\n");
	}
	printf("\n");
}

int main(void){
	draw_square(3,2,'#');
	draw_square(5,4,'*');
	draw_square(8,3,'+');
	
	return 0;
}
