#include <bits/stdc++.h>

using namespace std;

void color(vector<vector<int> > &board,int i,int j,int w,int x,vector<vector<int> > &visited)
{
    int l = board.size();
    if(i<0 || i>=l || j<0 || j>=l)
        return;
    if(visited[i][j])
        return;
    visited[i][j] = 1;
    if(board[i][j] != x)
        return;
    board[i][j] = w;
    color(board,i+1,j,w,x,visited);
    color(board,i+1,j+1,w,x,visited);
    color(board,i+1,j-1,w,x,visited);
    color(board,i-1,j,w,x,visited);
    color(board,i-1,j+1,w,x,visited);
    color(board,i-1,j-1,w,x,visited);
    color(board,i,j+1,w,x,visited);
    color(board,i,j-1,w,x,visited);
    return;
}

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int n,i,j,w;
        cin >> n >> i >> j >> w;
        vector<vector<int> > board;
        int x;
        vector<vector<int> > visited;
        vector<int> zeros(n,0);
        for(int i=0;i<n;i++)
        {
            visited.push_back(zeros);
            vector<int> temp;
            for(int j=0;j<n;j++)
            {   
                cin >> x;
                temp.push_back(x);
            }
            board.push_back(temp);
        }
        color(board,i,j,w,board[i][j],visited);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
