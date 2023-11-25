#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m1{{1,'a'},{2,'e'},{3,'u'},{4,'o'}};
	map<int,char>m2{{1,'b'},{2,'c'},{3,'d'},{4,'f'}};

	for(auto itr1=m1.begin(),itr2=m2.begin();itr1!=m1.end(),itr2!=m2.end();itr1++,itr2++){
		cout<<itr1->first<<","<<itr1->second<<"--";
		cout<<itr2->first<<","<<itr2->second<<endl;
	}

	m1.swap(m2);

	cout<<"--------"<<endl;
	for(auto itr1=m1.begin(),itr2=m2.begin();itr1!=m1.end(),itr2!=m2.end();itr1++,itr2++){
		cout<<itr1->first<<","<<itr1->second<<"--";
		cout<<itr2->first<<","<<itr2->second<<endl;
	}
	
	return 0;
}
