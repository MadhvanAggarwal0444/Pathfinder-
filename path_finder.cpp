#include <iostream>
#include <queue>
using namespace std;

const int N = 10;

char grid[N][N] = {
    {'S','.','.','#','.','.','.','#','.','.'},
    {'.','#','.','#','.','#','.','#','.','.'},
    {'.','#','.','.','.','#','.','.','.','.'},
    {'.','#','#','#','.','#','#','#','.','.'},
    {'.','.','.','#','.','.','.','#','.','.'},
    {'#','#','.','#','#','#','.','#','.','.'},
    {'.','.','.','.','.','#','.','.','.','.'},
    {'.','#','#','#','.','#','#','#','#','.'},
    {'.','.','.','#','.','.','.','.','.','E'},
    {'.','#','.','.','.','#','.','#','.','.'}
};

bool visited[N][N];
pair<int,int> parent[N][N];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

bool isValid(int x,int y)
{
    if(x<0 || y<0 || x>=N || y>=N)
        return false;

    if(grid[x][y]=='#' || visited[x][y])
        return false;

    return true;
}

void printGrid()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<grid[i][j]<<" ";
        cout<<endl;
    }
}

void bfs(int sx,int sy)
{
    queue<pair<int,int>> q;
    q.push({sx,sy});
    visited[sx][sy]=true;

    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();

        if(grid[x][y]=='E')
        {
            cout<<"Path Found!\n";
            int cx=x,cy=y;

            while(grid[cx][cy]!='S')
            {
                if(grid[cx][cy]!='E')
                    grid[cx][cy]='.';

                int px=parent[cx][cy].first;
                int py=parent[cx][cy].second;

                cx=px;
                cy=py;
            }

            printGrid();
            return;
        }

        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];

            if(isValid(nx,ny))
            {
                visited[nx][ny]=true;
                parent[nx][ny]={x,y};
                q.push({nx,ny});
            }
        }
    }

    cout<<"No Path Found\n";
}

int main()
{
    int sx,sy;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(grid[i][j]=='S')
            {
                sx=i;
                sy=j;
            }
        }
    }

    bfs(sx,sy);

    return 0;
}
