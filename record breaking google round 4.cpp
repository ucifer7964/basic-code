/*it is based on Kadane's algorithm
=>description: In this program basically there is two condition to say a day is record breaking
  1>  the days should have strictly greater visitors than the previous days,
  2>  either last day is record breaking day or strictly more no. of visitors from following day.
  */
  
  #include<iostream>
  using namespace std;
  
  int record_breaking(int*a,int n)
  {
      int days=0;
      int max_far_here=a[0];
      int max_temp_here;
      
      if(n==1)return 1;
      if(a[0]>a[1])days++;
      
      for(int i=1;i<n;i++)
      {
         max_temp_here=a[i];
         if(max_temp_here>max_far_here)
         {
            max_far_here=max_temp_here;
            if(i==n-1)
            {
               days++;
            }
            else if(max_far_here>a[i+1])
            {
              days++;
            }
         }
      }
      return days;
  }
  
  int main()
  {
  int t,number=1;
  cin>>t;
  while(t--)
  {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   int days=record_breaking(a,n);
   cout<<"Case #"<<number<<": "<<days<<endl;
   number++;
   }
   }
   
