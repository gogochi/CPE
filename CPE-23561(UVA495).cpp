#include<iostream>
using namespace std;
int fib[5001][1500];
int digit[5001];
int main(){
   fib[0][0]=0;
   fib[1][0]=1;
   for(int i=2;i<5001;++i){
      for(int j=0;j<1500;++j){
         fib[i][j]+=fib[i-1][j]
                     +fib[i-2][j];
         if(fib[i][j]>=10){
            fib[i][j+1]+=fib[i][j]/10;
            fib[i][j]%=10;
         }
      }
      int d;
      for(d=1500;fib[i][d]==0;--d);
   digit[i]=d;
   }
   int n;
   while(cin>>n){
   cout<<"The Fibonacci number for "
<<n<<" is ";
for(int i=digit[n];i>=0;--i)
   cout<<fib[n][i];
   cout<<endl;
   }
   return 0;
}
