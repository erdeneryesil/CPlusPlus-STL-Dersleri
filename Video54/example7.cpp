#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
using namespace chrono;

void toplaCift(long ilk,long son){
	long long toplam=0;
	for(long i=ilk;i<=son;i++){if(i%2==0)toplam+=i;}
	cout<<ilk<<" + ... + "<<son<<" = "<<toplam<<endl;
}
void toplaTek(long ilk,long son){
	long long toplam=0;
	for(long i=ilk;i<=son;i++){if(i%2==1)toplam+=i;}
	cout<<ilk<<" + ... + "<<son<<" = "<<toplam<<endl;
}
int main ()
{
	steady_clock::time_point baslamaAni=steady_clock::now();
		
	/*toplaCift(1,999999999);
	toplaTek(1,999999999);*/
	
	/*thread t1(toplaCift,1,999999999);
	thread t2(toplaCift,1,999999999);
	t1.join();
	t2.join();*/
	
	/*thread t1(toplaCift,1,999999999);
	t1.join();
	thread t2(toplaCift,1,999999999);
	t2.join();*/
	
	steady_clock::time_point bitisAni=steady_clock::now();
	duration<double> sure=duration_cast<duration<double>>(bitisAni-baslamaAni);
    	cout<<sure.count()<<"sn sürdü"<<endl;
    	
  	return 0;
}
