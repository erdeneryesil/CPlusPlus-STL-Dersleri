#include<iostream>
#include<unordered_map>
using namespace std;

struct YeniEqualTo{
	bool operator()(const double d1,const double d2)const{
		if((int)d1==(int)d2)return true;		
		else return false;
	}
};

struct YeniHash{
	size_t operator()(const double d)const{
		return (int)d*(int)d;
	}
};

int main(){

	unordered_map<double,char,YeniHash,YeniEqualTo> m{{1.1,'a'},{1.9,'c'}};
	m[2.2]='b';
	m[2.8]='d';
	m[3.0]='a';	//a(value) tekrar edebilir
	m[2.2]='t';	//2.22(key) tekrar etmez
	
	YeniHash h=m.hash_function();
	
	for(pair<double,char>i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<h(i.first)<<endl;
	}

	
	return 0;
}
