#include<iostream>
#include<thread>
using namespace std;

void fonksiyon1(){
	cout<<"fonksiyon1 : parametre yok"<<endl;
}
void  fonksiyon2(int param){
	cout<<"fonksiyon2 : param="<<param<<endl;
}
void fonksiyon3(int param1,int param2){
	cout<<"fonksiyon3 : param1="<<param1<<", param2="<<param2<<endl;
}

int main ()
{
	thread t1(fonksiyon1);
	t1.join();
	
	thread t2(fonksiyon2,22);
	t2.join();
	
	thread t3(fonksiyon3,33,333);
	t3.join();

  	return 0;
}
