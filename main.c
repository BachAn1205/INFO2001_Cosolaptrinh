#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("nhap n= ");
    scanf("%d",&n);
    int S=0;


    for (int  i = 0;  i <= n; i++ )
        S = S+ i*i;

    printf("tong binh phuong tu 0 den %d la : %d",n, S);
    return 0;

    }


