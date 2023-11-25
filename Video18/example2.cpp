#include<iostream>
#include<forward_list>

int main(){

	forward_list<int> fl{55,33};		//55,33
	fl.push_front(22);			//22,55,33
	fl.emplace_front(88);			//88,22,55,33
	
	fl.insert_after(fl.begin(),11);		//88,11,22,55,33
	
	//fl.insert_after(fl.begin()+2,77);	//HATA	
	forward_list<int>::iterator itr=fl.begin();
	advance(itr,2);				//itr++;itr++;
	fl.insert_after(itr,77);		//88,11,22,77,55,33
	
	advance(itr,2);				//itr 22->55
	fl.emplace_after(itr,66);		//88,11,22,77,55,66,33

	fl.pop_front();				//11,22,77,55,66,33
	
	fl.erase_after(fl.begin());		//11,77,55,66,33

	itr=fl.begin();
	advance(itr,2);
	fl.erase_after(itr);			//11,77,55,33

	fl.remove(55);				//11,77,33

	fl.remove_if([](int x){return x<55;});		//77
	
	return 0;
}

