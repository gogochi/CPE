#include <stdio.h>
int F(int i, long long int *sum){
   if(i==0)
      return 0;
   else if((i%10)>0)
      *sum+=(i%10);
   else
      F((i/10),sum);
   return 0;
}
int main(int argc, char *argv[]){
   long int p=0,q=0;
   while(scanf("%ld %ld",&p,&q)!=EOF && (p>=0 && q>=0)){
      int i=0;
      long long int sum=0;
      while((q-p)>10){
         if(p%10!=0){
            for(i=p%10;i<10;i++)
               F(i,&sum);
               p+=(10-p%10);
         }
         if(q%10!=0){
            for(i=q%10;i>0;i--)
F(i,&sum);
q-=q%10;
}
if((q-p)>10){
sum+=(q-p)/10*45;
p/=10;
q/=10;
}
}
for(i=p;i<=q;i++)
F(i,&sum);
printf("%lld\n",sum);
}
return 0;
}
