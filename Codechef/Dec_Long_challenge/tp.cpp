#include<iostream>
using namespace std;

long long fact[10000001],mod;
    
    long long inv(long long a,long long n) {
        long long q,r1=n,r2=a,r,t1=0,t2=1,t;
        while(true) {
            q=r1/r2;
            r=r1%r2;
            t=t1-(q*t2);
            r1=r2;
            r2=r;
            t1=t2;
            t2=t;
            if(r2==0) {
                    break;
            }
        }
        if(r1!=1) {
                return -1;
        }
        t1%=n;
        if(t1<0) {
                t1+=n;
        }
        return t1;
    }

    long long ncr(int n,int r) {
//        System.out.println(n+" "+r);
        long long ans=fact[n];
        ans*=inv(fact[r],mod);
        ans%=mod;
        ans*=inv(fact[n-r],mod);
        ans%=mod;
        return ans;
    }

    long long solve(int n,int k,int g) {
        long long num=ncr(n-k-1,g-1),den=ncr(n,g);
        n-=g;
        while(n>0) {
            long tmp=ncr(n,g);
            num*=tmp;
            den*=tmp;
            num%=mod;
            den%=mod;
            n-=g;
        }
//        System.out.println(num+" "+den);
//        num=den-num;
//        while(num<0) {
//            num+=mod;
//        }
        long ans=num*inv(den,mod);
        ans=1-ans;
        while(ans<0) {
            ans+=mod;
        }
        ans%=mod;
        return ans;
    }


    int main() {

        int test;
        cin>>test;
        mod=1000000007;
        fact[0]=1;
        for(int i=1;i<10000001;i++) {
            fact[i]=i*fact[i-1];
            fact[i]%=mod;
        }
        for(int tt=1;tt<=test;tt++) {
            int n;
            int k;
            int g;
            cin>>n>>k>>g;
            if(k==0) {
                cout<<0<<"\n";
                continue;
            }
            if(k==n-1) {
                cout<<1<<"\n";
                continue;
            }
            cout<<solve(n,k,g)<<"\n";
        }

    }
    
    
    