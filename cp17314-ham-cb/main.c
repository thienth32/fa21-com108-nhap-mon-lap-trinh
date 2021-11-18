#include <stdio.h>

void show_menu(){
    printf("=========Bai 6=========\n");
    printf("1. Tinh tong\n");
    printf("2. Thuc thi ham\n");
    printf("3. Ham co return\n");
    printf("4. Ham khong co return\n");
    printf("Moi ban chon bai toan: ");
}
int bai1(){
    int a, b;
    printf("Nhap so a:");
    scanf("%d", &a);
    printf("Nhap so b:");
    scanf("%d", &b);
    int ket_qua = a + b;
    return ket_qua;
}
int main() {
    int answer, kqb1;
    show_menu();
    scanf("%d", &answer);
    if(answer == 1){
        kqb1 = bai1();
        printf("ket qua: %d", kqb1);
    }

    return 0;
}

