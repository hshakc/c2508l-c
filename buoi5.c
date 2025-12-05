#include <stdio.h>

int main(){
	//bai tap
	int a,b,tam;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	

	if (a>b){
		tam = a;
		a = b;
		b = tam;
	}
	printf("sau khi hoan doi : a=%d , b=%d\n", a,b);
	//bai tap
	int a,b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	if(a==b){
		printf("a bang b\n");
		
	}else{
		printf("a khac b\n");
	}
	//bai tap
	char c;
	printf("Nhap c: ");
	scanf("%c", &c);
	if(c>='a' && c<='z'){
		c = c -32;
		printf("Ky tu in hoa la :%c ", c);
	
	}else{
		printf("Ki tu chung ta vua nhap la :%c " , c);
	}
	// bai tap
	char c;
	printf("Nhap c: ");
	scanf("%c", &c);
	if(c>='a' && c<='z'){
		c = c -32;
		printf("Ky tu in hoa la :%c ", c);
    }else if(c>='A' && c<='Z'){
    	c = c + 32;
    	printf("Ky tu in thuong la :%c",c);
	}else if(c>='0' && c<='9'){
		printf("Ki tu chung ta vua nhap la so : %c",c);
	}else{
		printf("Chung ta da nhap ki tu : %c", c);
	}
	// bai tap
	int tuoi, giave = 50000,tienphaitra;
	printf("Nhap tuoi :");
	scanf("%d", &tuoi);       
	if(tuoi < 6){
		tienphaitra = giave * 0.5;
	}else if(tuoi>=6 && tuoi <=10){
		tienphaitra = giave * 0.3;
		
	}else if(tuoi>=11 && tuoi <= 15){
		tienphaitra = giave * 0.15;
	}
	else{
		tienphaitra = giave;
	}
	printf("Tien phai tra : %d", giave);
	//bai tap
	
	   
	
	
	
	return 0;
}



	
