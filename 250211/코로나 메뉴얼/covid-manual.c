#include <stdio.h>

int main() {
    int ondo1, ondo2, ondo3;
    char gamgi1, now1, gamgi2, now2, gamgi3, now3;
    
    scanf(" %c %d", &gamgi1, &ondo1);
    scanf(" %c %d", &gamgi2, &ondo2);
    scanf(" %c %d", &gamgi3, &ondo3);

    // 첫 번째 사람의 상태 결정
    if(gamgi1=='Y' && ondo1>=37){
        now1 = 'A';
    }
    else if(gamgi1=='N' && ondo1>=37){
        now1 = 'B';
    }
    else if(gamgi1=='Y' && ondo1<37){
        now1 = 'C';
    }
    else if(gamgi1=='N' && ondo1<37){  // 수정: gamgi1=='N'로 변경
        now1 = 'D';
    }

    // 두 번째 사람의 상태 결정
    if(gamgi2=='Y' && ondo2>=37){
        now2 = 'A';
    }
    else if(gamgi2=='N' && ondo2>=37){
        now2 = 'B';
    }
    else if(gamgi2=='Y' && ondo2<37){
        now2 = 'C';
    }
    else if(gamgi2=='N' && ondo2<37){  // 수정: gamgi2=='N'로 변경
        now2 = 'D';
    }

    // 세 번째 사람의 상태 결정
    if(gamgi3=='Y' && ondo3>=37){
        now3 = 'A';
    }
    else if(gamgi3=='N' && ondo3>=37){
        now3 = 'B';
    }
    else if(gamgi3=='Y' && ondo3<37){
        now3 = 'C';
    }
    else if(gamgi3=='N' && ondo3<37){  // 수정: gamgi3=='N'로 변경
        now3 = 'D';
    }

    // 예시: 두 명 이상이 상태 'A'이면 "E" 출력, 아니면 "N" 출력 (의도에 따라 논리 수정)
     if((now1=='A'&&now2=='A')||(now2=='A'&&now3=='A')||(now3=='A'||now1=='A')){
        printf("E");
    }
    else{
        printf("N");
    }

    return 0;
}
    
