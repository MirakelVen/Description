#include<stdio.h>
#include<math.h>


int main(){
	
	double workHours;
	double workHours2 = 0.0;
	double payRate;
	double tax;
	double tax2;
	double tax3;
	double totalTax;
	double netPay;
	
	printf("enter your work hour: ");
	scanf("%lf", &workHours);
	
	if(workHours<=40){
		
		payRate = workHours * 12.0;
		
	}else if(workHours>40){
		
		workHours2 = workHours - 40;
		payRate = (workHours2 * 18.0) + 480;	
	}
	
	if(payRate <= 300){
		
		tax = payRate * 15/100;
		netPay = payRate - tax;
		printf("your gross pay is : %.2f\n", payRate);
		printf("Your Taxes : %.2f\n", tax);
		printf("Your Net Pay : %.2f\n", netPay);
	}else if(payRate <= 450 && payRate > 300){
		
		tax = 300 * 15/100;
		tax2 = (payRate - 300) * 20/100;
		totalTax = tax+tax2;
		netPay = payRate - totalTax;
		printf("your gross pay is : %.2f\n", payRate);
		printf("Your Taxes : %.2f\n", totalTax);
		printf("Your Net Pay : %.2f\n", netPay);
		
	}else if(payRate > 450){
		
		tax = 300 * 15/100;
		tax2 = 150 * 20/100;
		tax3 = (payRate - 450) * 25/100;
		totalTax = tax+tax2+tax3;
		netPay = payRate - totalTax;
		printf("your gross pay is : %.2f\n", payRate);
		printf("Your Taxes : %.2f\n", totalTax);
		printf("Your Net Pay : %.2f\n", netPay);
		
	}
	
	return 0;
}