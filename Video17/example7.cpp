#include<iostream>
#include<list>

int main(){

	list<char>l1{'a','e','o'};
	list<char>l2{'b','c','d'};

	for(auto itr1=l1.begin(),itr2=l2.begin();itr1!=l1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}

	l1.swap(l2);
	cout<<"---"<<endl;
	for(auto itr1=l1.begin(),itr2=l2.begin();itr1!=l1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}
	
	return 0;
}

