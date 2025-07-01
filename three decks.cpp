#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int total=a+b+c;
        if(total%3 !=0){
            cout<<"No"<<endl;
        }
        else{
                total=total/3;
            if(total>=a && total>=b && total>=c-(total-a)-(total-b)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
