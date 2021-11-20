#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int checkNguyenTo(int a) {
    int i;
    for(i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            return 0;
        }
    }
    return 1;
}
int checkChinhPhuong(int a) {
    int y = sqrt(a);
    if(y*y == a) {
        return 1;
    } else {
        return 0;
    }
}
void cn1() {
    float x;
    printf("Hay nhap 1 so: ");
    scanf("%f", &x);
    if(x==(int) x) {
        int a = (int) x;
        printf("\n%d: La so nguyen", a);
        if(checkNguyenTo(a) == 0) {
            printf("\n%d: Khong phai la so nguyen to", a);
        } else {
            printf("\n%d: La so nguyen to", a);
        }
        if(checkChinhPhuong(a)) {
            printf("\n%d: La so chinh phuong", a);
        } else {
            printf("\n%d: Khong phai la so chinh phuong", a);
        }
    } else {
        printf("\n%g: Khong phai la so nguyen", x);
        printf("\n%g: Khong phai la so nguyen to", x);
        printf("\n%g: Khong phai la so chinh phuong", x);
    }
}
int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}
void cn2() {
    int a,b;
    printf("\nNhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    int uc = UCLN(a,b);
    int bc = BCNN(a,b);
    printf("\nUoc chung lon nhat cua 2 so la: %d", uc);
    printf("\nBoi chung nho nhat cua 2 so la: %d", bc);
}

void cn3() {
    bool t = true;
    int tienBaGioDau = 150000;
    int tienCacGioSau = 105000;
    int tongTien = 0;
    while(t) {
        int a,b;
        printf("\nNhap gio bat dau: ");
        scanf("%d", &a);
        printf("Nhap gio ket thuc: ");
        scanf("%d", &b);
        if((a>=12 && a<=23) && (b>=12 && b<=23) && b>=a) {
            int tongThoiGian = b-a;
            if(tongThoiGian > 3) {
                tongTien = 3*tienBaGioDau + (tongThoiGian-3)*tienCacGioSau;
            } else {
                tongTien = tienBaGioDau*tongThoiGian;
            }
            if(a>=14 && a<=17) {
                tongTien = tongTien*0.9;
            }
            printf("Gia tien can thanh toan la: %d", tongTien);
            t = false;
        } else {
            printf("Quan Karaoke chi hoat dong tu 12-23 gio! Xin hay nhap lai thoi gian: \n");
        }
    }


}
void cn4() {
    double x;
    printf("Nhap vao so dien ma ban su dung: ");
    scanf("%lf", &x);
    double tongTien;
    double bac1 = 1678;
    double bac2 = 1734;
    double bac3 = 2014;
    double bac4 = 2536;
    double bac5 = 2834;
    double bac6 = 2927;
    if(x<=50) {
        tongTien = x*bac1;
    } else if(x<=100) {
        tongTien = 50*bac1 + (x-50)*bac2;
    } else if(x<=200) {
        tongTien = 50*bac1 + 50*bac2 + (x-100)*bac3;
    } else if(x<=300) {
        tongTien = 50*bac1 + 50*bac2 + 100*bac3 + (x-200)*bac4;
    } else if(x<=400) {
        tongTien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + (x-300)*bac5;
    } else {
        tongTien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + 100*bac5 + (x-400)*bac6;
    }
    printf("So tien can phai tra la: %lf VND", tongTien);
}

int main() {
    int t;
    int n;
    int a = true;
    printf("\n_______________________________________________________________________________\n");
    printf("\nOption: ");
    printf("\nChuc nang 1.  Kiem tra so nguyen.");
    printf("\nChuc nang 2.  Tim uoc so chung lon nhat va boi chung nho nhat cua 2 so.");
    printf("\nChuc nang 3.  Chuong trinh tinh tien cho quan Karaoke");
    printf("\nCHuc nang 4.  Tinh tien dien");
    printf("\n_______________________________________________________________________________\n");
    printf("\nHay chon mot chuc nang: ");
    while(a) {
        scanf("%d", &t);
        if(t==1) {
            cn1();
            a = false;
        } else if(t==2) {
            cn2();
            a = false;
        } else if(t==3) {
            cn3();
            a = false;
        } else if(t==4) {
            cn4();
            a = false;
        } else {
            printf("Hay chuc nang tu 1 den 4: ");
        }
    }
    printf("\nBan co muon tiep tuc khong? Neu khong chon so 0 || Neu co chon 1 so nguyen bat ky: ");
    scanf("%d", &n);
    if(n==0) {
        printf("Bye Bye");
        return 0;
    } else {
        main();
    }
    return 0;
}