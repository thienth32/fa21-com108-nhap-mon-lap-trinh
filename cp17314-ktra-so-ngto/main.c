#include <stdio.h>
#include <stdbool.h>

bool ktr_so_ngto(x){
    if(x<2){
        return false;
    }
    if(x == 2){
        return true;
    }
    int count = 0;
    for (int i = 2; i < x; i++) {
        if(x%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        return true;
    }
    return false;
}
void bai1(){
    printf("moi ban nhap so:");
    int x;
    scanf("%d", &x);
    if(ktr_so_ngto(x) == true){
        printf("%d la so nguyen to\n", x);
    }else{
        printf("%d khong la so nguyen to\n", x);
    }
}
void bai2(){

}
void bai3(){

}
int main() {
    int lua_chon;
    int bai_toan;
    do {
        printf("1. Tim so nguyen to\n");
        printf("2. Tim so chinh phuong\n");
        printf("3. Tim so lon nhat trong 3 so a, b, c\n");
        printf("Moi ban chon:");
        scanf("%d", &bai_toan);
        switch (bai_toan) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            default:
                printf("lua chon khong hop le!\n");
                break;
        }


        printf("choi tiep chu?(0|1)");
        scanf("%d", &lua_chon);
    } while (lua_chon == 1);
    return 0;
}
