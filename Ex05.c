#include <stdio.h>

// Prototype function
int grade(int a);

// main function
int main(){
	
	int score;
	
	printf("Please enter your score: ");
	scanf("%d", &score);
	
	grade(score);
}

int grade(int a){
	
	
	if(a >= 90){
		printf("Your grade is A.\n");
	}
	else if(80 <= a && a <= 89){
		printf("Your grade is B.\n");
	}
	else if(70 <= a && a <= 79){
		printf("Your grade is C.\n");
	}
	else if(60 <= a && a <= 69){
		printf("Your grade is D.\n");
	}
	else{
		printf("Your grade is F.\n");
	}
}
	
	
	
