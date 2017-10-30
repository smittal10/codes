#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 1024
int LCS[MAX][MAX];


int find_lcs(string x,string y){
	int m= x.length();
	int n = y.length();
	int i,j;
	for(j=0;j<n+1;j++){
	LCS[m][j]=0;
	}
	for(j=0;j<m+1;j++){
		LCS[j][n]=0;
	}
	for(i=m-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(x[i]==y[j]){
				LCS[i][j]=1+LCS[i+1][j+1];
			}
			else{
				LCS[i][j] = max(LCS[i+1][j],LCS[i][j+1]);
			}
		}
	}
	return LCS[0][0];
	
}

int main(){
	string x,y;
	cin>>y;
	cin>>x;
	cout<<find_lcs(x,y);
	return 0;
}