
#include "prime.h"

int prime(int n)
{
    int i,flag=0;
    for (i = 2; i <= n / 2; ++i) {


        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    return flag;


}
