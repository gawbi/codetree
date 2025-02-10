#include <stdio.h>

int main() {
    // Please write your code here.
    int ma,mb,ea,eb;
    scanf("%d %d",&ma,&mb);
    scanf("%d %d",&ea,&eb);

    if(ma>mb && ea>eb){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}