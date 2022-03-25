#include<iostream>
#include<vector>

#define GREEN   "\033[32m"      /* Green */
#define RESET   "\033[0m"
#define CYAN    "\033[36m"      /* Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
using namespace std;

void rec(vector<int> a){
	if(a.size() == 5){
		for(size_t i = 0; i < a.size(); i++){
			if(a[i]) cout << GREEN;
			if(!a[i]) cout << CYAN;
			cout << a[i];
			cout << RESET;
			if(i == 7) cout << " ";
		} 
		cout << endl;
		return;
	}
	a.push_back(0);
	rec(a);
	a.pop_back();
	a.push_back(1);
	rec(a);
	a.pop_back();
}

int main(void){
	vector<int> a;
	rec(a);
}
	
