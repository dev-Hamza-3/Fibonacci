#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("n?\n");
    scanf ("%d", &n);
    fib(n);
    return 0;
}

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    int t[n];
    t[0]=0;
    t[1]=1;
    printf ("[ 0 1");
    int i=0;
    for(i=2;i<=n;i++){
        t[i]=t[i-1]+t[i-2];
        printf (" %d", t[i]);
    }
    printf (" ]");
    return t[n-1];
}
