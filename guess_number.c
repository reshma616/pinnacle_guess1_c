#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int mynum,usernum;
	srand(time(NULL));
	mynum=rand()%10;
	
	printf("I have a number in my mind(0-9). can you Guess it?\n");
	
	while(1)
	{
		
	printf("Enter your Guess : ");
	scanf("%d",&usernum);
	
	if(mynum==usernum)
	{
		printf("You are Right!");
		break;
	}
	else if(mynum>usernum)
	{
		printf("My number is greater than %d. Try Again\n\n",usernum);
	}
	else
	{
		printf("My number is smaller than %d. Try Again\n\n",usernum);
	}
      }
      return 0;
}









