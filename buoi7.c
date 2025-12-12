#include <stdio.h>
int main(){
	//bai 1
//	int a;
//	printf("nhap so 1, 2, 3: ");
//	scanf("%d",&a);
//	switch (a){
//		case 1:
//			printf("*");
//			break;
//		case 2:
//			printf("**");
//			break;
//		case 3:
//			printf("***");
//			break;	
//		default:
//			printf("Chi duoc nhap 1-3");
//	}
	
	//bai 2
//	int thu;
//    printf("Nhap vao thu 1-7: ");
//    scanf("%d", &thu);
//
//    switch (thu) {
//        case 1:  
//		    printf("thu 2"); 
//		    break;
//        case 2: 
//		    printf("thu 3");
//		    break;
//        case 3:
//		    printf("thu 4");
//			break;
//        case 4: 
//		    printf("thu 5");
//			break;
//        case 5:
//		    printf("thu 6"); 
//			break;
//        case 6: 
//		    printf("thu 7");
//			break;
//        case 7: 
//		    printf("chu nhat"); 
//			break;
//        default: 
//		    printf("Thu khong hop le");
//    }
	
	// bai 3
//	int thang;
//	printf("Nhap thang 1-12 :");
//	scanf("%d",&thang);
//	switch(thang){
//		case 1 :
//		case 2 :
//		case 3 :
//			printf("Quy 1");
//			break;
//		case 4 :
//		case 5 :
//		case 6 :
//			printf("Quy 2");
//			break;	
//		case 7 :
//		case 8 :
//		case 9 :
//			printf("Quy 3");
//			break;
//		case 10 :
//		case 11 :
//		case 12 :
//			printf("Quy 4");
//			break;
//		default :
//			printf("Thang khong ho le ");
//    }
		// Bai 4
//		int menu1, menu2;
//
//    printf("=== MENU ===\n");
//    printf("1. Trai cay\n");
//    printf("2. Do uong\n");
//    printf("Nhap lua chon: ");
//    scanf("%d", &menu1);
//
//    switch (menu1) {
//
//      
//        case 1:
//            printf("\n--- MENU TRAI CAY ---\n");
//            printf("1. Tao\n");
//            printf("2. Xoai\n");
//            printf("Nhap lua chon: ");
//            scanf("%d", &menu2);
//
//            switch (menu2) {
//                case 1: 
//				printf("Ban da chon: Tao"); break;
//                case 2: 
//				printf("Ban da chon: Xoai"); break;
//                default: 
//				printf("Lua chon khong hop le!");
//				
//            }
//                break;
//
//        
//        case 2:
//            printf("\n--- MENU DO UONG ---\n");
//            printf("1. Tra sua\n");
//            printf("2. Cafe\n");
//            printf("Nhap lua chon: ");
//            scanf("%d", &menu2);
//
//            switch (menu2) {
//                case 1: 
//				printf("Ban da chon: Tra sua"); 
//				break;
//                case 2: 
//				printf("Ban da chon: Cafe"); 
//				break;
//                default: 
//				printf("Lua chon khong hop le!");
//            }
//                break;
//
//       
//        default:
//            printf("Menu khong hop le!");
//    }
	
	// xay dung menu 2 cap
      
//    Chuong trinh doc truyen 'Thien Long Bat Bo'
//	
//	1. Chuong 1
//	2. Chuong 2
//	3. Chuong 3
//	4. Chuong 4
//	
//	Moi ban nhap so chuong (1-4):
//	
//	1. Chuong 1 - Tap 1
//	2. Chuong 1 - Tap 2
//	3. Chuong 1 - Tap 3
//	
//	Moi ban nhap so tap (1-3):
//		
//	Nguoi dung nhap so 1 => In ra dong chu ban da chon "Chuong 1 - Tap 1"
    
//    int chuong, tap;
//    printf("Chuong trinh doc truyen 'Thien Long Bat Bo'\n");
//    printf("\n");
//    printf("Chuong 1 \n");
//	printf("Chuong 2 \n");
//	printf("Chuong 3 \n");
//	printf("Chuong 4 \n");	
//	printf("\n");
//	printf("Moi ban nhap so chuong (1-4):\n");
//	scanf("%d",&chuong);
//	
//	
//	switch(chuong){
//		case 1:
//			printf("Chuong 1 - Tap 1\n");
//			printf("Chuong 1 - Tap 2\n");
//			printf("Chuong 1 - Tap 3\n");
//			printf("Moi ban nhap so tap (1-3):\n");
//			scanf("%d",&tap);
//			printf("Ban da chon chuong %d tap %d",chuong, tap);
//			break;
//			
//		case 2:
//			printf("Chuong 2 - Tap 1\n");
//			printf("Chuong 2 - Tap 2\n");
//			printf("Chuong 2 - Tap 3\n");
//			printf("Moi ban nhap so tap (1-3):\n");
//			scanf("%d",&tap);
//			printf("Ban da chon chuong %d tap %d",chuong, tap);
//			break;
//		
//		case 3:
//		    printf("Chuong 3 - Tap 1\n");
//			printf("Chuong 3 - Tap 2\n");
//			printf("Chuong 3 - Tap 3\n");
//			printf("Moi ban nhap so tap (1-3):\n");
//			scanf("%d",&tap);
//			printf("Ban da chon chuong %d tap %d",chuong, tap);
//			break;
//			
//		case 4:
//		   printf("Chuong 4 - Tap 1\n");
//			printf("Chuong 4 - Tap 2\n");
//			printf("Chuong 4 - Tap 3\n");
//			printf("Moi ban nhap so tap (1-3):\n");
//			scanf("%d",&tap);
//			printf("Ban da chon chuong %d tap %d",chuong, tap);
//					
//	}

  // Vong lap for
  // in ra man hinh cac so tu 1 - 10
  // i la index ( chi muc )
  // bieu thuc 1: chi chay 1 lan duy nhat trong vong lap for
//    int i;
//    for(i = 1; i <= 10; i++){
////    	continue;
//    	printf("%d\n",i);
//    	
//	}
    // co cach nao khac de thoat khoi vong lap for khong?
    // dung break
    //Bai tap 1
    // In ra man hinh cac so chan chu 1 - 10
//    int i;
//    for(i = 1; i <= 10; i++){
//    	if(i % 2 == 0){
//    		printf("%d\n",i);
//		}
//	}
	// bai tap 2 tinh tong tu 1 - n voi n nhap tu ban phim
	 // vi du n = 5 => 1 + 2 + 3 + 4 + 5 =
	 int i, n, tong = 0;
	 printf("Nhap n: ");
	 scanf("%d", &n);
	
	for(i = 1; i<= n; i++){
		tong = tong + i;
	}
	   printf("Tong la : %d, tong");
	return 0;
}
