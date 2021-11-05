#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
void main()
{
    float cal,Area;
    float calculate(); 
    float area();
    int factorial,Prime,Pallindrome,Even;
    int choice;
    int Largest;
    int Match_stick_game;
    
    
    int prime();
    int even();
    int pallindrome();
    int largest();
    int match_stick_game();

    
    printf("    My name is Rohitash Singh.\n ");
    printf("   I am pursuing B.Tech in computer science and engineering\n ");
    printf("   from B.S.A college of engineering and technology Mathura.\n ");
    printf("\n   press 0 for calculator:\n");
    printf("   press 1 for area:\n");
    printf("   press 2 for prime:\n");
    printf("   press 3 for even:\n");
    printf("   press 4 for Pallindrome:\n");
    printf("   press 5 for largest:\n");
    printf("   press 6 for match_stick_game:\n");
    printf("   enter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 0:
        cal=calculate();
        break;
        
        case 1:
        Area=area();
        break;
        
        case 2:
        Prime=prime();
        break;
        
        case 3:
        Even=even();
        break;
        
        case 4:
        Pallindrome=pallindrome();
        break;
        
        case 5:
        Largest=largest();
        break;
        
        case 6:
        Match_stick_game=match_stick_game();
        break;
        
        
        default :
        printf("wrong choice");
        
    
    }
    
   void main();
    
    
    
    
    
    
    
    
    
    
   
    getch();
}
    
    
    float calculate()
    {
        char choice;
        float a,b,c;
    
        printf("    enter first number: ");
        scanf("%f",&a);
        printf("    enter second number ");
        scanf("%f",&b); 
        printf("\n  enter + for addition:");
        printf("\n  enter - for substraction:");
        printf("\n  enter * for multiplication:");
        printf("\n  enter / for division:");
        fflush(stdin);
        printf("\n  enter your choice:");
        scanf(" %c",&choice);
    
        switch(choice)
        {   
            case '+':
            { 
             c=a+b;
             printf("  addition is %.2f",c);
             break;
            }
            case '-':
            { 
                 c=a-b;
                 printf("  substraction is %.2f",c);
                 break;
            }
            case '*':
            { 
                  c=a*b;
                  printf("  multiplication is %.2f",c);
                  break;
            } 
            case '/':
            { 
                  c=a/b;
                  printf("  division is %.2f",c);
                  break;
            }
            default:
            {
                ("   your choice is wrong ");
            }
        }
     return(c);
    }
    
    
    
    
    
    
   float area() 
   {
    int choice;
    float l,b,s,h,r,area;
    char grade;
    printf("   enter 1 for area of rectangle:\n");
    printf("   enter 2 for area of square:\n");
    printf("   enter 3 for area of triangle:\n");
    printf("   enter 4 for area of circle:\n");
    printf("   enter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        { 
             printf("   enter the length and breadth of rectangle :");
             scanf("%f%f",&l,&b);
             area=l*b;
             printf("   Area of rectangle is %.2f",area);
             break;
        }
        case 2:
        { 
             printf("   enter the side of square");
             scanf("%f",&s);
             area=s*s;
             printf("   Area of square is %.2f",area);
             break;
        }
        case 3:
        { 
             printf("   enter the base and height of triangle");
             scanf("%f%f",&b,&h);
             area=0.5*b*h;
             printf("   Area of triangle is %.2f",area);
             break;
        }
        case 4:
        { 
             printf("   enter the radius of circle");
             scanf("%f",&r);
             area=3.14*r*r;
             printf("   Area of circle is %.2f",area);
             break;
        }
        default:
        printf("   your choice is wrong");
    } 
   }
   
   
   
   
   
   
   
   int prime()
{
    
    int n,i,flag=0;
    printf("   enter a number");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("   Not Prime");
        exit(0);
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
            if(flag==0)
            {
                printf("   Prime Number");
            }
            else
            {
                printf("   Not Prime");
            }
    }
    
}







  int even()
{
    
   
    
    
        int n;
        printf("   enter a number:");
        scanf("%d",&n);
         if(n%2==0)
         {
               printf("   even number" );
         }
         else
         {
               printf("   Odd number ");
         }
    

}





int pallindrome()
{
    
    int n,r,rev=0,t;
    printf("enter a number");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    
        printf("Reverse number is %d",rev);
    if(t==rev)
    {
        printf("\nPallindrome");
    }
    else
    {
        printf("\nNot Pallindrome");
    }
}



int largest()
    {

printf("   Program to accept three integers and print the largest among them.\n");



        int a,b,c;
        printf("   enter first number\n ");
        scanf("%d",&a);
        printf("   enter second number\n ");
        scanf("%d",&b);
        printf("   enter third number\n ");
        scanf("%d",&c);
        
    if((a==b)&&(b==c)&&(c==a))
        printf("Equal number");
    else
    {
        if(a>b)
        {
            if(a>c)
                printf("   %d is largest",a);
                
            else
	            printf("   %d is largest",c);
        }
        else
        {   
            if(b>c)
 	              printf("   %d is largest",b);
            else
	              printf("   %d is largest",c);
        }

    }
}













int match_stick_game()
{

printf("   A program for a match-stick game between the computer and a user\n.");
printf("   This program should ensure that the computer always wins.\n "); 
printf("   Rules for the game are as follows \n");
printf("    •	There are21 match-sticks. \n");
printf("    •	The computer asks the player to pick 1, 2, 3, or 4 match-sticks.\n ");
printf("   •	After the person picks, the computer does its picking.\n ");
printf("   •	Whenever is forced to pick up the last match stick loses the game.\n");




   int ms=21,c,u;
   while(1)
   {
       printf("\n    Number of match sticks left is %d \n",ms);
        printf("    User Pick  the match sticks 1,2,3 or 4:\n ");
        printf("   Please! User enter the Number: ");
        scanf("%d",&u);
        if(u>4||u<1)
        {
          printf("   you choose wrong \n"); 
          continue;
        }
        ms=ms-u;
        printf("    Number of match sticks left is %d\n",ms);
        c=5-u;
        printf("    computer pick the match sticks is %d\n",c);
        ms=ms-c;
        if(ms==1)
       {
           printf("\n   YOU LOST THE GAME:🤦\n PLEASE TRY AGAIN ");
           break;
       }
   }
 
}