#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    
	//accumulate

	vector<int> v{1,2,3};
	int deger=48;	

	int topla=accumulate(v.begin(),v.end(),deger); 
	//48+1+2+3 = 54

	int  fark=accumulate(v.begin(),v.end(),deger,minus<int>()); 
	//48-1-2-3 =42

	int islem=accumulate(v.begin(),v.end(),deger,[](int x,int y){return x/(2*y);}); 
	//48/(2*1)/(2*2)/(2*3)=1

	
	cout<<"topla 	: "<<topla<<endl;
    	cout<<"fark 	: "<<fark<<endl;
	cout<<"islem 	: "<<islem<<endl;
        
	return 0;
}

