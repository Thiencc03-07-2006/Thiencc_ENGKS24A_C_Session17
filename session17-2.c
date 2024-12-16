#include <stdio.h>
#include <string.h>

void inputArr();

void printArr();

void charArr();

void numArr();

void specialArr();

int main(){
	int type,check=0,n;
	char arr[100];
	do{
		printf("\n	MENU\n");
		printf("\n1. Nhap vao chuoi\n2. In ra chuoi\n3. Dem so luong chu cai trong chuoi va in ra\n4. Dem so luong chu so trong chuoi va in ra\n5. Dem so luong ky tu dac biet trong chuoi va in ra\n6. Thoat\nLua chon cua ban: ");
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
					charArr(arr,n);
				}
				break;
			case 4:
				if(check){
					numArr(arr,n);
				}
				break;
			case 5:
				if(check){
					specialArr(arr,n);
				}
				break;
		}
	}while(type!=6);
	return 0;
}

void inputArr(char arr[100],int *n){
	fflush(stdin);
	printf("vui long nhap chuoi: ");
	gets(arr);
	arr[strcspn(arr,"\n")]='\0';
	*n=strlen(arr);
}

void printArr(char arr[100] ,int n){
	printf("[%s]",arr);
}

void charArr(char *ptr,int n){
    int i=0,count=0;
    while(i<n){
        if((*(ptr+i)>='A'&&*(ptr+i)<='Z')||(*(ptr+i)>='a'&&*(ptr+i)<='z')){
            count++;
        }
        i++;
    }
    printf("So chu cai la: %d",count);
}

void numArr(char *ptr,int n){
	int i=0,count=0;
	while(i<n){
        if(*(ptr+i)>='0'&&*(ptr+i)<='9'){
            count++;
        }
        i++;
    }
    printf("So chu so la: %d",count);
}

void specialArr(char *ptr,int n){
	int i=0,count=0;
	while(i<n){
        if(!((*(ptr+i)>='A'&&*(ptr+i)<='Z')||(*(ptr+i)>='a'&&*(ptr+i)<='z')||(*(ptr+i)>='0'&&*(ptr+i)<='9'))){
            count++;
        }
        i++;
    }
    printf("So ki tu dac biet la: %d",count);
}
