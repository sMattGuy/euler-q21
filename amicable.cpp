#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int answer = 0;
	
	for(int x=1;x<=10000;x++){
		cout<<"Progress:"<<floor(((double)x/10000)*100)<<"%\r";
		int result = 0;
		for(int i=1;i<x;i++){
			if(x%i == 0){
				result +=i;
			}
		}
		int result2 = 0;
		for(int i=1;i<result;i++){
			if(result%i == 0){
				result2 += i;
			}
		}
		if(result2 == x && x != result){
			//cout<<"Pair:"<<x<<", "<<result<<endl;
			answer = x + answer;
		}
	}
	cout<<"\n\nAnswer:"<<answer<<endl;
	return 0;
}