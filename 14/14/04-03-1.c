#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
typedef char string[50];
int main(){
	string c;
	strcpy(c, "This is typedef example.");
	printf("%s\n", c);
}