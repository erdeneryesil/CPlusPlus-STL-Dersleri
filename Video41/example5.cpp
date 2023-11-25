#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    	//next_permutation, prev_permutation

    	vector<int> v1{1,2,3}; // 3! farklı şekilde dizilebilir 

    	do{
        	cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<endl;
    	}while(next_permutation(v1.begin(),v1.end()));
    	//1,2,3
    
    	reverse(v1.begin(),v1.end());//3,2,1

    	cout<<"-----\n";

 	do{
        	cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<endl;
    	}while(prev_permutation(v1.begin(),v1.end()));


/*
	cout<<"-----\n";
	vector<int> v2{1,2,2}; // 3!/2 farklı şekilde dizilebilir 

    	do{
        	cout<<v2[0]<<" "<<v2[1]<<" "<<v2[2]<<endl;
    	}while(next_permutation(v2.begin(),v2.end()));
    	//1,2,2
*/
        
	return 0;
}
