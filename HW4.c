#include <stdio.h>
int main () {
    int  n;
    int S=0;
    printf("nhap gia tri cua n: ");
    scanf("%d", &n);
    for (int i=1; i <=n; i+=2) {
        S+=i;
    }
    printf("tong cac so le tu 1 den %d la :%d ",n, S);
    return 0;
}
