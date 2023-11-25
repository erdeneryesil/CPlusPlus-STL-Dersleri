#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<double,char> m{
					{1.1,'a'},
					{1.1,'b'},
					{1.1,'a'},
					{5.5,'b'},
					{2.2,'b'}};
					
	//m[3.3]='x'; HATA []

	for(pair<double,char>i:m){
		cout<<i.first<<"\t"<<i.second<<endl;
	}
	
	return 0;
}
