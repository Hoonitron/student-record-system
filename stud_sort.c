#include"student.h"
int countnode(SLL *ptr){
	int c=0;
	while(ptr){
		ptr=ptr->next;
		c++;
	}
	return c;
}
void sortdata(SLL *ptr){
	SLL *p1,*p2,t;
	int i,j,c;
	char ch;
	if(ptr==0){
		printf("No student records available\n");
		return;
	}
	printf("N/n : Sort with name\n");
	printf("P/p : Sort with percentage\n");
	printf("Enter your choice: ");
	scanf(" %c",&ch);
	if(ch!='n'&&ch!='N'&&ch!='p'&&ch!='P'){
		printf("Unknown choice\n");
		return;
	}
	c=countnode(ptr);
	for(i=0;i<c-1;i++){
		p1=ptr;
		for(j=0;j<c-1-i;j++){
			p2=p1->next;
			if(((ch=='n'||ch=='N')&&strcasecmp(p1->name,p2->name)>0)||((ch=='p'||ch=='P')&&p1->percentage<p2->percentage)){
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;
				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;
				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p1=p1->next;
		}
	}
	shownode(ptr);
}
void reverselink(SLL **ptr){
	if(*ptr==0){
		printf("No student records available\n");
		return;
	}
	int c=countnode(*ptr),i;
	SLL **a;
	a=malloc(sizeof(SLL*)*c);
	SLL *t=*ptr;
	for(i=0;i<c;i++){
		a[i]=t;
		t=t->next;
	}
	for(i=c-1;i>0;i--){
		a[i]->next=a[i-1];
	}
	*ptr=a[c-1];
	a[0]->next=0;
	free(a);
	printf("list reversed\n");
}
