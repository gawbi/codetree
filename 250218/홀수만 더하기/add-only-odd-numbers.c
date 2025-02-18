#include <stdio.h>

int main() {
    // Please write your code here.
    int a,n;
    scanf("%d",&n);
    
    int sum=0;
    
    for(int i=1; i<=n; i++){
        scanf("%d",&a);
        if(a%2==1&&a%3==0){
            sum+=a;
        }

    }
    printf("%d",sum);

    return 0;
}