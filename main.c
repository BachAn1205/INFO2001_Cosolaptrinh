#include <stdio.h>

int main() {
    long long a;
    printf("nhap gia tri cua a:");
    scanf("%lld", &a);
    if ((-10^18<=a<=10^18)&&(a%5==0)&&(a%3==0)){
        printf("1\n");
    } else {
        printf("0\n");
    }
}






























