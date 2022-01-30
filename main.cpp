#include <iostream>

int main() {
    char YesNo;
    char stockName[30];
    printf("사려고 하는 주식을 입력해주세요\n");
    scanf("%s", stockName);

    printf("%s의 현재 주가가 양전이면 Y, 음전이면 N을 입력해주세요\n", stockName);
    scanf("%s", &YesNo);

    if(YesNo=='Y'){
        printf("주식이 오를 때 사는건 지양해주세요");
    }
    else{
        printf("%s의 RSI가 65이상인가요? 65이상이면 Y, 65미만이면 N을 입력해주세요\n", stockName);
            scanf("%s", &YesNo);
            if(YesNo=='Y'){
                printf("RSI가 너무 높아요. 과매수 상태인데 조금만 더 기다려 보는게 좋을 것 같아요");
            }
            else{
                printf("RSI가 35미만이라면 지금 구매해도 좋을 것 같아요! 하지만 분할 매수원칙을 지켜요");
            }
        }

    return 0;
}
