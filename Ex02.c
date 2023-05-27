#include <stdio.h>

// Prototype function
void rectangle(int h, int w);

// main function
int main(){
	
	int h;
	int w;
	
	printf("Enter height: ");
	scanf("%d", &h);
	printf("Enter width: ");
	scanf("%d", &w);
	
	rectangle(h,w);
	
}

void rectangle(int h, int w){
	
	char x = '*';
	int i;
	int j;
	
	for(i = 0; i < h; i++){											// i & j < height & width cuz i & j start from 0
        for(j = 0; j < w; j++){
        	if(i > 0 && i < h - 1 && j > 0 && j < w - 1){  			// Technically printin a smaller rectangle inside
        		printf(" ");										// But instead of "*" it's a rectangle of " "
			}														// The "if" statement checks if current row and  
			else{													// column are not on the border of the rectangle
				printf("%c", x);
			}	
        }
        printf("\n");
    }
    
}
