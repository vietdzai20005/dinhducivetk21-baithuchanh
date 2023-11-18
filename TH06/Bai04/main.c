#include <stdio.h>
#include <stdlib.h>

/* Bai 4. Dinh nghia kieu du lieu Time, gom cac thanh phan du lieu: gio, phut, giay. Hay viet cac ham:
	a. Ham nhap du lieu kieu Time
	b. Ham nham tang thoi gian hien co len x giay
Viet ham chinh co su dung cac ham tren. */

typedef struct {
    int hour;
    int minute;
    int second;
} Time;

void inputTime(Time *t) {
    printf("Nhap gio: ");
    scanf("%d", &t->hour);
    printf("Nhap phut: ");
    scanf("%d", &t->minute);
    printf("Nhap giay: ");
    scanf("%d", &t->second);
}

void increaseTime(Time *t, int x) {
    t->second += x;
    while (t->second >= 60) {
        t->second -= 60;
        t->minute++;
    }
    while (t->minute >= 60) {
        t->minute -= 60;
        t->hour++;
    }
}

int main() {
    Time t;

    // Nhap thoi gian
    inputTime(&t);

    // Tang thoi gian len 10 giay
    increaseTime(&t, 10);

    // Xuat thoi gian
    printf("Thoi gian sau khi tang: %02d:%02d:%02d\n", t.hour, t.minute, t.second);

    return 0;
}



