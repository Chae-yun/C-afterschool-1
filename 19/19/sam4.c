#include<stdio.h>
#pragma warning(disable:4996)
int IsDigit(char num);
int main(){
	char num;
	printf("���ڸ� �ϳ� �Է��Ͻÿ� : ");
	scanf("%c", &num);
	if (IsDigit(num)){
		printf("�����Դϴ�.\n");
	}
	else{
		printf("���ڰ� �ƴմϴ�.\n");
	}
}
int IsDigit(char num){
	if (num >= '0' && num <= '9'){
		return 1;
	}
	else{
		return 0;
	}
}