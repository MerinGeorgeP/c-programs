#include<stdio.h>
#include <stdlib.h>

int game(){
	char you,computer;
	printf("enter your value");
	scanf("%c",&you);
	int randnum = rand()%100;
	if (randnum<33){
		computer = 's';
	} else if(randnum<66){
		computer = 'z';
	} else{
		computer = 'p';
	}
		
	if (you == computer){
		printf("draw");
	}else if(you == 's' && computer == 'z'){
		printf("you won");
	}else if(you == 's' && computer == 'p'){
		printf("you lose");
	}else if(you == 'p' && computer == 's'){
		printf("you won");
	}else if(you == 'p' && computer == 'z'){
		printf("you lose");
	}else if(you == 'z' && computer == 'p'){
		printf("you won");
	}else{
		printf("you lose");
	}
	return 0;
}		
	

