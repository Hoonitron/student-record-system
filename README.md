# Mini Project II - Student Record Management System

Menu-driven student record manager in C using a singly linked list,
dynamic memory allocation, separate modules and file handling.

## Files

- student.h    : structure definition and function prototypes
- stud_main.c  : main function, menu, exit option
- stud_add.c   : add a new record, percentage input check
- stud_del.c   : delete by roll number or name, delete all
- stud_show.c  : show the list, search by name / percentage
- stud_mod.c   : modify a record
- stud_save.c  : save to and read from student.dat
- stud_sort.c  : sort by name / percentage, reverse the list
- Makefile

## Compile

    make

This builds the executable named student. Use `make clean` to remove the object files and the executable.

## Run

    ./student

If student.dat exists it is loaded at start, otherwise the list starts empty.
Records are written to student.dat only when v/V or "save and exit" is chosen.
