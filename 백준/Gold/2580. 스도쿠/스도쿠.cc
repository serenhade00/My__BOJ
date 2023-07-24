#include <bits/stdc++.h>

using namespace std;

int ans[10][10]; // 최종
int num[10][10]; // 입력
bool col[10][10]; // 열
bool row[10][10]; // 행
bool sqr[10][10]; // 3x3
bool chk = 0;

void solve(int cur)
{
    int r = cur / 9, c = cur % 9; // 현재 좌표를 표현
    if(cur == 81 && !chk) // 종료 조건
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
                cout << ans[i][j] << ' ';
            cout << '\n';
        }
        chk = 1;
        return;
    }
    if(num[r][c] != 0)
    {
        ans[r][c] = num[r][c];
        solve(cur+1);
    }
    else
    {
        for(int i=1; i<=9; i++) // 
        {
            if(!col[c][i] && !row[r][i] && !sqr[3*(r/3) + c/3][i]) // 현재 좌표 사용 가능 숫자 탐색
            {
                ans[r][c] = i;
                col[c][i] = row[r][i] = sqr[3*(r/3) + c/3][i] = 1; // 사용 가능 숫자 사용 표시
                solve(cur+1);
                col[c][i] = row[r][i] = sqr[3*(r/3) + c/3][i] = 0; // 만약 최종 도달 실패(백트래킹)시, 사용 여부 회수
            }
        }
    }
}
    
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cin >> num[i][j];
            if(num[i][j] == 0)
                continue;
            row[i][num[i][j]] = 1; // 행 사용 숫자 표시
            col[j][num[i][j]] = 1; // 열 사용 숫자 표시
            sqr[3*(i/3) + j/3][num[i][j]] = 1; // 3x3 사용 숫자 표시
        }
    }
    solve(0);
}