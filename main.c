#include <stdio.h>
int main()
{
    int a=7;
    int b=8;
    int s;
    int q;
    int t;
    int p;

    //Bitwise AND//
    s=a&b;
    printf("%d\n",s);

    //Bitwise OR//
    q=a|b;
    printf("%d\n",q);

    //Bitwise XOR//
    t=a^b;
    printf("%d\n",t);

    //Bitwise Complement//
    p=~a;
    printf("%d\n",p);

    return 0;
}
