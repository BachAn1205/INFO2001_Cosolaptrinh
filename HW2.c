#include <stdio.h>
int main() {
    float a;
    printf("Nhap diem ( 0 <= diem <= 10)\n ");
    scanf("%f", &a);
        if ((a>= 9)&&(a<= 10)) {
        printf("Xuat sac");
    }   else if ((a >= 8)&& (a < 9)) {
            printf("Gioi");
        }
        else if ((a >= 6.5)&& (a < 8)) {
            printf("Kha");
        } else if ((a >= 5)&& (a < 6.5)) {
            printf("Trung binh");
        } else if ((a >= 0)&& (a < 5)) {
            printf("Yeu");
        }
        return 0;
    }
