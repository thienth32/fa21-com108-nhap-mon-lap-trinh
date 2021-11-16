#include <stdio.h>

int main() {
//    int i = 1;
//    while(i <= 100){
//        printf("%d\n", i);
//        i++;
//    }
//    printf("===================\n");
//    for (int j = 100; j > 0 ; j--) {
//        printf("%d\n", j);
//    }




//    1. Nhập số min và số max
    printf("Nhap min:");
    int min, max, tong = 0, dem_so_chan = 0;
    scanf("%d", &min);
    printf("Nhap max:");
    scanf("%d", &max);
//    2. chạy vòng lặp từ min tới max
    for (int i = min; i <= max; i++) {
        if(i%2==0){
            tong+=i;
            dem_so_chan++;
        }
    }
    printf("Tong cac so chan: %d\n", tong);
    float trung_binh_cong_so_chan = tong/dem_so_chan;
    printf("Trung binh cong cua cac so chan: %5.1f", trung_binh_cong_so_chan);

    return 0;
}
