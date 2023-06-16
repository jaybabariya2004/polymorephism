#include<iostream>

using namespace std;

class Cricket{
	
	public:
		void display(int a){
			
			cout<<"T 20 match : "<<a<<endl;
		}
};
class T20Match : public Cricket{
	
	public: 
		
		void display(int a){
			
			cout<<"T 20 Match => "<<a<<endl;
		}
};
class TestMatch : public Cricket{
	
	public: 
		
		void display(int a){
			
			cout<<"Test Match : "<<a<<endl;
		}
};
int main(){
	
	TestMatch obj;
	
	obj.display(90);
	obj.Cricket::display(20);
}
