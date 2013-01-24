#include <stdio.h>

struct data {
	char name[256];
	double height;
	double weight;
};
/*1T1(3)池田瞭人*/
/*課題５－１*/
void main(void) {
	struct data sdAry[1] = {{"岩崎デジ太",175.5,73.2}};
	printf("測定結果：\n");
	printf("%s  %fcm、%fkg\n", sdAry[0].name,sdAry[0].height,sdAry[0].weight);
}