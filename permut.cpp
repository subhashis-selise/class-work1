#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    do
    {
        cout<<s<<endl;
    }
    while ( next_permutation (s.begin(),s.end()) );

    return 0;
}
