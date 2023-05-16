#include<stdio.h>
int main()
{
	char str[20][100],(*p4)[100]=str;
	float T20_arr[20],ODI_arr[20],TEST_arr[20],*p1=T20_arr,*p2=ODI_arr,*p3=TEST_arr;
	float mat_t20[20],balls_t20[20],mat_odi[20],balls_odi[20],mat_test[20],balls_test[20];
	float *p5=mat_t20,*p6=mat_odi,*p7=mat_test,*p8=balls_t20,*p9=balls_odi,*p10=balls_test;
	float sr_t20[20],sr_odi[20],sr_test[20],*p11=sr_t20,*p12=sr_odi,*p13=sr_test;
	
	int i,n;
	printf("Enter the number of players");
	scanf("%d",&n);
	printf("Enter the names,scores,matches played,and balls faced in T20:\n");
	for(i=0;i<n;i++)
	{
		printf("---player %d---\n",i+1);
		printf("enter name of the player: ");
		scanf("%s",p4+i);
		printf("enter runs scored in T20: ");
		scanf("%f",p1+i);
		printf("enter matches played in T20: ");
		scanf("%f",p5+i);
		printf("enter balls faces in T20: ");
		scanf("%f",p8+i);	
		//scanf("%s%f%f%f",(p4+i),(p1+i),(p5+i),(p8+i));
	}
	printf("Enter the names,scores,matches played,and balls faced in ODI:\n");
	for(i=0;i<n;i++)
	{
		printf("---player %d---\n",i+1);
		printf("enter name of the player: ");
		scanf("%s",p4+i);
		printf("enter runs scored in ODI: ");
		scanf("%f",p2+i);
		printf("enter matches played in ODI: ");
		scanf("%f",p6+i);
		printf("enter balls faces in ODI: ");
		scanf("%f",p9+i);
	}
	printf("Enter the names,scores,matches played,and balls faced in TEST:\n");
	for(i=0;i<n;i++)
	{
		printf("---player %d---\n",i+1);
		printf("enter name of the player: ");
		scanf("%s",p4+i);
		printf("enter runs scored in TEST: ");
		scanf("%f",p3+i);
		printf("enter matches played in TEST: ");
		scanf("%f",p7+i);
		printf("enter balls faces in TEST: ");
		scanf("%f",p10+i);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("player %d\n",i+1);
		printf("In the T20, %s scored %f runs, faced %f balls in %f matches.\n",*(p4+i),*(p1+i),*(p8+i),*(p5+i));
		printf("In the ODI, %s scored %f runs, faced %f balls in %f matches.\n",*(p4+i),*(p2+i),*(p9+i),*(p6+i));
		printf("In the TEST, %s scored %f runs, faced %f balls in %f matches.\n\n",*(p4+i),*(p3+i),*(p10+i),*(p7+i));
	}
	for(i=0;i<n;i++)
	{
		printf("player %d\n",i+1);
		*(p11+i)=(*(p1+i)/  *(p8+i)*100);
		*(p12+i)=(*(p2+i)/  *(p9+i)*100);
		*(p13+i)=(*(p3+i)/  *(p10+i)*100);
		printf("strike rate of %s is %f in t20\n",*(p4+i),*(p11+i));
		printf("strike rate of %s is %f in odi\n",*(p4+i),*(p12+i));
		printf("strike rate of %s is %f in test\n",*(p4+i),*(p13+i));		
	}
	float h1,h2,h3;
	h1=*p11;h2=*p12;h3=*p13;
	for(i=0;i<n;i++)
	{
		if(h1<*(p11+i))
		h1=*(p11+i);
		if(h2<*(p12+i))
		h2=*(p12+i);
		if(h3<*(p13+i))
		h3=*(p13+i);		
	}
	int j,k,l;
	for(j=0;j<n;j++)
	{
		if(h1==*(p11+j))
		break;
	}
	printf("Highest strike rate in t20 is %f, scored by %s\n",h1,*(p4+j));
	for(k=0;k<n;k++)
	{
		if(h2==*(p12+k))
		break;	
    }
    printf("Highest strike rate in odi is %f, scored by %s\n",h2,*(p4+k));
	for(k=0;k<n;l++)
	{
		if(h3==*(p13+l))
		break;
	}
	printf("Highest strike rate in test is %f, scored by %s\n\n",h3,*(p4+l));
   	if(j==k||j==l)
   	printf("The highest strike rate in 2 formate is scored by %s\n",*(p4+j));
   	else if(k==l)
  	printf("The highest strike rate in 2 formate is scored by %s\n",*(p4+k));
  	else
  	printf("no player got highest in 2 formats");
}
