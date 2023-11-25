#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    
	//random_shuffle

	srand(unsigned(time(0)));

	vector<int> v{11,22,33,44,55,66,77,88,99};

	random_shuffle(v.begin(),v.end());
	//random_shuffle(v.begin(),v.end(),[](int x){return rand()%x;});

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
    
	return 0;
}
