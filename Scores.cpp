#include <stdio.h>
#include <conio.h>

int main(){
	double c,cs,java,html,be,avg;
	
	printf("Enter Scores of C	= ");
	scanf("%lf",&c);
	printf("Enter Scores of C#	= ");
	scanf("%lf",&cs);
	printf("Enter Scores of Java	= ");
	scanf("%lf",&java);
	printf("Enter Scores of HTML	= ");
	scanf("%lf",&html);
	printf("Enter Scores of BE	= ");
	scanf("%lf",&be);
	
	avg = (c+cs+java+html+be)/5;
	
	printf("--------------------------------------------------------------------\n");
	printf("C\tC#\tJava\tHTML\tBE\tAVG\n");
	printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",c,cs,java,html,be,avg);
	
	
	getch();
	return 0;
}
