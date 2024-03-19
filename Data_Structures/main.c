#include"header.h"

int main()
{
   ST* hptr = 0;
   char op;
   do
   {
    add_begin(&hptr);
    printf("Repeat[Y/N]:");
    scanf(" %c",&op);
   } while ((op=='Y')||(op=='y'));
    
    print(hptr);
}
//  10 aa 99.9 y 20 bb 88.8 y 30 cc 77.7 y 40 dd 66.6 n