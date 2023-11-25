#include<iostream>
#include<algorithm>
#include<list>
#include<forward_list>
#include<deque>
using namespace std;

int main(){

	//equal

	vector<int> 		v{10,20,30,40,50,60};	
	
	list<int>   		l{10,20,30,40,50,60};	//v ile tamamen aynı
	forward_list<int> 	fl{60,50,40,30,20,10};	//v ile aynı veriler fakat sıra farklı
	deque<int> 		d{10,20,30,40,50,70};	//v'den farklı
	array<int,7> 		a{10,20,30,40,50,60,70};//ilk 6 eleman v ile aynı, ama 7 eleman

	cout<<equal(v.begin(),v.end(),l.begin())<<endl;		//true
	cout<<equal(v.begin(),v.end(),fl.begin())<<endl;	//false
	cout<<equal(v.begin(),v.end(),d.begin())<<endl;		//false
	cout<<equal(v.begin(),v.end(),a.begin())<<endl;		//dikkat !! true
	cout<<equal(v.begin(),v.end(),a.begin(),a.end())<<endl;	//false

	//#include<execution>
	//equal(execution::par,v.begin(),v.end(),a.begin(),a.end())

	return 0;
}
