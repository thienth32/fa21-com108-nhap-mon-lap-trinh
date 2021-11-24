#include <stdio.h>

int main() {
//    tạo 1 mảng mới
//    Nhập ten sv: thienthph01679
//    tạo 1 mảng gồm 6 phần tử (int) theo thứ tự điểm các môn học:
//    Văn, Toán, Địa lý, Lịch sử, Tiếng Anh, Hóa học
//    sử dụng vòng lặp để nhập điểm cho từng môn học
//    sau khi nhập xong điểm thì tính điểm trung bình của bạn học sinh này
//    biết rằng < 5: trượt
//    >= 5 và < 8 : trung bình
//    >= 8 và <= 10: giỏi

    /**
     * Mời nhập số lượng Lớp :
     * Nhập mảng sĩ số lớp cho từng lớp : ….
     * Số lượng Lớp là :  ……
     * Đếm các lớp có sĩ số >=40:……
     * tính tổng sinh viên các lớp
     * Tính tổng sinh viên các lớp có sỹ số < 40
     * Vị trí các lớp có sĩ số nhỏ nhất : …..
     */

    int so_lop;
    printf("Nhap so luong lop:");
    scanf("%d", &so_lop);
    int ds_lop[so_lop];
    int sy_so_lon_hon_40 = 0;
    for (int i = 0; i < so_lop; i++) {
        printf("Sy so lop thu %d: ", i+1);
        scanf("%d", &ds_lop[i]);
        if(ds_lop[i] >= 40){
            sy_so_lon_hon_40++;
        }
    }

    printf("So luong lop: %d\n", so_lop);
    printf("So lop co sy so >= 40: %d", sy_so_lon_hon_40);
    
    return 0;
}
