#include"student.h"
void savefile(SLL *ptr){
	FILE *fp=fopen("student.dat","w");
	if(fp==0){
		printf("unable to open student.dat\n");
		return;
	}
	while(ptr){
		fprintf(fp,"%d %s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	fclose(fp);
	printf("records saved to student.dat\n");
}
void readfile(SLL **ptr){
	FILE *fp=fopen("student.dat","r");
	SLL *new,*last;
	if(fp==0){
		return;
	}
	while(1){
		new=malloc(sizeof(SLL));
		if(fscanf(fp,"%d %49s %f",&new->rollno,new->name,&new->percentage)!=3){
			free(new);
			break;
		}
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
	}
	fclose(fp);
}
