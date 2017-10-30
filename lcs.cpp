#include<iostream>
using namespace std;
#define MAX 1024
int LCS[MAX][MAX];


int find_lcs(string x,string y){
	int m= x.length();
	int n = y.length();
	for(int j=0;j<n+1;j++){
	LCS[0][j]=0;
	LCS[j][m]=0

	}
	for(int i=m-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(x[i]==y[i]){
				LCS[i][j]=1+LCS[i+1][j+1];
			}
			else{
				LCS[i][j]=MAX(LCS[i+1][j],LCS[i][j+1]);
			}
		}
	}
	return LCS[0][0];
	
}

int main(){
	string x,y;
	cin>>x>>y;
	cout<<find_lcs(x,y);
	return 0;
}