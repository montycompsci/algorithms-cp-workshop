#include <iostream>

using namespace std;
int sessions[15][25]; 
//First index is the session, second index is the cow ID, value is the position
// http://www.usaco.org/index.php?page=viewproblem2&cpid=963
int main() {
    int N, K;
    cin >> K >> N;
    for(int i=0; i<K; i++)
    {
        for(int j=0;j<N;j++)
        {
        int temp;
        cin>>temp;
        temp--;
        sessions[i][temp] = j;
            
        }
    }
    int answer = 0;
    for(int i=0;i<N;i++)
    {
        //i is the first cow, j is the second cow
        for(int j=i+1;j<N;j++){
            bool first = false;
            if(sessions[0][j] > sessions[0][i])
                first = true;
            bool consistent = true;
            for(int k=1;k<K;k++)
            {
                bool temp = false;
                if(sessions[k][j] > sessions[k][i])
                    temp = true;
                if(temp != first)
                {
                    consistent = false;
                    break;
                }
            }
            if(consistent)
                answer++;
        }
    }
    cout << answer;
}
