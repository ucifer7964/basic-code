#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void sieve_of_eratosthenes(int n)
{
	int prime[n+1];
	for(int i=0;i<=n;i++)
	{
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	
	for(int i=2;i<=sqrt(n);i++)
	{
		if(prime[i]==1)
		{
			for(int j=2;i*j<=n;j++)
			{
				prime[i*j]=0;
			}
		}
	}
	
	for(int i=0;i<=n;i++)
	{
		if(prime[i]==1)
		{
			cout<<i<<ends;
		}
	}
}
int main()
{
	int n;
	cout<<"enter the no. upto which you want to print prime no.s";
	cin>>n;
	sieve_of_eratosthenes(n);
	getch();
}
