#include <stdio.h>

int main() {
    printf("Nhap so x:");
    int x, i = 2, count = 0;
    scanf("%d", &x);
    while (i < x){
        printf("i = %d\n", i);
        if(x%i == 0){
            printf("so %d chia het cho %d\n", x, i);
            count++;
        }
        i++;
    }
    if(count == 0){
        printf("so %d la so nguyen to", x);
    }else{
        printf("so %d chia het cho %d so trong khoang 2 -> %d\n", x, count, x-1);
        printf("so %d khong phai la so nguyen to", x);
    }
    return 0;
}
