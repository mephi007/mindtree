#include <iostream>

using namespace std;

int main()
{
	int i , j , n , k, num;
	k =0;
	n=4;
	num=0;

	for(i=1 ; i<= 2*n ; i++)
	{
		i<=n?k++&num++:k--&num--;
		
		for(j=1; j<=2*n-1 ; j++)
		{
			if(j<=2*k-1)
			{
				if(j%2==0)
				{
				cout<<"*";
				}
				else cout<<num;

			}
			else cout<<" ";
		}
		cout<<endl;
	}
}