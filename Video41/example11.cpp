#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){

	//reduce c++17

    	vector<int> v{1,2,3};
    	int deger=48;
    
	int topla=reduce(v.begin(),v.end(),deger); 
	//48+1+2+3 = 54

	int fark=reduce(v.begin(),v.end(),deger,minus<int>()); 
    	//48-1-2-3=42

	int islem=reduce(v.begin(),v.end(),deger,[](int x,int y){return x/(2*y);});
	//48/(2*1)/(2*2)/(2*3)=1
    
	cout<<"topla 		: "<<topla<<endl;
	cout<<"fark		: "<<fark<<endl;
	cout<<"islem		: "<<islem<<endl;

	//#include<execution>
	//reduce(execution::par,v.begin(),v.end(),deger);
    
	return 0;
}

