#include<stdio.h>
void main()
  {
    int t;
    scanf("%d",&t);
    while(t--)
    { 
      long long int n,k,i,sum=0;
      scanf("%lld %lld",&n,&k);
      long long int a[n];
      for(i=0;i<n;i++)
      { 
          scanf("%lld ",&a[i]);
      }
      long long int day,flag,ans; 
      day=flag=0;
      for(i=0;i<(n-1);i++)
       {   
           if(a[i]>=k)
            { 
              a[i+1]+=a[i]-k;
              day++;
            }
           else
            {   flag=1;
                day++;
                break;
            }
       }    
     if(flag==1)
      printf("%lld\n",day);
     else
     { ans=day+a[n-1]/k+1;
      printf("%lld\n",ans);}
    }
  }
	  
