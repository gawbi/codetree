#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;

    int sum=0;

    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++){
        if(i%2==0){
            sum+=i;
        }

    }
    printf("%d",sum);
    return 0;
}