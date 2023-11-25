#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,string> m{{5,"aaa"}};	//{5,"aaa"}
	
	m.insert({2,"ccc"});			//{2,"ccc"},{5,"aaa"}
	m.insert(pair<int,string>(3,"eee"));	//{2,"ccc"},{3,"eee"},{5,"aaa"}

	auto itr=m.find(3);			//4, 3'ten sonra ekleneceği için
	m.insert(itr,{4,"bbb"});		//verimli (4, 3'ten sonra ekleneceği için)
						//{2,"ccc"},{3,"eee"},{4,"bbb"},{5,"aaa"}
	itr=m.find(3);
	m.insert(itr,{1,"ddd"});		//verimsiz
						//{1,"ddd"},{2,"ccc"},{3,"eee"},{4,"bbb"},{5,"aaa"}
						
	for(pair<int,string> i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	map<int,string>m2;
	m2.insert(m.begin(),m.find(4));		//{1,"ddd"},{2,"ccc"},{3,"eee"}

	for(pair<int,string> i:m2)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	return 0;
}
