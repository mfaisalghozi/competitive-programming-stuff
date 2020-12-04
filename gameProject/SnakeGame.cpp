#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys\timeb.h>
#include <windows.h>

int length=0;
int snake_size=15;
int snake_speed=200;
int dir = VK_RIGHT;
int console_width=80;
int console_height=25;
int food_x,food_y;

/*
DOCUMENTATION:
-Stuck dengan proses generate food randomly
-learn from indonesia web
-mencoba membuat jendela untuk ular

*/



struct segment{
	int x,y;
	int fill;
}snake[2000];


int check_collision(int x,int y){
	
	for(int i=1;i<length;i++){
		
		if(snake[0].x==snake[i].x && snake[0].y==snake[i].y){
			return 1;
		}
		/*
		if(snake[i].x==x && snake[i].y==y){
			return 1;
		}
		*/
	}
	return 0;
}

/*
void place_food(){
	
//	do{
	food_x = rand()%console_width;
	food_y = rand()%console_height;
//	}while(check_collision(food_x,food_y)==1);
	
	
}
*/

void push(int x,int y){
	
	for(int i=length ; i>0;i--){
		snake[i]=snake[i-1];
	}
	snake[0].x=x;
	snake[0].y=y;
	length++;


}

void pop(){
	length--;
}

void gotoxy(int x,int y){
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}


void display(){
	for(int i=0;i<length;i++){
		gotoxy(snake[i].x,snake[i].y);
		printf("O");
	}
}


int main(){
	
	srand(time(NULL));
	
	struct timeb last_timestamp;
	ftime(&last_timestamp);
	
	int score = 0;
	
	for(int i=0;i<snake_size;i++){
		push(i,0);
	}
	
	
//	place_food();
	
	
	while(true){
	struct timeb current_timestamp;
	ftime(&current_timestamp);
	
	int interval = 1000 * (current_timestamp.time - last_timestamp.time) + (current_timestamp.millitm - last_timestamp.millitm);
	
		if(interval >= snake_speed){
			int x,y;
			
			if(x<0 || x>=console_width || y<0 || y>=console_height){
				break;
			}
			
			if(check_collision(x,y)==1){
				break;
			}
			
			switch(dir){
				case VK_LEFT:
					x=snake[0].x-1;
					y=snake[0].y;
					
					break;
				case VK_RIGHT:
					x=snake[0].x+1;
					y=snake[0].y;
					
					break;
				case VK_UP:
					x=snake[0].x;
					y=snake[0].y-1;
					
					break;
				case VK_DOWN:
					x=snake[0].x;
					y=snake[0].y+1;
					
					break;
			}
			
			/*
			if(x==food_x && y==food_y){
				score+=100;
				place_food();
			}
			else{
				pop();
			}
			*/
			
			pop();
			push(x,y);
			system("cls");
			display();
			
			//gotoxy(food_x,food_y);
			//printf("x");
			
			last_timestamp = current_timestamp;
		}
	if(GetKeyState(VK_LEFT)<0){
		dir = VK_LEFT;
	}
	if(GetKeyState(VK_RIGHT)<0){
		dir = VK_RIGHT;
	}
	if(GetKeyState(VK_UP)<0){
		dir = VK_UP;
	}
	if(GetKeyState(VK_DOWN)<0){
		dir = VK_DOWN;
	}
		
	if(GetKeyState(VK_ESCAPE)<0){
		return 0;
	}
	
	}
	
	system("cls");
	printf("GAME OVER\n");
	printf("YOUR SCORE : %d\n\n",score);
	
	printf("Press ENTER to exit...");
	

	getchar();
	return 0;
}
