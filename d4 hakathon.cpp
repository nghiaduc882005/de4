#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n,m,i,j,f;
	printf("Nhap vao so dong cua mang 2 chieu: ");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu: ");
	scanf("%d",&m);
	int arr[n][m];
	int column;
	int row;
	int is_prime;
	int sumNumbers;
	int max;
	int min;
	int count;
	int estimatedNumber;
	do{
		printf("***************MENU**************\n");
		printf("1.Nhap gia tri cac phan tu cua mang\n");
		printf("2.In gia tri cac phan tu trong mang theo ma tran\n");
		printf("3.Tinh so luong cac phan tu le chia het cho 5 trong mang\n");
		printf("4.In ra cac phan tu co gia tri lon nhat, nho nhat nam trên duong bien, duong cheo chinh, duong cheo phu\n");
		printf("5.Su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan theo dong cua mang\n");
		printf("6.Tinh tong cac phan tu la so nguyen to trong mang\n");
		printf("7.Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan\n");
		printf("8.Nhap gia tri mot mang 1 chieu gom n phan tu và chi so cot muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
		printf("9.Thoat\n");
		
        printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
		    case 1:
		    	printf("Nhap gia tri cac phan tu mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("arr[%d][%d]=",i,j);
						scanf("%d",&arr[i][j]);
					}
				}
		    	break;
		    case 2:
		    	printf("Gia tri cac phan tu trong mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
		    	break;
		    case 3:
		    	printf("so phan tu le chia het cho 5 trong mang la:");
				for (int i = 0; i < row; i++){
					for(int j = 0; j < column; j++){
						if(arr[i][j] % 2 != 0 && arr[i][j] % 5 == 0){
							count++;
						}
					}
				}
				printf("%d\n",count);
		    	break;
		    case 4:
		    	min = arr[0][0];
		    	max = arr[0][0];
		    	for (int i = 0; i < row; i++){
					for (int j = 0; j < column; j++){
						max = (max < arr[i][j]) ? arr[i][j] : max;
						min = (min > arr[i][j]) ? arr[i][j] : min;
					}
				}
				printf("Gia tri lon nhat: %d\t - Gia tri nho nhat: la %d\n",max,min);
		    	break;
		    case 5:
		    	for(int n=0;n<row-1;n++){
					for(int m=0;m<column-1;m++){
						for(int i=n+1;i<row;i++){
							for(int j=m+1;j<column;j++){
								if(arr[n][m]>arr[i][j]){
									int temp=arr[n][m];
									arr[n][m]=arr[i][j];
									arr[i][j]=temp;
								}
							}
						}
					}
				}
				break;
		    case 6:
		    	for(int n=0;n<row;n++){
					for(int m=0;m<column;m++){
						for(int n=2;n<=arr[n][m]/2;n++){
							if(arr[n][m]%n==0){
								estimatedNumber++;
							}
						}
						if(estimatedNumber==0){
							printf("Day la so nguyen to");
						}else{
							printf("Day khong phai la so nguyen to");
						}
					}
				}
		    	break;
		    case 7:
		    	break;
		    case 8:
		    	break;
		    case 9:
		    	printf("Ket thuc!!!");
				exit(0);
			default:
				printf("Vui long nhap tu 1-9");
		}
	}while(1==1);
}
