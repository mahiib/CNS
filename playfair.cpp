#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String";
    cin>>str;
    cout<<"Enter the Key";
    string key;
    cin>>key;
    
    int n = str.length();
    char pt[n];
    strcpy(pt, str.c_str());
    char ptx[n+n];
    int k=0;
    int i=0;
    char a,b;
    for(i=0;i<n-1;i++)
    {   
        
        a=pt[i++];
        b=pt[i];
        printf("\n%c%c\n",a,b);
        if(a!=b)
        {
            ptx[k++]=a;
            ptx[k]=b;
            
        }
        else
        {
            ptx[k++]=a;
            ptx[k++]='x';
            i--;
            
        }
        k++;

        
    }
    
    if(i<n)
    {
        ptx[k]=pt[i];
    }
     for (i = 0; i < sizeof(ptx); i++)
    {
        
        cout << ptx[i];
    }
    

    return 1;

    
}
