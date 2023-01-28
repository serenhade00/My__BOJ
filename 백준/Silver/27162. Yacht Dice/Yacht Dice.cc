#include <bits/stdc++.h>

using namespace std;

string c;
int num[5];
int single[7];
int idx[7];
int one_to_six(void)
{
	int mx = 0;
    for(int i=0; i<3; i++)
        single[num[i]] += num[i];
    
    for(int i=1; i<=6; i++)
        single[i] += i*2;
    
    for(int i=1; i<=6; i++)
    {
    	if(c[i-1]=='Y')
    		mx = max(mx, single[i]);
    }
    
    return mx;
}

int four_kind(void)
{
    for(int i=1; i<=6; i++)
    {
        if(idx[i] >= 2)
            return i*4;
    }
    return 0;
}

int full_house(void)
{
    int num1, num2;
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=6; j++)
        {
            if(idx[i] == 1 && idx[j] == 2)
            {
                if(i > j)
                	return i*3 + j*2;
                else
                	return i*2 + j*3;
            }
            if(idx[i] == 0 && idx[j] == 3)
            {
                if(j == 6)
                	return 28;
                else
                	return j*3 + 12;
            }
        }
    }
    return 0;
}

int little_straight(void)
{
    int cnt = 0;
    for(int i=1; i<=5; i++)
    {
        if(idx[i] == 1)
            cnt++;
    }
    if(cnt == 3)
        return 30;
    else
        return 0;
}

int big_straight(void)
{
    int cnt = 0;
    for(int i=2; i<=6; i++)
    {
        if(idx[i] == 1)
            cnt++;
    }
    if(cnt == 3)
        return 30;
    else
        return 0;
}

int yacht(void)
{
    int num;
    for(int i=1; i<=6; i++)
    {
        if(idx[i] == 3)
            return 50;
    }
    return 0; 
}

int choice(void)
{
    int sum = 0;
    for(int i=1; i<=6; i++)
    {
        if(idx[i])
            sum += idx[i]*i;
    }
    return sum + 12;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> c;
    for(int i=0; i<3; i++)
    {
        cin >> num[i];
        idx[num[i]]++;
    }
    int mx = one_to_six();

    if(c[6] == 'Y')
    	mx = max(mx, four_kind());
    if(c[7] == 'Y')
    	mx = max(mx, full_house());
    if(c[8] == 'Y')
    	mx = max(mx, little_straight());
    if(c[9] == 'Y')
    	mx = max(mx, big_straight());
    if(c[10] == 'Y')
    	mx = max(mx, yacht());
    if(c[11] == 'Y')
    	mx = max(mx, choice());
    
    cout << mx;
}