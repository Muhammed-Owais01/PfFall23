/*
 * Name: Muhammed Owais
 * Date: 9/11/2023
 * Description: This prints the quadratic solutions.
 * Related Files:
 */

//--Include Files--//
#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	float ans, ans1, ans2;
	do { // makes correct equation values are entered
		do {
			printf("Enter x square:");
			scanf("%d", &a);
		}
		while (a == 0);
		printf("Enter x: ");
		scanf("%d", &b);
		printf("Enter constant: ");
		scanf("%d", &c);
		ans = (b*b) - (4*a*c);
	}
	while (ans < 0); // if ans is negative then it cannot be squared
	ans1 = ((-1*b) + sqrt(ans))/(2*a); // stores first solution
	ans2 = ((-1*b) - sqrt(ans))/(2*a); // stores second solution
	printf("The two solutions are: %f, %f", ans1,ans2);
	return 1;
} // end main