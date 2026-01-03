#include<iostream>
using namespace std;
int main(){
	int N,K;
	cin >> N >> K;
	int val;
	bool found = false;
	for(int i=0;i<N;i++){
		cin>>val;
		if(val == K){
			found =true;
		}
	}
	if(found)
	        cout << "yes";
	else
	        cout << "no";
	return 0;
}