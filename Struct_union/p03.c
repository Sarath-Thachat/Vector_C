/*      Write a program to sort five student record  on the basis of roll number or name or mark.       */

#include<stdio.h>
#include<string.h>

struct student
{
    char name[10];
    int roll_number;
    float marks;
}v[3];
void scan(struct student v[3])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter student details\n");
        scanf("%s%d%f",(v[i].name),&(v[i].roll_number),&(v[i].marks));
    }
}
void sort_name(struct student v[3])
{
    int i,j=0,k;
    struct student temp;
    for(i=0;i<3;i++)
    {
        for(k=0;k<2-i;k++)
        {
            j=0;
            j = strcmp(v[k].name,v[k+1].name);
            if(j>0)
            {
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            };
        }
    }
}
void sort_roll(struct student v[3])
{
    int i,j=0,k;
    struct student temp;
    for(i=0;i<3;i++)
    {
        for(k=0;k<2-i;k++)
        {
            j=0;
            j = v[k+1].roll_number-v[k].roll_number;
            if(j<0)
            {
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            };
        }
    }
}
void sort_marks(struct student v[3])
{
    int i,k;
    float f;
    struct student temp;
    for(i=0;i<3;i++)
    {
        for(k=0;k<2-i;k++)
        {
            f=0;
            f=v[k+1].marks-v[k].marks;
            if(f<0)
            {
                temp = v[k];
                v[k] = v[k+1];
                v[k+1] = temp;
            };
        }
    }
}
void print(struct student v[3])
{
    int i;
    for(i=0;i<3;i++)
    printf("%d)name        : %s\n  Roll number : %d\n  Marks       : %0.2f\n\n",i+1,v[i].name,v[i].roll_number,v[i].marks);
}
int main()
{
    int i, op;
    scan(v);
    printf("Sort the data based on:\n1-Name\n2-Roll Number\n3-Marks\n");
    scanf("%d",&op);

    switch(op)
    {
        case 1: sort_name(v);
                break;
        case 2: sort_roll(v);
                break;
        case 3: sort_marks(v);
                break;
        default: printf("Invalid option\n");
                 break;
    }
    print(v);
}