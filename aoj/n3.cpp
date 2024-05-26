#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	double n;
	while(cin>>n&&n!=0.0){
	double s[1000],m=0.0;for(int i=0;i<n;i++)cin>>s[i],m+=s[i];
	m/=n;
	double a=0;for(int i=0;i<n;i++)a+=(s[i]-m)*(s[i]-m);
	a/=n;
	cout<<fixed<<setprecision(5)<<sqrt(a)<<endl;
	}
	return 0;
}
