#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<string,char>m{{"AA",'a'},{"BB",'b'},{"CC",'c'},{"DD",'d'}};

	for(pair<string,char>i:m){
		cout<<i.first<<"\t"<<i.second<<"\t"<<m.bucket(i.first)<<endl;
	}
	
	cout<<"----------\n";
	cout<<"bucket0:\t"<<m.bucket_size(0)<<endl;
	cout<<"bucket1:\t"<<m.bucket_size(1)<<endl;
	cout<<"bucket2:\t"<<m.bucket_size(2)<<endl;
	cout<<"bucket3:\t"<<m.bucket_size(3)<<endl;
	cout<<"bucket4:\t"<<m.bucket_size(4)<<endl;
	cout<<"bucket5:\t"<<m.bucket_size(5)<<endl;	//Segmentation fault
	
	return 0;
}
