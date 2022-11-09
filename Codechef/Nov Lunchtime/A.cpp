#include<iostream>
#include<algorithm>
#include<map>
#include<utility>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int* arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        int sum=arr[0];
        int i=1;
        while(sum!=0)
        {
            sum--;
            count++;
            if(i<n)
            {
                sum+=arr[i];
                i++;
            }
        }
        cout<<count<<endl;
    }   
}