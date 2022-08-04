#include <stdio.h>
int a,n,inp[1010],dp[1010],ans;

int main()
{
   scanf("%d", &n);
  for(int i=0; i<n; i++)
    scanf("%d", &inp[i]);
  
  for (int i=0;i<n;i++)
    {
      dp[i] =1;
      for (int j=0;j<i; j++)
        {
          if (inp[j]<inp[i])
          {
            if (dp[i] <dp[j]+1) dp[i] =dp[j]+1;
          }
        }
    }
  for (int i=0; i<n; i++)
    {
      if (ans<dp[i]){
        ans=dp[i];
        a=i;
      }      
      printf("%d",inp[i]);
    }  
  printf("%d", ans);
  for (int i=0;i<n;i++){
    for(int j=0;j<i;j++){
    if (inp[a]<inp[i]&&inp[i]!=inp[j])
    }
  }
}