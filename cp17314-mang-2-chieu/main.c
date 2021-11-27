#include <stdio.h>

int main() {
    int syso = 5;
    // trong lớp có 5 bạn sinh viên
    // mỗi 1 bạn sinh viên sẽ có 3 đầu điểm đại diện cho các môn
    // 1: toán
    // 2: văn
    // 3: tiếng anh
    // tạo 1 mảng 2 chiều chứa danh sách điểm của tất cả thành viên trong lớp (điểm các bạn tạm thời tự nhập tay)
    float bang_diem[5][3] = {
            {5, 6, 7},
            {5.5, 7.5, 6.9},
            {7, 7, 7},
            {6.7, 6.5, 4},
            {9, 8, 9}
    };
    // tạo ra 1 mảng có 5 phần tử, trong mỗi phần tử là 1 chuỗi có thể chứa nhiều nhất 100 ký tự
    // kiểu dữ liệu dạng ký tự: char a; - chỉ chứa đc 1 ký tự thôi
    // => nếu muốn tạo ra 1 chuỗi ký tự: Vu Manh Thanh <=> tạo ra 1 mảng của các ký tự
    char danh_sach_ten[5][100] = {
            "Vu Manh Thanh",
            "Dao Xuan Quynh",
            "Niem Trung Thanh",
            "Nguyen Duc Phat",
            "Truong Van Luong"
    };
    // hiển thị danh sách tên của các bạn sinh viên
    float toan, van, anh, diemtb;
    for (int i = 0; i < 5; i++) {
        printf("%s\n", danh_sach_ten[i]);
        toan = bang_diem[i][0];
        van = bang_diem[i][1];
        anh = bang_diem[i][2];
        diemtb = (toan+van+anh)/3;
        printf("Toan: %.1f | Van: %.1f | Tieng Anh: %.1f\n", toan, van, anh);
        printf("Diem trung binh: %.1f\n", diemtb);
        printf("============================\n");
    }
    return 0;
}
