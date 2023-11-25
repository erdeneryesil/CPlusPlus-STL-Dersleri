#include<iostream>
#include<forward_list>

int main(){

	forward_list<char> fl1{'a','e','o','u'};
	forward_list<char> fl2{'c','b','t','y'};

	for(auto itr1=fl1.begin(),itr2=fl2.begin();itr1!=fl1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}
	
	fl1.swap(fl2);
	
	cout<<"---"<<endl;
	for(auto itr1=fl1.begin(),itr2=fl2.begin();itr1!=fl1.end();itr1++,itr2++){
		cout<<*itr1<<"-"<<*itr2<<endl;
	}	
	
	return 0;
}
