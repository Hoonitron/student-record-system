#include"student.h"
float getpercentage(){
	float per;
	printf("enter percentage: ");
	while(scanf("%f",&per)!=1||!(per>=0&&per<=100)){
		while(getchar()!='\n');
		printf("percentage must be between 0 and 100, enter again: ");
	}
	return per;
}
void addnode(SLL **ptr){
	SLL *new,*last,*t;
	int rn=1;
	new=malloc(sizeof(SLL));
	printf("enter name: ");
	scanf("%49s",new->name);
	new->percentage=getpercentage();
	t=*ptr;
	while(t){
		if(t->rollno==rn){
			rn++;
			t=*ptr;
		}
		else
			t=t->next;
	}
	new->rollno=rn;
	new->next=0;
	if(*ptr==0){
		*ptr=new;
	}
	else{
		last=*ptr;
		while(last->next){
			last=last->next;
		}
		last->next=new;
	}
	printf("record added with roll no %d\n",rn);
}
