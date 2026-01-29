# 21-01-2026-SE
// accept book price from user and display on console screen
#include<stdio.h>
void main()
{
    // step 1 : variable decalaration 
    float  book_price;
    
    // step 2 : ask from user 
    printf("Enter book price : ");
    scanf("%f",&book_price);
    
    // step 3 : display book price on console screen 
    printf("\n book price = %.2f",book_price);
    
}

// Example of Airthmetic operators 

#include<stdio.h>
void main()
{
    int a,b;
    
    a = 10;
    b = 20;
    
    printf("%d + %d = %d",a,b,a+b);
    printf("\n%d - %d = %d",a,b,a-b);
    printf("\n%d * %d = %d",a,b,a*b);
    printf("\n%d / %d = %d",a,b,a/b);
    printf("\n%d %% %d = %d",a,b,a%b);
}

// Example of Relational operator 

#include<stdio.h>
void main()
{
    int num1,num2; // step 1 : variable declaration 
    
    num1 = 20;    // step 2 : variable defination 
    num2 = 34;
    
    // relational or comparision operator 
    // 0 - false  1 means true 
    
    int result;
    
    result = num1 > num2;
    printf("\n%d",result);
    
    result = num1 < num2;
    printf("\n%d",result);
    
    result = num1 == num2;
    printf("\n%d",result);
    
    result = num1 != num2;
    printf("\n%d",result);
}

// Example of Logical operator 

#include<stdio.h>
void main()
{
    int num1,num2,num3; // step 1 : variable declaration 
    
    num1 = 20;    // step 2 : variable defination 
    num2 = 34;
    num3 = 40;
    
    int result = (num1>num2) && (num1 > num3);
    printf("\n%d",result);
    
    result = (num1<num2) && (num1 < num3);
    printf("\n%d",result);
    
    result = (num1 > num2) || (num1 > num3);
    printf("\n%d",result);
}

// Example of unary operator 

#include<stdio.h>
void main()
{
    int x=5;
    
    printf("\n x = %d",x);
    printf("\n x++ = %d",x++);
    
    printf("\n x = %d",x);
    printf("\n ++x = %d",++x);
}


// find maximum value from 2 values : conditional operator 
// ternary operator : because it devided in 3 parts 
#include<stdio.h>
void main()
{
    int num1,num2;
    
    num1 = 45;
    num2 = 85;
    //          Exp1            Exp2    Exp3
    int max = (num1 > num2)  ?  num1  : num2;
    printf("\nmax = %d",max);
} 


// find even and odd number 
#include<stdio.h>
void main()
{
    int num;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("\n %d is Even number",num);
    }
    else
    {
        printf("\n %d is Odd number",num);
    }
}

#include<stdio.h>
void main()
{
    int a = 10;
    int b = 5;
    int c = 3;
    
    int ans = a + b - c;
    printf("\n ans = %d",ans);
    
     ans = a - b + c;
    printf("\n ans = %d",ans);
}


#include<stdio.h>
void main()
{
    int ans;
    
    ans = 19 + 7 * 3;
    printf("\n ans = %d",ans);
    
    ans = 18 * 6 / 2;
    printf("\n ans = %d",ans);
    
    ans = 12 + 6 * 3 / 2;
    printf("\n ans = %d",ans);
    
    ans = 10 + 4 + (30 - 3);
    printf("\n ans = %d",ans);
}


