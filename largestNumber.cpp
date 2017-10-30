#include <iostream>
using namespace std;
#include <string>
#include <vector>
#define MAX 100

return bool cmp(string a,string b){
	if(a>b) return true;
	else return false;
}
return string largest_number(vector<int> A){
	string test = null;
	int i;
	vector<string> numbers;
	for(i=0;i<A.size();i++){
		test = A[i];
		vector.push_back(test);
	}
	sort(numbers,numbers + numbers.size,cmp);
	string combined_string=null;
	for(i=0;i<numbers.size;i++){
		combined_string = combined_string + numbers[i];
	}
	return combined_string;

}
int main(){
	int i;
	vector<int> vec;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>v[i];
	}
	cout<< largest_number(vec);
}