#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//min_elemet, max_element, minmax_element(c++11)

    	vector<int>v{44,11,33,55,22};    
    
    	vector<int>::iterator enKucukItr;
    	vector<int>::iterator enBuyukItr;
   	pair<vector<int>::iterator,vector<int>::iterator>pairItr;
    
    	enKucukItr=min_element(v.begin(),v.end());
    	enBuyukItr=max_element(v.begin(),v.end());
    	pairItr=minmax_element(v.begin(),v.end());
    
    	cout<<"enKucukItr           :"<<*enKucukItr<<endl;
    	cout<<"enBuyukItr           :"<<*enBuyukItr<<endl;
    	cout<<"pairItr.first        :"<<*pairItr.first<<endl;
    	cout<<"pairItr.second       :"<<*pairItr.second<<endl;

	cout<<"--------\n";
	auto kucukMu=[](int x,int y){return x<y;};
	enKucukItr=min_element(v.begin(),v.end(),kucukMu);
    	enBuyukItr=max_element(v.begin(),v.end(),kucukMu);
    	pairItr=minmax_element(v.begin(),v.end(),kucukMu);
	
    	cout<<"enKucukItr           :"<<*enKucukItr<<endl;
    	cout<<"enBuyukItr           :"<<*enBuyukItr<<endl;
    	cout<<"pairItr.first        :"<<*pairItr.first<<endl;
    	cout<<"pairItr.second       :"<<*pairItr.second<<endl;

	
	//#include<execution>
	//enKucukItr=min_element(execution::par,v.begin(),v.end());
    	//enBuyukItr=max_element(execution::par,v.begin(),v.end());
    	//pairItr=minmax_element(execution::par,v.begin(),v.end());

	return 0;
}

