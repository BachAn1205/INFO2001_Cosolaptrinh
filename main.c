//Giai phuong trinh an x bac 2
#include <stdio.h>
#include <math.h>
int main () {
    int a, b ,c ,x;
    float x0, x1, x2;
    float delta;
    printf("nhap a, b ,c\n");
    scanf("%d%d%d", &a, &b, &c);
    delta = b*b - 4 *a*c;
    if (delta == 0) {
        x0 = -b/2*a;
        printf("phuong trinh co nghiem kep x= %.2f ", x0);

    } else if (delta < 0){
        printf("phuong trinh vo nghiem");
    } else if (delta >0) {
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta)/2*a) ;
        printf("phuong trinh co 2 nghiem phan biet x1= %.2f , x2 = %.2f : ", x1 , x2);

    }

    return 0;
}
