#include<iostream>
#include<list>

int main(){
	
	list<int> l{22,66,55,44,11};

	//cout<<l[0]<<endl;	//HATA
	//cout<<l.at(1)<<endl;	//HATA

	cout<<*(l.begin())<<endl;
	//cout<<*(l.begin()+2)<<endl;//HATA

	list<int>::iterator itr=l.begin();
	//itr+=2;			//HATA
	itr++;	
	cout<<*(itr)<<std::endl;
	itr++;
	cout<<*(itr)<<std::endl;	

	//itr-=2;				//HATA
	itr--;
	itr--;
	cout<<*(itr)<<std::endl;

	for(list<int>::iterator i=l.begin();i!=l.end();i++){
		cout<<*i<<endl;
	}
	
	for(list<int>::reverse_iterator i=l.rbegin();i!=l.rend();i++){
		cout<<*i<<endl;
	}
	
	for(int i:l){
		cout<<i<<endl;
	}

	cout<<l.front()<<endl;
	cout<<l.back()<<endl;
	
	return 0;
}
