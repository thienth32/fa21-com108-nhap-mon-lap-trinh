#include<stdio.h>
#include<string.h>
int main(){
	int syso;

	printf("Nhap so luong sinh vien: ");
	scanf("%d", &syso);
	char ds_ten[syso][100];
	float ds_diem[syso];
	getchar();
	for(int i=0;i<syso;i++){
		printf("Nhap ten sinh vien so %d: ",i+1);
		gets(ds_ten[i]);
	}
	for(int i=0;i<syso;i++){
		printf("Sinh vien: %s\n", ds_ten[i]);
		printf("Nhap diem :");
		scanf("%f", &ds_diem[i]);
	}
	char tmp_name[100];
	float temp;
	for(int i=0;i<syso-1;i++){
		for(int j=i+1;j<syso;j++){
			if(ds_diem[i]<ds_diem[j]){
				temp = ds_diem[j];
				strcpy(tmp_name, ds_ten[j]);
				ds_diem[j]=ds_diem[i];
				ds_diem[i]=temp;
				strcpy(ds_ten[j], ds_ten[i]);
                strcpy(ds_ten[i], tmp_name);
			}
		}
	}
    char hoc_luc[100];
	for(int i=0;i<syso;i++){
        if(ds_diem[i]>=9){
            strcpy(hoc_luc, "Xuat sac");
		}else if(ds_diem[i]>=8&&ds_diem[i]<9){
            strcpy(hoc_luc, "Gioi");
		}else if(ds_diem[i]>=6.5&&ds_diem[i]<8){
            strcpy(hoc_luc, "Kha");
		}else if(ds_diem[i]>=5&&ds_diem[i]<6.5){
            strcpy(hoc_luc, "TB");
		}else{
            strcpy(hoc_luc, "Yeu");
		}
		printf("Ho va ten: %s Diem: %f Hoc luc: %s\n",ds_ten[i],ds_diem[i],hoc_luc);

	}
	return 0;
}

