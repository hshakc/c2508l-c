#include <stdio.h>
     // function ptototype
     // khai bao tat ca cac ham chuc nang cua chuong trinh
     int tichNhan();
	 int tinhTong();
     void tinhHieu();
     int tinhTich();
     float tinhThuong();
     // tong cong tich
         int tongCongTich(){
    	int a, b , tong, tich;
	printf("Nhap a:" );
	scanf("%d",&a);
	printf("Nhap b:" );
	scanf("%d",&b);	
     	tong = a + b;
     	tich = a * b;
    return tong + tich ;
	}
     
     
    // chia 2 so
	
	float tinhThuong(){
	int a, b;
	printf("Nhap a:" );
	scanf("%d",&a);
	printf("Nhap b:" );
	scanf("%d",&b);
	
	return (float)a / b;
}
	
	// viet ham tinh tong 2 so 
int tinhTong(){
	int a, b;
	printf("Nhap a:" );
	scanf("%d",&a);
	printf("Nhap b:" );
	scanf("%d",&b);
	
	return a+b;
}

   // ham tru 2 so
void tinhHieu(){
	int a, b;
	printf("Nhap a:" );
	scanf("%d",&a);
	printf("Nhap b:" );
	scanf("%d",&b);
	
	printf("Hieu la: %d", a-b);
	
}
   
    // nhan 2 so
    int tinhTich(){
    	int a, b;
	printf("Nhap a:" );
	scanf("%d",&a);
	printf("Nhap b:" );
	scanf("%d",&b);
	
	return a * b;	
}
int main(){
	// function call (loi goi ham)
//	int tong;
//	tong = tinhTong();
//	printf("tong la : %d", tong);
	
//	tinhHieu();

//   int tich;
//   
//	tich = tinhTich();
//	printf("Tich la : %d", tich);

//    float thuong;
//    thuong = tinhThuong();
//    printf("Thuong la : %.2f", thuong);
	
	
	
	int ketQua = tongCongTich();
	printf("Tong cong tich la : %d", ketQua);

	
	return 0;
}




	
	
