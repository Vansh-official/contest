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
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }        
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<arr[i]<<" ";
                arr[i]=-1;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=-1){
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }
}