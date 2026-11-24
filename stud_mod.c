#include"student.h"
void modifynode(SLL *ptr){
	SLL *t;
	char ch,name[50]="";
	float per=0;
	int rn=0;
	if(ptr==0){
		printf("No student records available\n");
		return;
	}
	printf("Enter which record to search for modification\n");
	printf("R/r : Search by roll number\n");
	printf("N/n : Search by name\n");
	printf("P/p : Search by percentage\n");
	printf("Enter your choice: ");
	scanf(" %c",&ch);
	if(ch=='r'||ch=='R'){
		printf("enter roll no to search: ");
		scanf("%d",&rn);
	}
	else if(ch=='n'||ch=='N'){
		printf("enter name to search: ");
		scanf("%49s",name);
		if(searchname(ptr,name)==0){
			printf("no match found\n");
			return;
		}
		printf("enter roll no to modify: ");
		scanf("%d",&rn);
	}
	else if(ch=='p'||ch=='P'){
		printf("enter percentage to search: ");
		scanf("%f",&per);
		if(searchper(ptr,per)==0){
			printf("no match found\n");
			return;
		}
		printf("enter roll no to modify: ");
		scanf("%d",&rn);
	}
	else{
		printf("Unknown choice\n");
		return;
	}
	t=ptr;
	while(t&&t->rollno!=rn){
		t=t->next;
	}
	if(t==0){
		printf("no match found\n");
		return;
	}
	if(((ch=='n'||ch=='N')&&strcmp(t->name,name)!=0)||((ch=='p'||ch=='P')&&t->percentage!=per)){
		printf("roll no is not in the matching records\n");
		return;
	}
	printf("current details: %d %s %.2f\n",t->rollno,t->name,t->percentage);
	printf("enter new name: ");
	scanf("%49s",t->name);
	t->percentage=getpercentage();
	printf("record modified successfully\n");
}
