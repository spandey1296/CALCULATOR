 #include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int main() 
{ 
    int a,b,n,d1,m1,y1,d2,m2,y2,y,d,m,age,time;
    char name[20];
    float cm, meter, km,principal_amt, rate,dollars, simple_interest;
    
    
    printf("FOR THE CASE '1' PROGRAM WILL CALCULATE BASIC ARITHMATIC OPERATION:\n");
    printf("FOR THE CASE '2' PROGRAM WILL CALCUALTE AGE OF A PERSON GIVEN BY DATE OF BIRTH  AND PRESENT DATE:\n");
    printf("FOR THE CASE '3' PROGRAM WILL CONVERT SI UNIT CONVERSION FORM M TO CM:\n");
    printf("FOR THE CASE '4' PROGRAM WILL CALCULATE SIMPLE INTEREST USING P,R,T:\n");
    printf("FOR THE CASE '5' PROGRAM WILL CONVERT DOOLAR TO INDIAN RUPEES:\n");
    printf("******************************************************************************************************\n");
    printf("Enter the number for which you want to get output:\n");
    
    scanf("%d",&n);
      switch(n) 
	{ 
       	case 1: 
	 printf("Enter two integers:\n");
      scanf("%d%d", &a, &b);
printf("Sum = %d\n", a+b);
   printf("Difference = %d\n", a-b);
   printf("Multiplication = %d\n", a*b);
   printf("Division = %d\n",a/b);
   break;
   
	case 2: 
     printf("Enter the name of the person:");
    scanf("%s",name);
     printf("Enter date of birth of %s :",name);
    printf("\nday:");
    scanf("%d",&d1);
    printf("month:");
    scanf("%d",&m1);
    printf("year:");
    scanf("%d",&y1);
    printf("\nEnter the present date :");
    printf("\nday:");
    scanf("%d",&d2);
    printf("month:");
    scanf("%d",&m2);
    printf("year:");
    scanf("%d",&y2);
    printf("The age of %s on %d/%d/%d is",name,d2,m2,y2);
  
    y=y2-y1;
    m=m2-m1;
    d=d2-d1;
    if((m2<m1)||((m1==m2)&&(d2<d1)))
    {
    y=y-1;
    }
    m=(12-m1)+m2;
    if (d2<d1)
    {
    d=d*-1;
    }
    printf(" %d years,%d months and %d days",y,m,d);
    break;

	case 3: 
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);
    meter = cm / 100.0;
    km    = cm / 100000.0;
    printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km", km);
      return 0;	
		break;
		

	case 4:
   printf("Enter Principle Amount");
    
    scanf("%f\n", &principal_amt);
    printf("Enter the Rate");
    scanf("%f\n",&rate);
    printf("Enter the Time");
    
    scanf("%d\n",&time);
    
    
    
    
    
    simple_interest = (principal_amt * rate * time) / 100.0;
    printf("Amount = Rs. %5.2f\n", principal_amt);
    printf("Rate = Rs. %5.2f%\n", rate);
    printf("Time = %d years\n", time);
    printf("Simple interest = %5.2f\n", simple_interest);
	break;
	
	
	case 5:
    printf("Please enter dollars:");
    scanf("%f", &dollars);
    float rupees = dollars * 64;
     printf("%.2f Rupees", rupees);
     break;
	
	default:
	printf("TRY AGAIN WITH BETTER INPUT");
	}	
} 

