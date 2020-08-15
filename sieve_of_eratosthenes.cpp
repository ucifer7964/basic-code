/*
This code is based on seive of eratosthenes algorithm...which is very efficient in finding the prime numbers upto a numbe
time complexity=O(n.loglogn)
*/

#include<bits/stdc++.h>
using namespace std;

void print_array(int *prime,int n)
{
     for(int i=0;i<n;i++)
     {
        if(prime[i]==1)cout<<i<<ends;
     }
}
	
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
	
  print_array(prime,n+1);
}
int main()
{
	int n;
	cout<<"enter the no. upto which you want to print prime no.s";
	cin>>n;
	sieve_of_eratosthenes(n);
}
