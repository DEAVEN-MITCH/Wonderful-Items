#include <algorithm>
#include <iostream>
#include <ios>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
/*input:Smith 93 91 47 90 92 73 100 87

output:Please enter your name:Hello, Smith!
Please enter you midterm and final exam grades:
Enter all your homework grades, followed by end-of-file:
Your final grade is 90.4
Press any key to continue*/ 
int main() 
{ 	
cout<<"Please enter your name:"<<ends;

	string name;
	cin>>name;
	cout<<"Hello, "+name+"!"<<endl;
	double mid,fin;
	cout<<"Please enter you midterm and final exam grades:"<<endl;
	cin>>mid>>fin;
	cout<<"Enter all your homework grades, followed by end-of-file:"<<endl;
	vector<double>hw;
	double item;
	while(cin>>item){
		hw.push_back(item);
	}
	typedef vector<double>::size_type vec_sz;
	vec_sz size=hw.size();
	if(!size){
		cout<<"Äã¸ÉÂï~°¥ßÏ~"<<endl;
		return 1; 
	}
	sort(hw.begin(),hw.end());
	double med=(hw[size/2]+hw[(size-1)/2])/2.0;
	streamsize prec=cout.precision();
	cout<<"Your final grade is "<<setprecision(3)<<0.4*fin+0.2*mid+0.4*med<<endl;
	cout.precision(prec);
	cout<<"Press any key to continue"<<endl;
	return 0; 
} 
