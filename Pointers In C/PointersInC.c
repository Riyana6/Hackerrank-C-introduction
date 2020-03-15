#include <stdio.h>

void update(int *a,int *b) {
    int c,d;
    c=*a+*b;
    
    printf("%d\n",c);
    d=*a-*b;
    if(d>0)
    printf("%d",d);
    else
    printf("%d",d*(-1));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}

