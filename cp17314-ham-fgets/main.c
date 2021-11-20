#include <stdio.h>

int tinh_so_lon_nhat(a, b, c){
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}

int tinh_dung_luong(gb, type){
    int ketqua;
    switch (type) {
        case 1:
            ketqua = gb*1024*1024*1024;
            break;
        case 2:
            ketqua = gb*1024*1024;
            break;
        case 3:
            ketqua = gb*1024;
            break;
    }
    return ketqua;
}
int main() {
//    printf("Nhap ho va ten:");
//    char name[100];
//    fgets(name, 100, stdin);
//    printf("%s", name);
    /**
     * Bài 1 tính số lớn nhất trong 3 số
     */
//    int a, b, c;
//    printf("Nhap so a:");
//    scanf("%d", &a);
//    printf("Nhap so b:");
//    scanf("%d", &b);
//    printf("Nhap so c:");
//    scanf("%d", &c);
//    printf("So lon nhat trong 3 so la: %d", tinh_so_lon_nhat(a, b, c));
    /**
     * Bài 2: quy đổi ra đơn vị dung lượng
     */
    printf("Nhap dung lương (gb):");
    int gb, donvi;
    int dungluong;
    scanf("%d", &gb);
    printf("Don vi quy doi (1-byte | 2-kilo byte | 3-mega byte):");
    scanf("%d", &donvi);
    dungluong = tinh_dung_luong(gb, donvi);
    printf("Ket qua quy doi: %d", dungluong);
    return 0;
}
