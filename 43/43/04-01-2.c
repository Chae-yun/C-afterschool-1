#include <stdio.h>
#define OPEN 1
#define CLOSE 0
int main()
{
	int man, room[101] = { CLOSE, }, room_no = 1;
	for (man = 1; man <= 100; man++){
		for (room_no = 1; room_no <= 100; room_no++){
			if (room_no%man == 0)
				room[room_no] = !room[room_no];
		}
	}
	for (room_no = 1; room_no <= 100; room_no++){
		if (room[room_no] == OPEN)
			printf("%d ", room_no);
	}
}