#include <stdio.h>

int bcnn(int m1, m2){
    int max = m1;
    if(max < m2)
        max = m2;
    for (int i = max; i <= m1*m2; i++) {
        if(i%m1 == 0 && i%m2==0){
            return i;
        }
    }
}

int ucln(tu, mau){
    if(tu%mau != 0){
        return ucln(mau, tu%mau);
    }else {
        return mau;
    }
}

int main() {
    int tu1, tu2, mau1, mau2;
    printf("Nhap tu 1:");
    scanf("%d", &tu1);
    printf("Nhap mau 1:");
    scanf("%d", &mau1);
    printf("Nhap tu 2:");
    scanf("%d", &tu2);
    printf("Nhap mau 2:");
    scanf("%d", &mau2);
    int ucln_bt1 = ucln(tu1, mau1);
    tu1 /= ucln_bt1;
    mau1 /= ucln_bt1;

    int ucln_bt2 = ucln(tu2, mau2);
    tu2 /= ucln_bt2;
    mau2 /= ucln_bt2;

    int tongtu, tongmau;
    // tim boi chung nho nhat cua 2 mau
    tongmau = bcnn(mau1, mau2);
    tongtu = tu1*(tongmau/mau1) + tu2*(tongmau/mau2);
    int ucln_tong = ucln(tongtu, tongmau);
    tongtu /= ucln_tong;
    tongmau /= ucln_tong;
    printf("%d/%d + %d/%d = %d/%d", tu1, mau1, tu2, mau2, tongtu, tongmau);
    return 0;
}
