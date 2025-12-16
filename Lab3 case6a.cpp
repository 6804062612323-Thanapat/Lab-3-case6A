#include <stdio.h>

int main()
{
int score;

scanf("%d",&score);

if (score <= 100 && score >= 0 )	{
if (score >= 68) {
	if (score >= 85)
		printf("A");
	else if (score >= 75)
		printf("B");
	else 
		printf("C\nneed  %d score to B",75-score); //bonus 1
		
} else {
	if (score >= 55)
		printf("D");
	else 
		printf("F");
}
}
else { //bonus 2
	printf("error score");
}

	
return 0;
}






