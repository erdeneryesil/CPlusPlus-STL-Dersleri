#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{11,22,33};
	unordered_set<int> s1{11,22,33};
	unordered_set<int> s2{11,22,44};
	unordered_set<int> s3{11,22,33,44};

	if(s==s1)cout<<"s ve s1 aynıdır"<<endl;
	else cout<<"s ve s1 farklıdır"<<endl;

	if(s==s2)cout<<"s ve s2 aynıdır"<<endl;
	else cout<<"s ve s2 farklıdır"<<endl;

	if(s==s3)cout<<"s ve s3 aynıdır"<<endl;
	else cout<<"s ve s3 farklıdır"<<endl;

	return 0;
}

