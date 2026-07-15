#include <stdio.h>

int main()

	/*standard four subject expect to student put score*/
{
float p, c, m, e, score;
printf("Enter your jamb score result for each subject \n");
printf("Enter score for physics \n");
scanf("%2f",&p);
printf("Enter score for chemistry \n");
scanf("%2f",&c);
printf("Enter score for mathematics \n");
scanf("%2f",&m);
printf("Enter score for english \n");
scanf("%2f",&e);
score=(p + c + m + e);
printf("your score of jamb is= %f\n",score);
printf("CONGRATULATION YOU ARE ELIGIBLE \n");             return (0);
}
