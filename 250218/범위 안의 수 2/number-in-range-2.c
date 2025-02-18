#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    int cnt=0,sum=0;

    for(int i=1; i<=10; i++){
        scanf("%d",&a);
        if(a>=0 && a<=200){
            sum+=a;
            cnt++;
        }

    }

    double avg=(double)sum/cnt;

    printf("%d %.1f",sum,avg);
    return 0;
}