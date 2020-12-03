#include <bits/stdc++.h>


struct data{
	
	int n;
	struct data *next,*prev;
		
}*head,*curr,*tail,*temp;

void view(){
	
	curr=head;
	while(curr){
		printf("%d",curr->n);
		if(curr->next!=NULL){
			printf(" ");
		}
		curr=curr->next;
	}
}

void pop(int from){
	curr = head;
	while(curr != NULL && curr->n != from){
		curr = curr->next;
	}
	if(curr == NULL){
		printf("Data not found!\n");
	}else if(curr == head){
		head = head->next;
		free(curr);
		head->prev = NULL;
	}else if(curr != head && curr != tail){
		curr->next->prev = curr->prev;
		curr->prev->next = curr->next;
		free(curr);
	}else if(curr == tail){
		tail = tail->prev;
		free(curr);
		tail->next = NULL;
	}
}	

int moveCount(int from,int to){
	int count1=0;
	curr=head;
	
	while(curr->n!=from){
		curr=curr->next;
	}
	temp=curr;
	while(temp->n!=to && temp->next!=NULL){
		temp=temp->next;
		count1++;
	}
	
	if(temp->n!=to){
	count1=0;
	temp=curr;
		while(temp->n!=to && temp->prev!=NULL){
			temp=temp->prev;
			count1++;
		}
	 count1 = (count1-1)*-1;
	}
	
	return count1;
}

void push(int n){
	
	curr = (struct data *) malloc(sizeof(struct data));
	curr->n=n;
	
	if(head==NULL){
		head=tail=curr;
		head->prev=NULL;
	}else{
		tail->next=curr;
		curr->prev=tail;
		tail=curr;
	}
	tail->next=NULL;
}

void pushAfter(int from,int to){
	
	curr = (struct data *) malloc(sizeof(struct data));
	curr->n=from;
	
	if(head->n==to && head->next==NULL){
		push(from);
	}else if(tail->n==to){
		
		tail->next=curr;
		curr->prev=tail;
		tail=curr;
		
		tail->next=NULL;
	}else{
		temp=head;
		
		while(temp->n!=to){
			temp=temp->next;
		}
		
		curr->next=temp->next;
		temp->next->prev=curr;
		temp->next=curr;
		curr->prev=temp;
		
	}
	
	
	
}


int main(){
	
	int X,Q,f,t,total[100002];
	
	scanf("%d %d",&X,&Q);
	
	for(int i=1;i<=X;i++){
		push(i);
	}
	
	
	for(int j=0;j<Q;j++){
	
//		do{
		scanf("%d %d",&f,&t);
//		}while(f<1 || f>X && t<1 || t>X);
		
		total[j]=moveCount(f,t);
		pop(f);
		pushAfter(f,t);	
	}
	
	for(int i=0;i<Q;i++){
		printf("%d\n",total[i]);
	}
	view();
	printf("\n");
	
	return 0;
}
