// calculate the income tax paid by an employee to the government as per the data in the video
#include <stdio.h>

int main(){
    float salary;
    float lakh5;
    float lakh10;
    float lakh_abv;
    printf("Enter your income in lakhs\n");
    scanf("%f", &salary);
    lakh5 = (salary/100)*5;
    lakh10 = (salary/100)*20;
    lakh_abv =(salary/100)*30;
    if(salary < 2.5){
        printf("You don't need to pay the tax, Enjoy!");

    }else if ((salary>=2.5) || salary <5.0)
    {
        printf("Your final tax to be paid is %f\n ", lakh5);

    
    }else if ((salary>=5.0) || salary <= 10.0)
    {
        printf("Your final tax to be paid is %f\n", lakh10);
    }
    else if (salary > 10.0)    
    {
        printf("your final tax to be paid is%f\n", lakh_abv);

    }else{
        printf("Enter a valid amount of salary");
    }
    
    
    
return 0;
}