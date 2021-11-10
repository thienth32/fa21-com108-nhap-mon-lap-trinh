#include <stdio.h>

int main() {
    printf("Nhập số lương tháng (ngàn): ");
    float luong, thue, thu_nhap;
    scanf("%f", &luong);
    if(luong < 11000){
        thue = 0;
    }else if(luong >= 11000 && luong < 16000){
        thue = (luong - 11000)*0.05;
    }else if(luong < 21000){
        thue = (5000*0.05) + (luong - 16000)*0.1;
    }else if(luong < 31000){
        thue = (5000*0.05) + (5000*0.1) + (luong - 21000)*0.15;
    }else if(luong < 41000){
        thue = (5000*0.05) + (5000*0.1) + (10000*0.15) + (luong - 31000)*0.2;
    }else{
        thue = 250 + 500 + 1500 + 2000 + (luong - 41000)*0.25;
    }

    thu_nhap = luong - thue;
    printf("Số thuế phải nộp: %.2f\nSố tiền thực nhận: %.2f", thue, thu_nhap);
    return 0;
}
