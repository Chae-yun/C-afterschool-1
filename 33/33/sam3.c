#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	FILE *ifp, *ofp;
	char name[20];
	int one;
	int two;
	int three;
	int res;
	int sum = 0;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}

	while (1){
		res = fscanf(ifp, "%s%d%d%d", name, &one, &two, &three);
		sum = one + two + three;
		if (res == EOF) break;
		fprintf(ofp, "%s %3d %3d %3d %3d\n", name, one, two, three, sum);
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}