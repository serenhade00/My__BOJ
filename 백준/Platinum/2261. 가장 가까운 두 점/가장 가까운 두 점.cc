 #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 typedef pair<ll, ll> pii;
 vector<pii> point;
 bool cmp(const pii &a, const pii &b)
 {
     if(a.second != b.second)
        return a.second < b.second;
     return a.first < b.first;
 }

 ll solve(int st, int en)
 {
     if(st == en) 
         return 9e18;
     if(st == en-1)
     {
         ll dx = point[st].first - point[en].first;
         ll dy = point[st].second - point[en].second;
         return dx*dx + dy*dy;
     }

     int mid = (st + en) / 2;
     ll left = solve(st, mid), right = solve(mid+1, en);
     ll dist = min(left, right);
     ll boundary = point[mid].first; 

     vector<pii> cand;
     for(int i=mid; i>=st; i--) 
     {
         ll cur = abs(point[i].first - boundary);
         if(cur*cur < dist) cand.push_back({point[i].first, point[i].second});
         else break;
     }
     for(int i=mid+1; i<=en; i++) 
     {
         ll cur = abs(point[i].first - boundary);
         if(cur*cur < dist) cand.push_back({point[i].first, point[i].second});
         else break;
     }
     sort(cand.begin(), cand.end(), cmp); 

	int len = cand.size();
     for(int i=0; i<len-1; i++)
     {
         for(int j=i+1; j<len; j++)
         {
             ll dy = (cand[i].first - cand[j].first);
             ll dx = (cand[i].second - cand[j].second);
             if(dx*dx >= dist) break;
             dist = min(dist, dx*dx + dy*dy); 
         }
     }
     return dist;
 }

 int main()
 {
     int n; cin >> n;
     for(int i=0; i<n; i++)
     {
         ll x, y; cin >> x >> y;
         point.push_back({x, y});
     }
     sort(point.begin(), point.end());

     cout << solve(0, n-1);
 }
