#include <stdio.h>

 int main() {
    int a,b,c,d;
     printf("HE THONG CHAM CONG NHAN VIEN\n");
    printf("Nhap gio vao ca:(som nhat 6h) \n");
    scanf("%d",&a);
    printf("Nhap gio ra ca: (muon nhat 18h) \n");
    scanf("%d", &b);

     while ((a < 6) || (b > 18)) {
         printf("Gio lam viec khong hop le. Vui long nhap lai!\n");
         printf("Nhap gio vao ca:(som nhat 6h) \n");
         scanf("%d",&a);
         printf("Nhap gio ra ca: (muon nhat 18h) \n");
         scanf("%d", &b);

}

    if (a,b<=12){
        printf("tien luonng theo ngay la : %d", (12-a) * 6000);
    }
    else if ((a<=12)&&(b<=18)) {
         c= (12-a) * 6000;
         d= (b-12) * 7500;
        printf("luong theo ngay la: %d ", c+d);
    } else if (a,b>=12) {
        printf("luong theo ngay la %d", (b-a)*7500);
    }


     return 0;
    }


