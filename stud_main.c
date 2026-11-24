#include"student.h"
int main(){
	SLL *headptr=0;
	char op,ch;
	readfile(&headptr);
	while(1){
		printf("\n******** STUDENT RECORD MENU ********\n");
		printf("a/A : Add new record\n");
		printf("d/D : Delete a record\n");
		printf("s/S : Show the list\n");
		printf("m/M : Modify a record\n");
		printf("v/V : Save records\n");
		printf("e/E : Exit\n");
		printf("t/T : Sort the list\n");
		printf("l/L : Delete all the records\n");
		printf("r/R : Reverse the list\n");
		printf("Enter your choice: ");
		if(scanf(" %c",&op)==-1){
			freelist(&headptr);
			exit(0);
		}
		switch(op){
			case 'a':
			case 'A':addnode(&headptr);break;
			case 'd':
			case 'D':deletenode(&headptr);break;
			case 's':
			case 'S':shownode(headptr);break;
			case 'm':
			case 'M':modifynode(headptr);break;
			case 'v':
			case 'V':savefile(headptr);break;
			case 'e':
			case 'E':printf("S/s : Save and exit\n");
				 printf("E/e : Exit without saving\n");
				 printf("Enter your choice: ");
				 scanf(" %c",&ch);
				 if(ch=='s'||ch=='S'){
					 savefile(headptr);
					 freelist(&headptr);
					 exit(0);
				 }
				 else if(ch=='e'||ch=='E'){
					 freelist(&headptr);
					 exit(0);
				 }
				 else
					 printf("Unknown choice\n");
				 break;
			case 't':
			case 'T':sortdata(headptr);break;
			case 'l':
			case 'L':deleteall(&headptr);break;
			case 'r':
			case 'R':reverselink(&headptr);break;
			default:printf("Unknown choice\n");
		}
	}
}
