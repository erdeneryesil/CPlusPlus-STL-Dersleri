#include<iostream>
#include<list>

int main(){
	
	list<char>l{'h','q','y'};
	l.push_front('r');		//r,h,q,y
	l.push_front('k');		//k,r,h,q,y
	l.push_back('f');		//k,r,h,q,y,f
	
	//l.insert(l.begin()+2,'z');	//HATA
	list<char>::iterator itr=l.begin();
	itr++;
	itr++;
	l.insert(itr,'z');		//k,r,z,h,q,y,f

	itr=l.begin();
	itr++;
	l.emplace(itr,'p');		//k,p,r,z,h,q,y,f

	l.emplace_front('m');		//m,k,p,r,z,h,q,y,f
	l.emplace_back('c');		//m,k,p,r,z,h,q,y,f,c

	l.pop_back();			//m,k,p,r,z,h,q,y,f
	l.pop_front();			//k,p,r,z,h,q,y,f

	itr=l.begin();			
	advance(itr,2);			//itr++; itr++;
	l.erase(itr);			//k,p,z,h,q,y,f

	list<char>::iterator itr1=l.begin(),itr2=l.begin();
	advance(itr1,2);
	advance(itr2,5);
	l.erase(itr1,itr2);		//k,p,y,f

	l.remove('y');			//k,p,f

	l.push_back('x');		//k,p,f,x
	l.push_front('x');		//x,k,p,f,x
	l.remove('x');			//k,p,f

	l.clear();			//
	
	return 0;
}
