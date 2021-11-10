#include <stdio.h>

int main() {
    int diem = 0;
//    1. hỏi câu hỏi số 1
    printf("Câu hỏi 1: Trường FPT Polytechnic có bao nhiêu cơ sở trên toàn quốc\n");
//    2. hiển thị đáp án
    printf("A: 1 \t\t C: 5\n");
    printf("B: 3 \t\t D: 7\n");
    printf("Đáp án của bạn là: ");
//    3. nhận đáp án từ ng dùng
    char dap_an;
    scanf("%s", &dap_an);
//    4. kiểm tra đáp án (switch - case)
    switch (dap_an) {
        case 'a':
            printf("Đáp án sai\n");
            break;
        case 'b':
            printf("Đáp án sai\n");
            break;
        case 'c':
            printf("Đáp án đúng\n");
            diem++;
            break;
        case 'd':
            printf("Đáp án sai\n");
            break;
        default:
            printf("Bạn cần chọn 1 trong các đáp án (a, b, c, d)\n");
            break;
    }

    printf("Câu hỏi 2: Trường FPT Polytechnic được thành lập năm nào ?\n");
//    2. hiển thị đáp án
    printf("A: 2000 \t\t C: 2009\n");
    printf("B: 2008 \t\t D: 2010\n");
    printf("Đáp án của bạn là: ");
//    3. nhận đáp án từ ng dùng
    char dap_an2;
    scanf("%s", &dap_an2);
//    4. kiểm tra đáp án (switch - case)
    switch (dap_an2) {
        case 'a':
            printf("Đáp án sai\n");
            break;
        case 'b':
            printf("Đáp án sai\n");
            break;
        case 'c':
            printf("Đáp án sai\n");
            break;
        case 'd':
            printf("Đáp án đúng\n");
            diem = diem+1;
            break;
        default:
            printf("Bạn cần chọn 1 trong các đáp án (a, b, c, d)\n");
            break;
    }

    printf("Câu hỏi 3: Số lượng ngành nghề được đào tạo tại FPT Polytechnic là bao nhiêu ?\n");
//    2. hiển thị đáp án
    printf("A: 4 \t\t C: 11\n");
    printf("B: 5 \t\t D: 13\n");
    printf("Đáp án của bạn là: ");
//    3. nhận đáp án từ ng dùng
    char dap_an3;
    scanf("%s", &dap_an3);
//    4. kiểm tra đáp án (switch - case)
    switch (dap_an3) {
        case 'a':
            printf("Đáp án sai\n");
            break;
        case 'b':
            printf("Đáp án sai\n");
            break;
        case 'c':
            printf("Đáp án sai\n");
            break;
        case 'd':
            printf("Đáp án đúng\n");
            diem++;
            break;
        default:
            printf("Bạn cần chọn 1 trong các đáp án (a, b, c, d)\n");
            break;
    }
    printf("Chúc mừng, bạn đạt được: %d", diem);



    return 0;
}
