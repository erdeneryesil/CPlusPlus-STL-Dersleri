#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m1{{1,'a'},{2,'e'},{3,'u'},{4,'o'},{4,'i'}};
	multimap<int,char>m2{{1,'b'},{2,'c'},{3,'d'},{4,'f'},{5,'g'}};

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
