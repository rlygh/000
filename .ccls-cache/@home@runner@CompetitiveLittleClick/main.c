#include <stdio.h>
int n,inp[1010],dp[1010],ans;

int main()
{
   scanf("%d", &n);
  for(int i=0; i<n; i++)
    scanf("%d", &inp[i]);//입력
  
  for (int i=0;i<n;i++){
      dp[i] =1;
      for (int j=0;j<i; j++){
        if (inp[j]<inp[i]) ans=inp[i+j];
        if (ans>dp[i]) dp[i]=ans;     
      }
    ans=0;
    }
  for (int i=0; i<n; i++){
    if(dp[i]>ans) ans=dp[i];
    printf("%d ",ans);
  } //printf("%d",ans);
}