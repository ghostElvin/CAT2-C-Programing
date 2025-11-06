/*
  REG NO:CT101/G/26559/25
  NAME:KAGWIRIA ELVIN MACHARIA
  */
#include <stdio.h>

int main(){

float hours,gross_pay,wage,tax,net_pay;

//prompt user to enter hours worked in a week

printf("Enter hours worked in a week:");

scanf("%f", &hours);

//prompt user to enter hourly wage

printf("Enter the hourly wage:");

scanf("%f", &wage);

if (hours>40){

gross_pay=(40*wage) + ((hours-40)*wage*1.5);

}else{

gross_pay=(hours*wage);

}

if (gross_pay<=5000){

tax=(0.15*gross_pay);

}else if (gross_pay<=15000){

tax=(0.15*5000) + (0.20* (gross_pay-5000));

}else{

tax=(0.15*5000) + (0.20*10000) + (0.25*(gross_pay-15000));

}

net_pay=gross_pay-tax;

//results

printf("\nGross_pay:%.2f", gross_pay);

printf("\nTax:%.2f", tax);

printf("\nNet_pay:%.2f\n", net_pay);

return 0;

}
