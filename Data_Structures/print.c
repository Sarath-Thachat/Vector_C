#include"header.c"

void print(ST* ptr)
{
    while(ptr!=0)
    {
        printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
        ptr = ptr->next;
    }
}