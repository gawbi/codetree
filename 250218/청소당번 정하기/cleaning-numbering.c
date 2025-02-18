#include <stdio.h>

int main() {
    // Please write your code here.


    int g=0,b=0,h=0;
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){ //i=1부터 해야한다. 0을 넣으먼 h++됨
        if(i%12==0){
            h++;
        }
        else if(i%3==0){
            b++;
        }
        else if(i%2==0){
            g++;
        }

    }
    printf("%d %d %d",g,b,h);

    return 0;
}