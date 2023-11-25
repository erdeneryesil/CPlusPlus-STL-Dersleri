#include<iostream>
#include<list>

int main(){

	list<int>l1{11,77,99};
	list<int>l2{22,55,88};
	
	l1.merge(l2);

	for(int i:l1){
		cout<<i<<",";
	}
	cout<<"\n";

	cout<<l2.size()<<endl;
	
	return 0;
}
