#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<char> ms1{'e','a','i','a','e'};
	multiset<char> ms2{'c','c','b','d','f'};

	for(auto itr1=ms1.begin(),itr2=ms2.begin();itr1!=ms1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}

	ms1.swap(ms2);

	cout<<"---\n";
	for(auto itr1=ms1.begin(),itr2=ms2.begin();itr1!=ms1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}
	
	return 0;
}
