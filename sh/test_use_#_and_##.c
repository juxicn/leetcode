#include <stdio.h>

#define P(A) printf("%s:%d\n",#A,A);
#define pex(ss) printf("u%d:%d\n", ss, u ## ss);

int main()
{
    int a = 1, b = 2,c = 3;
    int u3 = 23;
    P(a);
    P(b);
    P(a+b);
    pex(3);
    return 0;
}

