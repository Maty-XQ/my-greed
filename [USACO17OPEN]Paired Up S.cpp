#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
const int SIZE=100005;
int fa[SIZE];

string ss1,ss2,ss3,ss4;
unsigned long long int tmp=0,s,n,m,b,z,s1,last=1,ta,tb,e,tot=0;
int find(int i){
	if(fa[i]==i) return fa[i];
	fa[i]=find(fa[i]);
	return fa[i];
}
struct kdl{
	int num;
	int pre;
}cow[100001];

bool cmp(kdl x,kdl y){
	return x.pre<y.pre;
}
int main(){ 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>cow[i].num>>cow[i].pre;
		s+=cow[i].num;
	}
	sort(cow+1,cow+n+1,cmp);
	int l,r;
	l=1;
	r=n;
	while(l<=r){
		tmp=cow[l].pre+cow[r].pre;
		cow[l].num--;
		cow[r].num--;
		if(cow[l].num==0){
			l++;
		}
		if(cow[r].num==0){
			r--;
		}
		if(tmp>tot){
			tot=tmp;
		}
	}
	cout<<tot;
	
	return 0;
}  		
