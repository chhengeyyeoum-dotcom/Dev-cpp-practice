#include <stdio.h>
#include <conio.h>

int main_cpp(){
  printf("Hello\n");
  
  int age=23;
  double price=56.5;
  
  
  printf("age = %d\n",age);
  printf("price=%.2lf\n",price);
  
  int id;
  double amount;
  
  printf("Enter Id = ");
  scanf("%d",&id);
  printf("Enter Amount =$");
  scanf("%lf",&amount);
  
  getch();
  return 0;
}
