#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char address[50], zipcode[20];
	printf("우편번호와 주소 입력 : ");
	scanf("%[0123456789-]%*c%[^\n]", zipcode, address); //광주광역시(공백)북구 해도 공백이 적용된 형태로 출력됨.
	//[012345678-]는 뭐지? 0~9숫자랑 -가 들어갈수 있다?
	printf("우편번호 : %s\n주소 : %s\n", zipcode, address);
}