#include<stdio.h>

struct point{
	int x, y;
};

int main()
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };
	struct point p3 = p1; //¸â¹ö ´ë ¸â¹ö ÃÊ±âÈ­ °¡´É
	struct point p4;
	printf("p3ÀÇ ÁÂÇ¥ : %d, %d\n", p3.x, p3.y);
	p4 = p2; //¸â¹ö ´ë ¸â¹ö ´ëÀÔ °¡´É
	printf("p4ÀÇ ÁÂÇ¥ : %d, %d\n", p4.x, p4.y);
	return 0;
}
