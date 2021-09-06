#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็น
//สี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามาโดยมีพื้นที่เป็นตารางหมากรุก ดังตัวอย่าง(Level 2)
int main() {
	int rows;
	scanf("%d", &rows);
	for (int i=1; i <= rows; i++) {
		for (int j=1; j <= rows; j++) {
			if (i%2==1) {
				if (j % 2 == 1)
					printf("*");
				else
					printf(" ");
			}
			else
				if (j % 2 == 1)
					printf(" ");
				else
					printf("*");
		}
		printf("\n");
	}
	return 0;
}