#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

	unordered_map<int,char>m;
	m[7]='x';
	
	m.insert({4,'f'});
	m.insert(make_pair(3,'w'));
	vector<pair<int,char>> v{{1,'q'},{5,'p'},{8,'k'}};
	m.insert(v.begin(),v.end());

	m.emplace(10,'t');
	m.emplace(pair<int,char>(15,'r'));

	m.emplace_hint(m.begin(),77,'c');	
	m.insert(m.begin(),{99,'u'});
	
	for(pair<int,char>i:m){
		cout<<i.first<<"\t"<<i.second<<endl;
	}
	
	return 0;
}
