#include <stdio.h>
// định nghĩa hàm
// float a, float b, float c: định nghĩa ra các tham số của hàm
// tham số là những biến chứa giá trị được truyền vào khi gọi hàm
// tham số chỉ có thể có phạm vi sử dụng trong cặp dấu {} của hàm
// return trả về 1 giá trị sau khi đã xử lý
float tinh_tong(float a,float b, float c){
    float tong = a+b+c;
    return tong;
}
int main() {
    printf("Nhap so thu 1:");
    float so1, so2, so3;
    scanf("%f", &so1);
    printf("Nhap so thu 2:");
    scanf("%f", &so2);
    printf("Nhap so thu 3:");
    scanf("%f", &so3);

    // tinh_tong(): gọi hàm
    // khi mà gọi hàm có return thì đa phần sẽ có 1 biến để nhận giá trị trả về
    float ketqua = tinh_tong(so1, so2, so3);
    printf("%.1f\n", ketqua);
    printf("%.1f", tinh_tong(5.4, 6.9, 10));
    return 0;
}

// tạo 1 hàm nhận 2 tham số, trả về kết quả là ucln của 2 số truyền vào
// tạo 1 hàm nhận 3 tham số, trả về số lớn nhất trong 3 số