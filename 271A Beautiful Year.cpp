#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;

    int i,j,flag,t;

    int a[4];

    while(1){
        y++;
        t=y;
        flag=0;
    a[0]=y%10;
    y=y/10;
    //cout<<a[0]<<" - "<<y<<endl;

    a[1]=y%10;
    y=y/10;
    //cout<<a[1]<<" - "<<y<<endl;

    a[2]=y%10;
    y=y/10;
    //cout<<a[2]<<" - "<<y<<endl;

    a[3]=y%10;
    //cout<<a[3]<<" - "<<y<<endl;

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j]){flag=1;}
        }
    }
    if(flag==0){cout<<t<<endl; break;}
    y=t;
    }


    return 0;
}
