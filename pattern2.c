#include <iostream>

using namespace std;

int main()
{
	int i,j,n,k,count;
	n = 4;
	k=0;
	count=0;

	for(i=1; i<=n; i++)
	{
		k= count;
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
					if(i%2==0)
					{
						cout<<k+i;
						k--;
						count++;
					}
					else 
					{
						k = k+1;
						cout<<k;
						count++;
					}
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