//Kiểm tra năm nhuận
#include <stdio.h>

int main() {
    long long a;
    printf(" nhap a:");
    // -10^6 <= a <= 10^6
    scanf("%lld",&a);
    if (( a <= 0)) {
        printf("INVALID");
    } else if((a%400==0) || (a%4==0) && (a % 100!=0)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}



