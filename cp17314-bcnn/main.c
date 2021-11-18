#include <stdio.h>

int main() {
    int x, y, max, bcln;
    // 1. Nhap x va y
    printf("Nhap so x:");
    scanf("%d", &x);
    printf("Nhap so y:");
    scanf("%d", &y);
    // 2. tim so lon nhat trong 2 so x, y
    max = x > y ? x : y;
    // 3. tim boi chung (chac chan se chia het cho x va y)
    bcln = x * y;
    // 4. tao bien luu tru bcnn
    int bcnn;
    // 5. chay vong lap tu max den bcln
    for (int i = max; i <= bcln ; i++) {
        // 6. kiem tra xem so dang duoc duyet co chia het cho ca x & y hay khong
        if(i % x == 0 && i % y == 0){
            bcnn = i;
            // 7. thoat khoi vong lap
            break;
        }
    }

    printf("bcnn của %d va %d = %d", x, y, bcnn);
    return 0;
}
