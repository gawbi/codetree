#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;

    scanf("%d %d",&a,&b);

    float cnt=0,sum=0;
    float avg;

    for(int i=a; i<=b; i++){

        if(i%5==0 || i%7==0){
            sum+=i;
            cnt++;
        }

    }
    avg=sum/cnt;

    printf("%.0f %.1f",sum,avg);

    return 0;
}