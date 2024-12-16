#include <stdio.h>
#include <string.h>

void inputArr();

void reverseArr();

void countWords();

void compareArr();

void upArr();

void appArr();

int main(){
    int type,check=0,n=0;
    char arr[200];
    do{
        printf("\n	MENU\n");
        printf("\n1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&type);
        switch(type){
            case 1:
                inputArr(arr,&n);
                check=1;
                break;
            case 2:
                if(check)reverseArr(arr,n);
                break;
            case 3:
                if(check)countWords(arr,n);
                break;
            case 4:
                if(check)compareArr(n);
                break;
            case 5:
                if(check)upArr(arr,n);
                break;
            case 6:
                if(check)appArr(arr,&n);
                break;
        }
    }while(type!=7);
    return 0;
}

void inputArr(char arr[100],int *n){
	fflush(stdin);
	printf("vui long nhap chuoi: ");
	gets(arr);
	arr[strcspn(arr,"\n")]='\0';
	*n=strlen(arr);
}

void reverseArr(char *ptr,int n){
    printf("Chuoi dao nguoc la: ");
    int i=0;
    while(i<=n-1){
        printf("%c",*(ptr+(n-i-1)));
        i++;
    }
}

void countWords(char *ptr,int n){
    int i=0,count=1;
    while(i<n){
        if(*(ptr+i)==' '){
            count++;
        }
        i++;
    }
    printf("So tu trong chuoi la: %d",count);
}

void compareArr(int n1){
	int n2;
	char arr[100];
    fflush(stdin);
	printf("vui long nhap chuoi 2: ");
	gets(arr);
	arr[strcspn(arr,"\n")]='\0';
	n2=strlen(arr);
    if(n2>n1){
        printf("Chuoi vua nhap dai hon chuoi ban dau");
    }else if(n2<n1){
        printf("Chuoi vua nhap ngan hon chuoi ban dau");
    }else{
        printf("Hai chuoi co do dai bang nhau");
    }
}

void upArr(char *ptr,int n){
    printf("Chuoi in hoa la: ");
    int i=0;
    while(i<n){
    	if(*(ptr+i)>='a'&&*(ptr+i)<='z'){
            printf("%c",*(ptr+i)-32);
        }else{
            printf("%c",*(ptr+i));
        }
        i++;
    }
}

void appArr(char *arr1,int *n1){
	char arr2[100];
    fflush(stdin);
	printf("vui long nhap chuoi: ");
	gets(arr2);
	arr2[strcspn(arr2,"\n")]='\0';
    strcat(arr1,arr2);
    *n1+=strlen(arr2);
    printf("Chuoi sau khi them: %s\n",arr1);
}
