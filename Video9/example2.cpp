#include<iostream>
#include<optional>
//using namespace std;

int main(){
	
	std::optional o1(11);		//int 		
	std::optional o2{22.33};	//double
	
	std::optional o3=std::make_optional(44);//int
	std::optional o4=std::make_optional(55.66f);//float

	std::optional<int> o5{77};
	std::optional<double>o6{88.99};
	std::optional<std::string>o7{"Merhaba"};

	std::optional<int> o8;				//boş
	std::optional<int> o9{};			//boş
	std::optional<int> o10{std::nullopt};		//boş

	std::optional<int> o11{11};
	o11=std::nullopt;
	o11.reset();
		
	return 0;
}
