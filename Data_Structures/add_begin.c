#include"header.c"

void add_begin(ST** ptr)
{
    ST* temp = (ST*)malloc(sizeof(ST));
    printf("Enter the details\n");
    scanf("%d %s%f",&temp->roll,temp->name,&temp->marks);
    temp->next = *ptr;
    *ptr = temp;
}