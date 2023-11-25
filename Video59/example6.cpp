#include <iostream>       
#include <thread>        
#include <future>        
using namespace std;

int main (){

  	promise<int> prom; //şu anda bir değere sahip değil                     
	future<int> fut = prom.get_future();    //fut, prom nesnesinin gelecekte sahip olacağı değeri alacak 
	
	//prom.set_value(11);//bu satır olmazsa; f, p'nin bir değere sahip olmasını bekleyecek
	cout<<fut.get()<<endl;
	
  	return 0;
}
