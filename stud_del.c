#include"student.h"
void deletenode(SLL **ptr){
	SLL *del,*prev=0;
	char ch,name[50]="";
	int rn=0;
	if(*ptr==0){
		printf("No student records available\n");
		return;
	}
	printf("R/r : Enter roll number to delete\n");
	printf("N/n : Enter name to delete\n");
	printf("Enter your choice: ");
	scanf(" %c",&ch);
	if(ch=='r'||ch=='R'){
		printf("enter roll no to delete: ");
		scanf("%d",&rn);
	}
	else if(ch=='n'||ch=='N'){
		printf("enter name to delete: ");
		scanf("%49s",name);
		if(searchname(*ptr,name)==0){
			printf("no match found\n");
			return;
		}
		printf("enter roll no to delete: ");
		scanf("%d",&rn);
	}
	else{
		printf("Unknown choice\n");
		return;
	}
	del=*ptr;
	while(del){
		if(del->rollno==rn&&(ch=='r'||ch=='R'||strcmp(del->name,name)==0)){
			if(*ptr==del)
				*ptr=del->next;
			else
				prev->next=del->next;
			free(del);
			printf("record deleted successfully\n");
			return;
		}
		prev=del;
		del=del->next;
	}
	printf("no match found\n");
}
void freelist(SLL **ptr){
	SLL *del=*ptr;
	while(del){
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
}
void deleteall(SLL **ptr){
	if(*ptr==0){
		printf("No student records available\n");
		return;
	}
	freelist(ptr);
	printf("all records deleted\n");
}
