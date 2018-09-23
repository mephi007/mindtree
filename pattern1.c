#include <iostream>

using namespace std;

int main()
{
	int i,j,n,num;
	n = 4;
	num=1;

	for(i=1; i<=n; i++)
	{
		for(j=1 ; j<=2*n-1 ; j++)
		{
			if(j<=2*i-1)
			{
				if(j%2 ==0)
				{
					cout<<"*";
				}
				else
				{
					cout<<num++;
				}

			}
			
			else 
			{
				cout<<" ";
			}
		}
		cout<<endl;	
	}
}