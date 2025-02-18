#include <stdio.h>

int main() {
    // Please write your code here.
    int a,n;
    scanf("%d",&n);

    int sum=0,cnt=0;

    for(int i=1; i<=n; i++){

        scanf("%d",&a);
        sum+=a;
        cnt++;
    }

    double avg= (double)sum/cnt;
    printf("%d %.1f",sum,avg);

    return 0;
}