#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    b=a>b?a:b;
    printf("%d",b);
    return 0;
}