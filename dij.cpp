// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
// typedef pair<int,int> p
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
int dist[MAX];
int parent[MAX];
void dijk(int s,int d,int n,int adj[][MAX]){
	int i;
	for(i=0;i<n;i++){
		dist[i]=INT_MAX;
		parent[i]=-1;
	}
	dist[s]=0;
	parent[s]=-1;

	pq.push(make_pair(0,s));
	while(!pq.empty()){
		int x=pq.top().second;
		pq.pop();
		for(i=0;i<n;i++){
			
			if(adj[x][i]!=0 && dist[i]>(adj[x][i]+dist[x])){
				dist[i]=adj[x][i]+dist[x];
				parent[i]=x;
				pq.push(make_pair(dist[i],i));	
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int i,j,adj[MAX][MAX];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>adj[i][j];
		}
	}
	int s,d;
	cin>>s>>d;
	dijk(s,d,n,adj);
	stack<int> st;
	int x=d;
	st.push(d);
	while(parent[x]!=-1){
		st.push(parent[x]);
		x=parent[x];
	}
	while(!st.empty()){
		cout<<st.top()<<"->";
		st.pop();
	}
	cout<<endl;
	return 0;




}