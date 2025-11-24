// Comment nghia la khong cho trinh bien dich dich dong code nay
// Day la tien xu ly (proprocessor). Muc dich la nhung thu vien
// Standard Input Output ( thu vien nhap xuat chuan)
// vao trong file thuc thi
#include <stdio.h>
 
 // Day la ham ma chuong trinh se thuc thi dau tien
int main(){
	// day la than ham
	
	// Ham printf ( print formatted) dung de in ra man hinh mot cai gi do
	printf("Xin chao \n");
// so nguyen int %d
	int tuoi = 20;
// %d,%f,%lf,%c,... goi la
	printf("Tuoi cua toi la: %d \n", tuoi);
	
	float diemToan  = 4.5;
	float diemVan = 7.5;
	float diemAnh = 5.5;
	float diemTrungBinh;
// so thuc float %f	
	printf("Diem Toan: %f \n", diemToan);
	printf("Diem Van: %f \n", diemVan);
	printf("Diem Anh: %f \n", diemAnh);
	
	diemTrungBinh = (diemToan + diemVan + diemAnh) / 3;
	
	printf("Diem Trung Binh la: %f \n", diemTrungBinh);
	
	char kyTu = 'A';
// char ky tu %c
	printf("Gia tri cua bien kyTu la: %c \n",kyTu);
// De nhap du lieu tu ban phim thi minh dung ham scanf()
    int a = 0;
    
    int b = 0;
    printf("Nhap so a:");
    scanf("%d", &a);
    printf("Nhap so b:");
// Dau & la toan tu dia chi dung de xac dinh gia tri cua bien a
// duoc luu o dau trong bo nho Ram....
	
	printf("Gia tri cua bien a la: %d \n", a);
	
	scanf("%d", &b);
	
	printf("Gia tri cua bien b la: %d \n, b");
	
	return 0;
}
