#include <stdio.h>

int main() {
    // nhập họ và tên
    // nhập thu nhập cá nhân của bạn trong 1 tháng
    // hiển thị số thuế phải nộp
    // hiển thị thu nhập sau khi nộp thuế
    // biết rằng theo luật thuế thu nhập cá nhân của việt nam
    // thu nhập dưới <= 11 triệu thì không phải nộp thuế (mốc 1)
    // từ mốc trên 11 triệu thì tính như sau:
    // vượt mốc 1: 5 tr thì sẽ thu 5% thuế (mốc 2)
    // vượt mốc 2: 5 tr thì sẽ thu 10% thuế của phần vượt (mốc 3)
    // vượt mốc 3: 10tr thì sẽ thu 15% thuế của phần vượt (mốc 4)
    // vượt mốc 4: 10tr thì sẽ thu 20% của phần vượt (mốc 5)
    // vượt mốc 5: thì tự động thu 25% của phần vượt
    // 11tr => 0 thuế
    // 16tr => 250k
    // 18tr => 250k + 10% của 2tr = 200k => tổng = 450k
    // 25tr => 250k + 500k + 15% của 4tr (600k) = 1.350k
    float luong, thucnhan, thue;
    float moc1 = 11000000, moc2 = 16000000, moc3 = 21000000, moc4 = 31000000, moc5 = 41000000;
    printf("Nhập lương: ");
    scanf("%f", &luong);
    if(luong <= moc1){
        thue = 0;
    }else if(luong <= moc2){
        thue = (luong - moc1)*0.05;
    } else if(luong <= moc3){
        thue = 250000 + (luong - moc2)*0.1;
    }else if(luong <= moc4){
        thue = 250000 + 500000 + (luong - moc3)*0.15;
    }else if(luong <= moc5){
        thue = 250000 + 500000 + 1500000 + (luong - moc4)*0.2;
    }else {
        thue = 250000 + 500000 + 1500000 + 2000000 + (luong - moc5)*0.25;
    }
    thucnhan = luong - thue;
    printf("Thu nhập của bạn: %.2f\nThuế phải nộp = %.2f ", thucnhan, thue);
    return 0;
}
