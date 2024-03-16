#include<stdio.h>
#include<conio.h>

#define size 10

int arr[size],track=-1;


void insert_data();
void delete_data();
void display_data();
void sort();

void main()
{
	int ch=0;
	clrscr();

	printf("\n enter 1 for insert_data");
	printf("\n enter 2 for delete_data");
	printf("\n enter 3 for display_data");
	printf("\n enter 4 for sort");
	printf("\n enter 5 for exit");

		do
		{
			 printf("\n Enter Your Choice : ");
			 scanf("%d",&ch);

			switch(ch)
			{

				 case 1 : insert_data();
					break;
				 case 2 : delete_data();
					  break;
				 case 3 : display_data();
					  break;
				 case 4 : sort();
					  break;
				 case 5 : printf("\n thank you for wisiting choice map");
					  break;
				 default : printf("\n wrong choice");
					break;
			}
		}while(ch!=5);
		getch();
}

	void insert_data()
	{
		if(track==size-1)
		{
			printf("\n your choice is full");
		}
		else
		{
			track++;
			printf("\n enter your data");
			scanf("%d",&arr[track]);
		}
	}
	void delete_data()
	{
		if(track==-1)
		{
			printf("\n Empty");
		}
		else
		{
			track--;
		}
	}
	void display_data()
	{
		int c=0;
		c=track;
		while(c>=0)
		{
			printf("\n your data is %d",arr[c]);
			c--;
		}
	}
	void sort()
	{
		int i=0,j=0;
		int temp=0;
		for(i=0;i<=track;i++)
		{
			for(j=0;j<=track;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
				printf("\n %d",arr[i]);
			}
		}
	}


