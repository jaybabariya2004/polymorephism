#include<iostream>

using namespace std;

class method{
	
	public:
		
		void display(int a, int b){
			
			cout<<a/b<<endl;
		}
		void display(int a, int b, int c){
			
			cout<<a-b-c<<endl;
		}
		void display(int a, int b, int c, int d){
			
			cout<<a*b*c*d<<endl;
		}
		void display(int a, int b, int c,int d,int e){
			
			cout<<a+b+c+d+e<<endl;
		}
};
int main(){
	
	method obj;
	
	obj.display(25,5);
	obj.display(90,50,10);
	obj.display(2,4,7,9);
	obj.display(2,5,6,8,9);
	
	return 0;
}
