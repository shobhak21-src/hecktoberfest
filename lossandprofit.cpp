#include<stdio.h>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter the cast price :"<<endl;
    cin>>cp;
    cout<<"Enter the sell price :"<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"It is the Profit";
    }
       else if (sp<cp)
    {
        cout<<"It is the Loss";
    }
    else 
    {
       cout<<"No profit, No loss";
    }
}
