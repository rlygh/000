#include <stdio.h>
int n,inp[1010],dp[1010],ans;

int main()
{
   scanf("%d", &n);
  for(int i=0; i<n; i++)
    scanf("%d", &inp[i]);//입력
  
  for (int i=0;i<n;i++)
    {
      dp[i] =inp[i];
      for (int j=0;j<i; j++)
        {
          if (inp[j]<inp[i])
          {
            if (dp[i] <dp[j]+inp[i]) dp[i] =dp[j]+inp[i];
          }
        }
    }
  for (int i=0; i<n; i++)
    {
      if (ans<dp[i]) ans=dp[i];
    }
  printf("%d", ans);
}