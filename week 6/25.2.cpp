#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * 
//เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง(Level 3)
int main() {

	int n, a = 1;
	scanf("%d", &n);
	int b = n;
	for (int y = 1; y <= n; y++)
	{
		for (int b = 1; b <= n - y; b++)
		{
			printf(" ");
		}
		for (int x = 1; x <= (2 * y) - 1; x++)
		{
			printf("*");

		}
		printf("\n");

	}
	return 0;
}