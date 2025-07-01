#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;

    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0){
        cout<<-1<<endl;
    }
    else if(a==0 && b==0)
    {
        cout<<0<<endl;
    }
    else if(a==0)
    {
        double x = -c/b;
        cout<<1<<endl;
        cout<<fixed<<setprecision(10)<<x<<endl;
    }
   else{
        double d=b*b-4*a*c;
        if(d<0){
            cout<<0<<endl;
        }
        else if(d==0){
                double x= -b/(2*a);
        cout<<1<<endl;
        cout<<fixed<<setprecision(10)<<x<<endl;
        }
        else{
            double D=sqrt(d);
            double x1=(-b-D)/(2*a);
            double x2=(-b+D)/(2*a);
            if(x1>x2) swap (x1,x2);
            cout<<2<<endl;
            cout<<fixed<<setprecision(10)<<x1<<endl;
            cout<<fixed<<setprecision(10)<<x2<<endl;

        }
   }
    return 0;

    }

