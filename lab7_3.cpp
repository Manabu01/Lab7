#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
    if (x < 'A' || x > 'Z'){
        x = '0';
    }else if(x == 'A'){
        x = 'Z';
	}else{
	    x--;
	}
	return x;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
