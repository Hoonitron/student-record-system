#include<stdio.h>
#include<string.h>
#include<strings.h>
#include<stdlib.h>
typedef struct student{
	int rollno;
	char name[50];
	float percentage;
	struct student *next;
}SLL;
float getpercentage();
void addnode(SLL **ptr);
void deletenode(SLL **ptr);
void deleteall(SLL **ptr);
void freelist(SLL **ptr);
void shownode(SLL *ptr);
int searchname(SLL *ptr,char *name);
int searchper(SLL *ptr,float per);
void modifynode(SLL *ptr);
void savefile(SLL *ptr);
void readfile(SLL **ptr);
int countnode(SLL *ptr);
void sortdata(SLL *ptr);
void reverselink(SLL **ptr);
