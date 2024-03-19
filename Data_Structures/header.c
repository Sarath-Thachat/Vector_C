#ifndef __HEADER_C__
#define __HEADER_C__

#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int roll;
    char name[20];
    float marks;
    struct student* next;
}ST;

void add_begin(ST**);
void print(ST*);

#endif