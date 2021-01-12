#include<iostream>
using namespace std;

int main()
{
	int sum,sum1,sum2;
	int number;
	cout<<"enter number "<<endl;
	cin>>number;
	
	int arr[number][number];

	for (int i=0; i<number; i++)
	{
		for (int j=0; j<number; j++)
		{
			arr[i][j]=j+1;

		}
	
	}
	
	
		for (int i=0; i<number; i++)
	{
		for (int j=0; j<number; j++)
		{
			cout<<arr[i][j]<<"\t";

		}
		
		cout<<endl;
	}
	
	for ( int i=0; i<number; i++)
	{
		for(int  j=0; j<number ; j++)
		{
		  
		   if (i==j)
			{
				sum+=arr[i][j];
				
			}
			
		}
	}
	cout<<sum<<endl;
}
	

