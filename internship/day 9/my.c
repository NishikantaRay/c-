#include<stdio.h>
int MostFrequentDigit(int, int, int, int);
main()
{
	int input1,input2,input3,input4,res;
	printf("Enter 4 numbers : ");
	scanf(" %d %d %d %d",&input1,&input2,&input3,&input4);
	res = MostFrequentDigit(input1,input2,input3,input4);
	printf("Most Frequent digit is %d",res);
}
int MostFrequentDigit(int input1, int input2, int input3, int input4)
{
	int count[10],i,temp,temp2,no,max[10];
	no=0;
	for(i=0;i<10;i++)
	{
		count[i]=0;
		max[i]=0;
	}
	int ser(int numb)
	{	
		while(numb)
		{
			temp = numb%10;
			count[temp]++;
			numb /= 10;
		}
	}
	ser(input1);
	ser(input2);
	ser(input3);
	ser(input4);
	temp2 = count[0];
	for(i=1;i<10;i++)
	{
		if(temp2<count[i])
		{
			temp2 = count[i];
		}
	}
	for(i=0;i<10;i++)
	{
		if(temp2 == count[i])
		{
			max[no] = i;
			no++;
		}
	}
	return max[no-1];
}
