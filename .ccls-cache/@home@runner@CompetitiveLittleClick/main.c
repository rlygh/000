#include <stdio.h>

int n, k, d[1010];
int lower_bound(int k)
{
  int s,e,m;
   s=1;
  e=n+1;
  while(s<e){
    m=(s+e)/2;
    if (d[m]<k){
      s=m+1;
    }else{
      e=m;
    }
  }
  return e;
}

int main()
{
  scanf("%d %d", &n,&k);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  printf("%d\n", lower_bound(k));
}