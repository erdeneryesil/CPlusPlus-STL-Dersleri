#include<iostream>
#include<list>

int main(){

	list<int>l1{1,5,6};
	list<int>l2{2,3,4};
	list<int>l3{7,8,9};
	
	list<int>::iterator itr=l1.begin();
	itr++;
	l1.splice(itr,l2);
	for(int i:l1){
		cout<<i<<",";
	}
	cout<<"\n";

	itr=l1.end();
	l1.splice(itr,l3);
	for(int i:l1){
		cout<<i<<",";
	}
	cout<<"\n";

	cout<<l2.size()<<l3.size()<<endl;
	
	return 0;
}
