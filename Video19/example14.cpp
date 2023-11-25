#include<iostream>
#include<set>
using namespace std;

int main(){

	set<char> s1{'e','a','u'};
	set<char> s2{'c','d','b'};

	for(auto itr1=s1.begin(),itr2=s2.begin();itr1!=s1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}

	s1.swap(s2);

	cout<<"---\n";
	for(auto itr1=s1.begin(),itr2=s2.begin();itr1!=s1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}
	
	return 0;
}
