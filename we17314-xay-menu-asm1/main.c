#include <stdio.h>
#include <stdbool.h>
int main() {
    printf("=======Assignment Giai đoạn 1=======\n");
    bool tiep_tuc_lap = true;
    int bai_toan = 0;
    while (tiep_tuc_lap == true){
        printf("Chọn một trong các option sau:\n");
        printf("1: Kiểm tra số nguyên\n");
        printf("2: Tìm Ước số chung và bội số chung của 2 số\n");
        printf("3: Chương trình tính tiền cho quán Karaoke\n");
        printf("4: Tính tiền điện\n");
        printf("5: Chức năng đổi tiền\n");
        printf("6: tính lãi suất vay ngân hàng \n");
        printf("7: vay tiền mua xe \n");
        printf("8: Sắp xếp thông tin sinh viên\n");
        printf("9: Game FPOLY-LOTT\n");
        printf("10: tính toán phân số\n");
        printf("Bạn chọn chức năng nào:\n");
        scanf("%d", &bai_toan);
        if(bai_toan > 0 && bai_toan < 11){
            tiep_tuc_lap = false;
        }
    }
//    printf("Bài toán của người dùng chọn là: %d", bai_toan);
    int number;
    switch (bai_toan) {
        case 1:

            printf("=======Bài 1: Kiểm tra số nguyên=========\n");
            printf("Mời nhập 1 số bất kỳ: ");
            scanf("%d", &number);
            break;
        case 2:
            printf("=======Bài 1: Kiểm tra số nguyên=========\n");
            break;

    }
    return 0;
}
