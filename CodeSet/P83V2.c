#include<stdio.h>
double abs1(double x)
{
    if(x>0)
        x=x;
    else
        x=-x;
        return x;
}
int main()
{
    int n,m,a[1005],i,j1,j2,j;
    double hold;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
       for(j1 = 0; j1 < n-1; j1++){
       for(j2 = 0; j2 < n-1-j1; j2++){
       if(abs1((double)(a[j2]-m))>abs1((double)(a[j2+1]-m))){
           hold = a[j2];
           a[j2] = a[j2+1];
           a[j2+1] = hold;
      }
      else if(abs1((double)(a[j2]-m))==abs1((double)(a[j2+1]-m))){
        if(a[j2]>a[j2+1]){
           hold = a[j2];
           a[j2] = a[j2+1];
           a[j2+1] = hold;
        }
      }
      }

}
 for(j=0;j<n;j++)
      {
          printf("%d\n",a[j]);
      }
      return 0;
}