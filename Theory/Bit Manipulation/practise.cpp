#include <iostream>
using namespace std;
int n;
long long a,b,i;
int main() {
	cin>>n;
	while(n--){
		cin>>a>>b;
		for(i=1;(a|i)<=b;i<<=1) a|=i;
		cout<<a<<endl;
	}
}