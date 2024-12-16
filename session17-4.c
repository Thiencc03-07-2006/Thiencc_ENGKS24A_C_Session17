#include <stdio.h>

void inputArr();

void evenNumbers();

void primeNumbers();

void reverseArr();

void sortArr();

void findArr();
int main(){
    int arr[100],n=0,type,check=0,sortType;
    do{
        printf("\n\tMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Nhap vao mot phan tu va tim kiem trong mang\n");
        printf("6. Sap xep mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&type);
        switch(type){
            case 1:
                inputArr(arr,&n);
                check=-1;
                break;
            case 2:
                if(check){
                    evenNumbers(arr,n);
                }
                break;
            case 3:
                if(check){
                    primeNumbers(arr,n);
                }
                break;
            case 4:
                if(check){
                    reverseArr(arr,n);
                }
                break;
            case 5:
                if(check){
                    findArr(arr,n);
                }
                break;
            case 6:
                if(check){
                    printf("\n\tMENU SAP XEP\n");
                    printf("1. Tang dan\n");
                    printf("2. Giam dan\n");
                    printf("Lua chon cua ban: ");
                    scanf("%d",&sortType);
                    if(sortType==1){
                        sortArr(arr,n,-1);
                    }else if(sortType==2){
                        sortArr(arr,n,0);
                    }
                }
                break;
        }
    }while(type != 7);
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

void evenNumbers(int *ptr,int n){
	int i=0;
	while(i<n){
		if(*(ptr+i)%2==0){
			printf("[%d]",*(ptr+i));
		}
		i++;
	}
}

void primeNumbers(int *ptr,int n){
	int i=0,j,check;
    while(i<n){
		check=-1;
        if(*(ptr+i)<2){
        	i++;
            continue;
        }else{
        	j=2;
            while(j<*(ptr+i)){
                if(*(ptr+i)%j==0){
                	check=0;
                    break;
                }
                j++;
            }
        }
        if(check){
			printf("[%d]",*(ptr+i));
        }
        i++;
    }
}

void reverseArr(int *ptr,int n){
	int i=0;
	while(i<n){
		printf("[%d]",*(ptr+n-i-1));
		i++;
	}
}

void findArr(int *ptr,int n){
    int num,i=0;
    printf("Nhap phan tu can tim: ");
    scanf("%d",&num);
    printf("Phan tu xuat hien o vi tri: ");
    while(i<n){
        if(*(ptr+i)==num){
            printf("[%d]",i);
        }
		i++;
    }
}

void sortArr(int *ptr,int n,int check){
    int i=0,j,save;
    if(check){
		while(i<n-1){
			j=0;
			while(j<n-i-1){
				if(*(ptr+j)>*(ptr+j+1)){
					save=*(ptr+j+1);
					*(ptr+j+1)=*(ptr+j);
					*(ptr+j)=save;
				}
				j++;
			}
			i++;
		}
	}else{
		while(i<n-1){
			j=0;
			while(j<n-i-1){
				if(*(ptr+j)<*(ptr+j+1)){
					save=*(ptr+j+1);
					*(ptr+j+1)=*(ptr+j);
					*(ptr+j)=save;
				}
				j++;
			}
			i++;
		}
	}
}
