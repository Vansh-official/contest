#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

pair<int,int> ind[15];
bool vis[15];
int m;
vector<int> pattern;

bool check(int indx,char c)  //c->'R','C','X'
{
    
    if(pattern.size()==m) {
        for(int i=0;i<pattern.size();i++) {
            cout<<pattern[i]+1<<" ";
        }
        cout<<"\n";
        pattern.clear();
        return true;
    }


    for(int i=0;i<m;i++) {

        if(vis[i]) {
            continue;
        }

        if(c=='R') {
            if(ind[indx].first==ind[i].first) {
                vis[i]=true;
                pattern.push_back(i);
                if(check(i,'C')) {
                    return true;
                }
                pattern.erase(pattern.end()-1);
                vis[i]=false;
            }
        }
        else if(c=='C') {
            if(ind[indx].second==ind[i].second) {
                vis[i]=true;
                pattern.push_back(i);
                if(check(i,'R')) {
                    return true;
                }
                pattern.erase(pattern.end()-1);
                vis[i]=false;
            }
        }
        else {
            if(ind[indx].first==ind[i].first) {
                vis[i]=true;
                pattern.push_back(i);
                if(check(i,'C')) {
                    return true;
                }
                pattern.erase(pattern.end()-1);
                vis[i]=false;
            }
            
            if(ind[indx].second==ind[i].second) {
                vis[i]=true;
                pattern.push_back(i);
                if(check(i,'R')) {
                    return true;
                }
                pattern.erase(pattern.end()-1);
                vis[i]=false;
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        pattern.clear();
        int n;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            ind[i]=make_pair(x,y);
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<m;j++) {
                vis[j]=false;
            }
            pattern.clear();
            vis[i]=true;
            pattern.push_back(i);
            if(check(i,'X')) {
                break;
            }
        }
    }
}