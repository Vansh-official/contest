#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> arr(n),m(31);
        for(int i=0;i<31;i++){
            m[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i];
            for(int j=0;j<31;j++){
                if((arr[i]&(1<<j))){
                    m[j]++;
                }
            }
        }   
        int score=0;
        for(int i=0;i<31;i++){
            if(m[i]){
                score=score^((int)pow(2,i));
            }
        }     
        cout<<score<<endl;
        while(q--){
            int x,v;
            cin>>x>>v;
            for(int i=0;i<31;i++){
                if((arr[x-1]&(1<<i))){
                    m[i]--;
                }
                if((v&(1<<i))){
                    m[i]++;
                }
            }
            score=0;
            for(int i=0;i<31;i++){
                if(m[i]){
                    score=score^((int)pow(2,i));
                }
            }
            cout<<score<<endl;
            arr[x-1]=v;
        } 
    }        
}