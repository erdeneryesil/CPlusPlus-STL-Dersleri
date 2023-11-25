#include<iostream>
#include<forward_list>

int main(){

	forward_list<int>fl{66,33,44,44,11,55,66,99};

	cout<<fl.front()<<endl;
	
	return 0;
}
