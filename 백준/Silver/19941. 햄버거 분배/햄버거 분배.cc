#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, k, cnt = 0;
    char c;
    vector<char> ph;
    
    cin >> N >> k;
    for(int i = 0; i < N; i++){
        cin >> c;
        ph.push_back(c);
    }

    for(int i = 0; i < N; i++){
        if(ph[i] != 'P')continue;
        for(int j = i - k; j <= i + k; j++){
            if(0 <= j && j < N && ph[j] == 'H'){
                ph[j] = '0';
                cnt++;
                break;
            }
        }

    }
    cout << cnt;
    return 0;
}