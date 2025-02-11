#include <stdio.h>

int main() {
    // Please write your code here.
    int matha,enga,mathb,engb;
    scanf("%d %d",&matha,&enga);
    scanf("%d %d",&mathb,&engb);
    if(matha>mathb){
        printf("A");
    }
    else if(matha==mathb){
        if(enga>engb){
            printf("A");
        }
        else{
            printf("B");
        }
    }
    else{
        printf("B");
    }

    return 0;
}