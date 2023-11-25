#include<iostream>
#include<list>

int main(){
	
	list<string>l{"Sinop","Samsun","İstanbul","Ankara"};

	cout<<l.size()<<endl;
	cout<<l.max_size()<<endl;

	l.resize(20);
	cout<<l.size()<<endl;

	for(string i:l){
		cout<<i<<endl;
	}

	cout<<l.empty()<<endl;
	l.clear();	
	cout<<l.empty()<<endl;
	
	return 0;
}
