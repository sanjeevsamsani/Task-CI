#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag;

    flag=prime(21);
    if(flag==0)
        printf("\n Prime ");
    else
        printf("\n Not Prime");
    return 0;
}
