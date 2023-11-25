#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<double,char,hash<double>,equal_to<double>> m{
								{1.1,'a'},
								{1.1,'b'},
								{1.1,'a'},
								{5.5,'b'},
								{2.2,'b'}};
					
	unordered_multimap<double,char>::hasher h=m.hash_function();
	
	for(pair<double,char>i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<h(i.first)<<endl;
	}
	
	return 0;
}
