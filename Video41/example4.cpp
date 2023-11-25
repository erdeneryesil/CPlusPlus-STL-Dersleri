#include<iostream>
#include<algorithm>
#include<list>
#include<forward_list>
using namespace std;

int main(){
    
	//is_permutation c++11

	vector<int> 		v{10,20,30,40,50,60};
		
	list<int>   		l{50,10,30,60,40,20};	
	forward_list<int> 	fl{60,50,40,30,20,10,70};	


	cout<<is_permutation(v.begin(),v.end(),l.begin())<<endl;		//true
	cout<<is_permutation(v.begin(),v.end(),fl.begin())<<endl;		//dikkat !! true
	cout<<is_permutation(v.begin(),v.end(),fl.begin(),fl.end())<<endl;	//false
        
	return 0;
}
