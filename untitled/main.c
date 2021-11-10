#include <stdio.h>
#include <stdbool.h>

int main() {
//    printf("Hãy nhập tên của bạn: ");
//    char name[100];
//    // hàm nhập ký tự có cả khoảng trắng
//    fgets(name, 100, stdin);
//    printf("Họ và tên: %s", name);
    int nam_sinh, gioi_tinh, can_nang;
    printf("Hãy năm sinh của bạn: ");
    scanf("%d", &nam_sinh);
    printf("Hãy giới tính của bạn (1 - nam | 2 - nữ): ");
    scanf("%d", &gioi_tinh);
    printf("Hãy cân nặng của bạn: ");
    scanf("%d", &can_nang);

    if(2021 - nam_sinh >= 18){
        if(gioi_tinh == 1 && can_nang >= 55){
            printf("Bạn đủ điều kiện hiến máu của Nam");
        }else if(gioi_tinh == 2 && can_nang >= 40){
            printf("Bạn đủ điều kiện hiến máu của Nữ");
        } else{
            printf("Bạn không đủ điều kiện cân nặng của giới tính của mình");
        }
    }else{
        printf("Không đủ tuổi để tham gia hiến máu");
    }
    return 0;
}
