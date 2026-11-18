#include<stdio.h>
void main()
{
 int choice;
 int rollnumber;
 char name[20];
 int Total;
 float average;
 char Grade;
 int marks1,marks2,marks3,marks4,marks5;
 int pass;
 do()
 {
     printf("STUDENT MARKS AND GRADE MANAGEMENT SYSTEM");
     printf("--------------------");
     printf("1.Enter Student Details");
     printf("2.Calculate Result");
     printf("3.Display Result");
     printf("4.Exit");
     printf("Enter your choice:");
     scanf("%d\n",&choice);
  switch(choice)
  {
   case1:
   printf("Enter Student Details");
   scanf("%s/n",&name[20]);
   printf("Enter Roll Number:");
   scanf("%d",&rollno);
   printf("Enter Mark 1:");
   scanf("%d",&m1);
   printf("Enter Mark 2:");
   scanf("%d",&m2);
   printf("Enter Mark 3:");
   scanf("%d",&m2);
   printf("Enter Mark 4:");
   scanf("%d",&m4);
   printf("Enter Mark 5:");
   scanf("%d",&m5);
   total=m1+m2+m3+m4+m5;
   average = total/5.0;
   if(average>=60)
   {
    if(average>=90)
    grade='A';
    else if(average>=80)
    grade='B';
    else if(average>=70)
    grade='C';
    else
    grade='D';
    printf("PASS");
    }
    else
    {
    grade='F';
   printf("fail");
   }
   break;
   case2:
   printf("STUDENT RESULT");
   printf("---------------");
   printf("Roll Number:%d\n",rollno);
   printf("Name:%s\n",name);
   printf("Total:%d\n",total);
   printf("Average:%f\n",average);
   printf("Grade:%c\n",grade);
   printf("Result:%s\n",result);
   break;
   case3:
   printf("Exit");
   break;
   }
   while(choice!=3);
   }
   }
   }


