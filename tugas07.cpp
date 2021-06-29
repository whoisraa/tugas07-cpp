#include <iostream>
using namespace std;
int main(){
	int x, y;
	cout<<"Inputkan Nilai x : ";
	cin>>x;
	cout<<"Inputkan Nilai y : ";
	cin>>y;
	if(x%2!=0 && y%2!=0){
		cout<<"semua bilangan ganjil";
	}else if(x%2!=0 && y%2==0){
		cout<<"x ganjil dan y genap";
	}else if(x%2==0 && y%2==0){
		cout<<"semua bilangan genap";
	}else{
		cout<<"x genap dan y ganjil";
	}
}
