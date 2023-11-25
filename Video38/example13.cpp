#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    
    	//shift_left,shift_right c++20
	
    	vector<int> v{11,22,33,44};
    
    	//shift_left(v.begin(),v.end(),1);        //22, 33, 44, 44
    	//shift_left(v.begin(),v.end(),2);        //33, 44, 33, 44  
    	//shift_left(v.begin(),v.end(),3);        //44, 22, 33, 44
    	//shift_left(v.begin(),v.end(),4);        //11, 22, 33, 44
    
    	//shift_right(v.begin(),v.end(),1);       //11, 11, 22, 33
    	//shift_right(v.begin(),v.end(),2);       //11, 22, 11, 22
    	//shift_right(v.begin(),v.end(),3);       //11, 22, 33, 11
    	//shift_right(v.begin(),v.end(),4);       //11, 22, 33, 44
    
    	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";    
    
	return 0;
}
