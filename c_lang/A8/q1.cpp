/* 8.Q01. Define a structure called Cricket that will describe the following information:
	Player name
    Team name
	Batting average
Now, using Cricket, declare an array Players with 10 elements and 
write a program to read the information about the 10 players and 
print a team-wise list containing names of players with their batting average.
*/


#include<stdio.h>
struct cricket
{
	char name[20];
	char team[20];
	float avg;
}player[20];
 main()
{
	int n,i;
	printf("Enter the number of players: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
		printf("Enter player name: ");
		fflush(stdin);
		gets(player[i].name);
		printf("Enter team name: ");
		gets(player[i].team);
		printf("Enter batting average: ");
		scanf("%f",&player[i].avg);
	}
	printf("PLAYER NAME\tTEAM NAME\tBATTING AVERAGE\n");
	for(i=0;i<n;i++)
		printf("%s\t\t%s\t\t%f\n",player[i].name,player[i].team,player[i].avg);	 
 
}
