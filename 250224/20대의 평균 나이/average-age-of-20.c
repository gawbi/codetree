#include <stdio.h>

int main() {
    int age, sum=0, cnt =0;
    while (1) {
        scanf("%d",&age);
        if (age / 10 != 2)
            break;
        sum += age;
        cnt ++;
    }
    printf("%.2lf", (double)sum/cnt);
    
    return 0;
}

