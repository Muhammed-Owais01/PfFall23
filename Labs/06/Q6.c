#include <stdio.h>
#include <stdbool.h>

int main() {
	int n, sticks = 21;
	bool flag = false;
	while (sticks > 1) {
		do {
			printf("Pick stick(s) 1,2,3, or 4: ");
			scanf("%d", &n);
		}
		while (n < 0 || n > 4);
		sticks -= n;
		printf("\nNumber of sticks left: %d\n", sticks);
		if (sticks == 1) {
			flag = true;
		}
		switch(n) {
			case 1:
				n = 4;
				break;
			case 2:
				n = 3;
				break;
			case 3:
				n = 2;
				break;
			case 4:
				n = 1;
				break;
		}
		printf("\nI Pick Number of Stick(s): %d\n", n);
		sticks -= n;
		printf("\nNumber of sticks left: %d\n", sticks);
		printf("\n");
	}
	if (flag == true) {
		printf("You win");
	} else {
		printf("I win");
	}
}

// 21 --> 3, toh i go for 2