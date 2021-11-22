#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool kt_nguyen_to(x){
    bool result = false;
    for (int i = 2; i < x; i) {
        if(x%i == 0){
            result = true;
            break;
        }
    }
    return result;
}

bool kt_chinh_phuong(x){
    int can_b2 = (int) sqrt(x);
    return (int) pow(can_b2, 2) == x;
}

int chon_cau_hoi(){
    int answer;
    printf("Bai 1:\n");
    printf("Bai 2:\n");
    printf("Bai 3:\n");
    printf("Bai 4:\n");
    printf("Bai 5:\n");
    printf("Bai 6:\n");
    printf("lua chon cua ban:");
    scanf("%d", &answer);
    return answer;
}


void bai1(){
    printf("nhap so x:");
    int x;
    scanf("%d", &x);
    if(kt_nguyen_to(x) == true){
        printf("x la so nguyen to\n");
    }else{
        printf("x khong phai so nguyen to\n");
    }

    if(kt_chinh_phuong(x) == true){
        printf("x: %d la so chinh phuong\n", x);
    }else{
        printf("x: %d khong phai la so chinh phuong\n", x);
    }
}
int main() {
    chon_cau_hoi();
    return 0;
}
