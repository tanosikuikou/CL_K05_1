aaa
#include <stdio.h>

struct data {
	char name[256];
	double height;
	double weight;
};
/*1T1(3)rcÄl*/
/*ÛèT|P*/
void main(void) {
	struct data sdAry[1] = {{"âèfW¾",175.5,73.2}};
	printf("ªèÊF\n");
	printf("%s  %fcmA%fkg\n", sdAry[0].name,sdAry[0].height,sdAry[0].weight);
}