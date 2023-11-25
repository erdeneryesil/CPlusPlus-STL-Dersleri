#include <iostream>
#include<chrono>

//using namespace std;
//using namespace chrono;
int main(){
	
	typedef std::chrono::duration<int> Saniye;
	
	Saniye s1(1);
	Saniye s2(2);
	Saniye s3=s1+s2;	//3
	
	s3++;			//4
	s3--;			//3
	s3+=s1;			//4
	s3-=s2;			//2
	s3*=5;			//10
	s3/=5;			//2
	s3==s2;			//true
	s3!=s1;			//true
			
	return 0;
}
