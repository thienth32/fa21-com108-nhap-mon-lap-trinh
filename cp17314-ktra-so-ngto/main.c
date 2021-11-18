#include <stdio.h>
#include <stdbool.h>

bool ktr_so_ngto(x){
    if(x<2){
        return false;
    }
    if(x == 2){
        return true;
    }
    int count = 0;
    for (int i = 2; i < x; i++) {
        if(x%i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        return true;
    }
    return false;
//    return count == 0;
//    return true|false
}

int main() {
    int lua_chon;
    do {
        printf("moi ban nhap so:");
        int x;
        scanf("%d", &x);
        if(ktr_so_ngto(x) == true){
            printf("%d la so nguyen to\n", x);
        }else{
            printf("%d khong la so nguyen to\n", x);
        }
        printf("choi tiep chu?(0|1)");
        scanf("%d", &lua_chon);
    } while (lua_chon == true);
    return 0;
}
