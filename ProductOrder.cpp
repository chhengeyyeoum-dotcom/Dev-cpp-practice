#include <stdio.h>
#include <conio.h>

int main(){
	double p1,p2,p3,dis,total,disPrice,payment;
	
	printf("Enter P1 =$");
	scanf("%lf",&p1);
	printf("Enter P2 =$");
	scanf("%lf",&p2);
	printf("Enter P3 =$");
	scanf("%lf",&p3);
	printf("Enter Dis(%%)=");
	scanf("%lf",&dis);
	
	total = p1 + p2 + p3;
	disPrice = total * dis /100;
	payment = total - disPrice;
	
	printf("------------------------------\n");
	printf("Total			=$%.2lf\n",total);
	printf("DisPrice		=$%.2lf\n",disPrice);
	printf("Payment			=$%.2lf\n",payment);
	
	getch();
	return 0;
	
}
