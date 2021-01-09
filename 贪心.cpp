#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
const int SIZE=100005;
int fa[SIZE];

string ss1,ss2,ss3,ss4;
unsigned long long int tmp=0,s,n,m,b,z,s1,last=1,ta,tb,l,e;
int find(int i){
	if(fa[i]==i) return fa[i];
	fa[i]=find(fa[i]);
	return fa[i];
}
struct kdl{
	unsigned long long int mon;
	unsigned long long int pet;
}cow[100001];

bool cmp(kdl x,kdl y){
	return x.mon<y.mon;
}
int main(){ 
	cin>>n>>b;
	for(int i=1;i<=n;i++){
		cin>>cow[i].mon>>cow[i].pet;
	}
	sort(cow+1,cow+n+1,cmp);
	for(int i=1;i<=n;i++) {
		if(b>=cow[i].mon*cow[i].pet){
			s+=cow[i].pet;
			b-=cow[i].pet*cow[i].mon;
		}else{
			s+=b/cow[i].mon;
			cout<<s;
			return 0;
		}	
	}
	cout<<s;
	
	return 0;
}  		
