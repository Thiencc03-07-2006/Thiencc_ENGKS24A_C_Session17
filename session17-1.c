#include <stdio.h>

void inputArr();

void printArr();

void lengthArr();

void sumArr();

void maxArr();

int main(){
	int type,check=0,arr[100],n;
	do{
		printf("\n	MENU\n");
		printf("\n1. Nhap vao so phan tu va tung phan tu\n2. Hien thi cac phan tu trong mang\n3. Tinh do dai mang\n4. Tinh tong cac phan tu trong mang\n5. Hien thi phan tu lon nhat\n6. Thoat\nLua chon cua ban: ");
		scanf("%d",&type);
		switch(type){
			case 1:
				inputArr(arr,&n);
				check=-1;
				break;
			case 2:
				if(check){
					printArr(arr,n);
				}
				break;
			case 3:
				if(check){
					lengthArr(n);
				}
				break;
			case 4:
				if(check){
					sumArr(arr,n);
				}
				break;
			case 5:
				if(check){
					maxArr(arr,n);
				}
				break;
		}
	}while(type!=6);
	return 0;
}

void inputArr(int *ptr,int *n){
	printf("vui long nhap do dai cua mang: ");
	scanf("%d",n);
	int i=0;
	while(i<*n){
		printf("nhap gia tri tai vi tri [%d]: ",i);
		scanf("%d",(ptr+i));
		i++;
	}
}

void printArr(int *ptr,int n){
	int i=0;
	while(i<n){
		printf("[%d]",*(ptr+i));
		i++;
	}
}

void lengthArr(int n){
	printf("do dai cua mang la %d",n);
}

void sumArr(int *ptr,int n){
	int sum=0,i=0;
	while(i<n){
		sum+=*(ptr+i);
		i++;
	}
	printf("tong cac phan tu trong mang la %d",sum);
}

void maxArr(int *ptr,int n){
	int i=0,max=*ptr;
	while(i<n){
		if(max<*(ptr+i)){
			max=*(ptr+i);
		}
		i++;
	}
	printf("so lon nhat la %d",max);
}
