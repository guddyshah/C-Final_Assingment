// Set-2 Question-3	

#include <iostream>
using namespace std;
int b=0;
void occurence(string a, int len)
{
    string str;
    for(int k=0;k<len;k++)
    {
        str = a.substr(k,2);
        if(str=="01")
        {
            b++;
        }
    }

}
int main()
{
    int count=0;
    string a;
    cin>>a;
    int len = a.length();
    occurence(a,len);
    count+=b;
    b=0;
    for(int i=0;i<len-2;i++){

        for(int j=i+2;j<len;j++){

            string str = a;

            char x;

            x = str[i];

            str[i] = str[j];

            str[j] = x;

            if(str!=a){

                occurence(str,len);

                count+=b;

                b=0;

            }

        }
    }
    cout<<"\n 01 (final)occurence in string : "<<count<<endl;
    return 0;
}