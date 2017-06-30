#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand((unsigned int)time(NULL));
    int seireki = rand() % 63 + 1926;
    printf("西暦%d年は、", seireki);

    // 昭和年を計算
    int showa = seireki - 1925;
    printf("昭和%d年です", showa);
}
