#include"student.h"
void shownode(SLL *ptr){
	if(ptr==0){
		printf("No student records available\n");
		return;
	}
	printf("------------------------------------------------------------\n");
	printf("%-10s%-20s%s\n","Roll No.","Name","Percentage");
	printf("------------------------------------------------------------\n");
	while(ptr){
		printf("%-10d%-20s%.2f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	printf("------------------------------------------------------------\n");
}
int searchname(SLL *ptr,char *name){
	int c=0;
	while(ptr){
		if(strcmp(ptr->name,name)==0){
			if(c==0){
				printf("------------------------------------------------------------\n");
				printf("%-10s%-20s%s\n","Roll No.","Name","Percentage");
				printf("------------------------------------------------------------\n");
			}
			printf("%-10d%-20s%.2f\n",ptr->rollno,ptr->name,ptr->percentage);
			c++;
		}
		ptr=ptr->next;
	}
	return c;
}
int searchper(SLL *ptr,float per){
	int c=0;
	while(ptr){
		if(ptr->percentage==per){
			if(c==0){
				printf("------------------------------------------------------------\n");
				printf("%-10s%-20s%s\n","Roll No.","Name","Percentage");
				printf("------------------------------------------------------------\n");
			}
			printf("%-10d%-20s%.2f\n",ptr->rollno,ptr->name,ptr->percentage);
			c++;
		}
		ptr=ptr->next;
	}
	return c;
}
