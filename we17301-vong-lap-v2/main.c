#include <stdio.h>

int main() {
    // xây dựng menu lựa chọn 1 trong các bài toán được liệt kê (4 bài)
    // nếu chọn bài nào thì hiển thị đề bài của bài đó
    // nếu chọn đáp án không nằm trong danh sách đề bài thì vòng ngược lại để chọn lại
    int lua_chon, tiep_tuc = 1;
    while(1==1) {
        printf("1. Kiem tra so nguyen to\n");
        printf("2. Kiem tra so chinh phuong\n");
        printf("3. Tinh tien hat karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("0. Thoat phan mem\n");
        printf("Moi ban chon (1-4):");
        scanf("%d", &lua_chon);
        if(lua_chon == 0){
            printf("Bye bye!");
            break;
        }else if(lua_chon == 1){
            printf("de bai 1: nhap 1 so nguyen - kiem tra so nguyen do co phai la so nguyen to hay khong\n");
        }else if(lua_chon == 2){
            printf("de bai 2: nhap 1 so nguyen - kiem tra so nguyen do co phai la so chinh phuong hay khong\n");
        }else if(lua_chon == 3){
            printf("de bai 3: tinh tien hat karaoke\n");
        }else if(lua_chon == 4){
            printf("de bai 4: Tinh tien dien\n");
        }
    }
    return 0;
}
