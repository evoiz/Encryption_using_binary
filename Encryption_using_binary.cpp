#include <bits/stdc++.h>
using namespace std;
string binary(char c){
string fin="";
int x=c;
char tmp;
while(x){
   tmp=(x%2)+'0';
   fin=fin+tmp;
   x/=2;
 }
 reverse(fin.begin(),fin.end());
 for(int i=fin.length();i<8;i++){fin="0"+fin;}
 return fin;
}
long long binary_dis(string s){
long long ans=0;
for(int i=0;i<s.length();i++){ans*=2;ans+=(s[i]=='1');}
return ans;
}
long long enc(string s){
string ans="";
for(auto x:s){
  ans=binary(x)+ans;
 }
 return binary_dis(ans);
}
void d_enc(long long x){
long long m[]={x,0};
printf((char *)m);
printf("\n");
}
int main(){
 cout<<enc("Evoiz")<<endl;
 d_enc(enc("Evoiz"));
 return 0;
}
/**
**/
