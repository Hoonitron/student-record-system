CC = gcc
OBJS = stud_main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_sort.o

student: $(OBJS)
	$(CC) -o student $(OBJS)

%.o: %.c student.h
	$(CC) -Wall -c $<

clean:
	rm -f $(OBJS) student
