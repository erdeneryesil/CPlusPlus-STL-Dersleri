#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<int> s1{55,11,33,22,44,55,33};	//set<int,less<int>> s1;

	for(int i:s1)cout<<i<<",";
	cout<<endl;

	set<int,greater<int>> s2{55,11,33,22,44,55,33};

	for(int i:s2)cout<<i<<",";
	cout<<endl;

	set<int>s3;
	s3.insert(55);
	s3.insert(11);
	s3.insert(33);
	s3.insert(22);
	s3.insert(44);
	s3.insert(55);
	s3.insert(33);

	for(int i:s3)cout<<i<<",";
	cout<<endl;

	set<int>s4(s3.begin(),s3.end());
	//s4.insert(s3.begin(),s3.end());

	for(set<int>::iterator itr=s4.begin();itr!=s4.end();itr++)
		cout<<*itr<<",";
	cout<<endl;
	
	return 0;
}
