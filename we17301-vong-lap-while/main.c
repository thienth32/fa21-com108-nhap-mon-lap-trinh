#include <stdio.h>
#include <stdbool.h>

int main() {

    bool tiep_tuc_lap = true;
    int dap_an;
    while (tiep_tuc_lap == true){
        printf("Chọn 1 đáp án (1, 2, 3, 4): ");

        scanf("%d", &dap_an);
        if(dap_an == 1 || dap_an == 2 || dap_an == 3 || dap_an == 4){
            printf("Thông minh đấy!");
            tiep_tuc_lap = false;
        }
    }
    return 0;
}
