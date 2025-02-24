#include <stdio.h>

int main() {
    // Please write your code here.
    float n,sum=0,avg=0;
    int cnt=0;
    while(1){
        
        scanf("%f",&n);
        
        if(n>=30){
            avg=sum/cnt;
            printf("%.2f",avg);
            break;
        }
        else{
            cnt++;
            sum+=n;
        }
        
    }
    return 0;
}