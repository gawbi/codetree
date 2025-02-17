#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    
    if(b>a){
      for(int i=b; i>=a; i--){
        printf("%d ",i);
    }  
    }
    else if(a==b){
        printf("%d",a);
    }
    else{
        for(int i=a; i>=b; i--){
        printf("%d ",i);
    }
    }
    

    return 0;
}