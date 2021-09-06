#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * 
//เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง(Level 3)
int main() {


	int n;
	printf("Enter number :");
	scanf("%d", &n);

	for (int m = 1; m <= n; m++)
	{
		for (int g = 1; g <= 2*n - 1; g++)
		{
			if (g >= n - (m - 1) && g <= n + (m - 1)) { printf("*"); }
			else
				printf("1");
		}
		printf("\n");
	}
		

	
	return 0;
}