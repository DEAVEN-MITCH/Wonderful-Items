#include <iostream>
#include <string>
#include <vector>
#define MAXX 1e9
using namespace std;

int main() 
{ 
	vector<string>allstr;
	string t;
	while(cin>>t){
		allstr.push_back(t);
	}
	if(t.size()==0){
		cout<<"Äã¸ÉÂï~°¥ßÏ~"<<endl;
		return 1; 
	}
	unsigned ma=0,mi=MAXX;
	for(string t:allstr){
		unsigned size=t.size();
		ma=max(ma,size);
		mi=min(mi,size);
	}
	cout<<"×î³¤×Ö·û´®£º"; 
	for(string t:allstr){
		if(t.size()==ma){
			cout<<t<<' ';
		}
	}
	cout<<"\n×î¶Ì×Ö·û´®£º";
	for(string t:allstr){
		if(t.size()==mi){
			cout<<t<<' ';
		}
	}
	cout<<endl;
	return 0; 
}
