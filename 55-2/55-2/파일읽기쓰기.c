#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE *ifp, *ofp;
	char name[20];
	int age;
	double height;
	int res;
	ifp = fopen("A.txt", "r");
	if (ifp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}
	ofp = fopen("B.txt", "w");
	if (ofp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}
	while (1){
		res = fscanf(ifp, "%s%d%lf", name, &age, &height);
		if (res == EOF) break;
		fprintf(ofp, "%.1lf %d %s\n", height, age, name);
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}