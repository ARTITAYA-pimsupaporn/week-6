#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็น
//สี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามาโดยมีพื้นที่เป็นตารางหมากรุก ดังตัวอย่าง(Level 2)
int main() {
    int r;
    scanf_s("%d", &r);
    if (r % 2 != 0) {
        for (int i = 1; i <= (r - 1) / 2; i++)
        {
            for (int j = 1; j <= ((r + 1) / 2); j++) printf("* ");
                printf("\n");
                for (int j = 1; j <= ((r + 1) / 2) - 1; j++) {
                    printf(" *");
                }
                printf("\n");
           
        }
        for (int i = 1; i <= ((r + 1) / 2); i++) printf("* ");
    }
    else {
        for (int i = 1; i <= r / 2; i++) {
            for (int j = 1; j <= ((r) / 2) - 1; j++) printf("* ");
            printf("*\n");
            for (int j = 1; j <= ((r) / 2) - 1; j++)printf(" *");
            printf(" *");
            if (i != r / 2)printf("\n");
        }
    }
    return 0;
}
