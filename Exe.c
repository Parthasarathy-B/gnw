// Priority Scheduling Algorithm
# include <stdio.h>
# include<conio.h>
int main()
{
 int p[4][5];
int i,j,temp,totwt=0,tota=0;
float wt,ta;
clrscr();
for(i=0;i<4;i++)
{
     P[i][1]=i+1;
printf(“\n enter the burst time %d=” +i+1);
scanf(“%d”,&p[i][2]);
print(“\n enter the priority of pricess %d:”,i+1);
scanf(“%d”.&p[i][0]);
}
for(j=0;j<4;j++)
{
for(i=1;i<4;i++)
{
if(p[i][0] < p[i-1][0])
{
temp=p[i][0];
p[i][0]=p[i-1][0];
p[i-1][0]=temp;
temp=p[i][1];
p[i][1]=p[i-1][1];
p[i-1][1]=temp;
temp=p[i][2];
p[i][2]=p[i-1][2];
p[i-1][2]=temp;
}
}
}
p[0][3]=0;
p[0][4]=p[0][2];
for(i=1;i<4;i++)
{
  P[i][3]=p[i-1][3]+p[i-1][2];
P[i][4]=p[i][3]+p[i][3]+p[i][2];+}
Printf(“\n process \t burst timr\t waiting time \n turn around time\n”);


