#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lagu{
	char judul[30];
	struct lagu *next, *prev;
}*head,*tail,*curr;

void pushTail(char judul[]){
	curr = (struct lagu *) malloc(sizeof (struct lagu));
	strcpy(curr->judul,judul);
	curr->prev = curr->next = NULL;
	if(head == NULL){
		head=tail=curr;
	}
	else{
		tail->next=curr;
		curr->prev=tail;
		tail=curr;
	}

	tail->next=NULL;
}

void popHead(){
	if(head==NULL){
		printf("G da data\n");
	}
	else if(head==tail){
		curr=head;
		head=tail=NULL;
		free(curr);
	}
	else{
		curr=head;
		head=head->next;
		head->prev=NULL;
		free(curr);
	}
	
}


void print(){
	int a=1;
	curr=head;
	if(curr!=NULL){
	
		while(curr!=NULL){
			printf("%d) %s\n",a,curr->judul);
			curr=curr->next;
			a++;
		}

	}else{
		printf("oh no.. the queue is empty\n");
	}

}

void popAll(){
	while(head!=NULL){
		popHead();
	}
}


int main(){
	int numb=0,nomor=0,song[100];
	do{
	system("cls");
	
	printf("SONG LIST\n");
	char lagu[10][100]={
		
	"IDGAF - Dua Lipa",
	"FRIENDS - Marshmello, Anne-Marie",
	"The Middle - Zedd, Maren Morris,Grey",
	"Best Part - H.E.R., Daniel Caesar",
	"All The Stars (with SZA) - Kendrick Lamar, LZA",
	"Wolves - Selena Gomez, Marshmello",
	"God's Plan - Drake",
	"Rewrite The Stars - Zac Efron, Zendaya",
	"Havana - Camila Cabello, Young Thug",
	"Perfect - Ed Sheeran",	
	
	};
	
	for(int a=0;a<10;a++){
		printf("%d) %s\n",a+1,lagu[a]);
	}
	
	
	printf("\nNEXT IN QUEUE\n");
	print();

	
	
	numb=0;	
	printf("\nMAIN MENU\n");
	printf("1. Add Music Into Queue\n");
	printf("2. Next Music\n");
	printf("3. Clear Queue\n");
	printf("4. Exit\n");
	printf("Input Your Choice: ");
	scanf("%d",&numb);
	
	
	switch(numb){
		case 1:
			
		int music; 
		printf("what music number will be added into the queue[1..10] ? ");
		scanf("%d",&music);
		song[nomor]=music;
		pushTail(lagu[music-1]);
		printf("The Music \"%s\" is added to the queue!\n",lagu[music-1]);getchar();
		getchar();

			break;
		case 2:
		
		if(head==NULL){
			printf("put some music first!\n");
		}
		else{
		
			printf("Now Playing : %s\n",lagu[song[nomor]]);
			printf("Press Enter to Stop playing the music!\n");
			nomor++;
			popHead();
		}
		getchar();getchar();
			
			
			break;
		case 3:
			
			popAll();
			printf("Your music queue has been cleared!\n");
			getchar();getchar();
			
			break;
				
		}		
		
	}while(numb!=4);

	
	
	
	getchar();
	return 0;
}
