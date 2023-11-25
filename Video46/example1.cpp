#include <iostream>
#include<chrono>

//using namespace std;
//using namespace chrono;
int main(){
	
	typedef std::chrono::duration<int> Saniye;//typedef std::chrono::duration<int,std::ratio<1,1>
	typedef std::chrono::duration<int,std::milli> Milisaniye;
	typedef std::chrono::duration<int,std::ratio<60,1>> Dakika;
	typedef std::chrono::duration<int,std::ratio<60*60,1>> Saat;
	typedef std::chrono::duration<int,std::ratio<60*60*24,1>> Gun;
	
	Saniye otuzSaniye(30);
	Milisaniye yuzMs(100);
	Dakika onDakika(10);
	Saat dortSaat(4);
	Gun ikiGun(2);
	
	std::cout<<otuzSaniye.count()<<std::endl;
	std::cout<<yuzMs.count()<<std::endl;
	std::cout<<onDakika.count()<<std::endl;
	std::cout<<dortSaat.count()<<std::endl;
	std::cout<<ikiGun.count()<<std::endl;
	
	return 0;
}
