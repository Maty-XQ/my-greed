#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
const int SIZE=100005;
int fa[SIZE];

string ss1,ss2,ss3,ss4;
unsigned long long int tmp=0,s,n,m,b,z,s1,last=1,ta,tb,e,cnt=0,tot=0,xiao,da;

int main(){ 
	cin>>n>>m;
	while(1){
		if(n>m){
			tot+=4*m*(n/m);
			n=n%m;
			if(n==0) break;
		}else{
			tot+=4*n*(m/n);
			m=m%n;
			if(m==0) break;
		}
	}
	cout<<tot;
	
	return 0;
}  		
