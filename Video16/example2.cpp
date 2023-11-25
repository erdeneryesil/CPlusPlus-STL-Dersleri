#include<iostream>
#include<list>

int main(){
	
	list<char>l{ 't','z','r','y','p' };
	
	list<char>::iterator itr;

	itr=l.begin();
	cout<<*itr<<endl;		//t
	itr++;
	cout<<*itr<<endl;		//z

	itr=l.end();		
	cout<<*itr<<endl;	
	itr--;
	cout<<*itr<<endl;		//p

	list<char>::reverse_iterator ritr;
	ritr=l.rbegin();
	cout<<*ritr<<endl;		//p

	ritr=l.rend();
	ritr--;						
	cout<<*ritr<<endl;		//t	
	
	return 0;
}

