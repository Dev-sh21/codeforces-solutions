#include <iostream>
#include<vector>
#include<map>
using namespace std;
using ll=long long;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> sizes(n);
        for (int i = 0; i< n; i++) 
            cin >> sizes[i];

        map<ll,ll> freq;
        for (int i = 0; i< n; i++) 
            freq[sizes[i]]++;       

        ll flag = 0;
        for (auto i :freq)
        {
            if (i.second ==1)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << -1 <<endl;
            continue;
        }

        vector<ll>students(n);
        for (int i = 0; i < n; i++) 
            students[i] = i + 1;

        ll l =0, r =0;
        while (r < n) 
        {
            if (sizes[l] ==sizes[r])
                r++;
            else
            {
                rotate(students.begin() + l,students.begin() +l+1, students.begin() + r);
                l = r;
            }
        }
        rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);

        for (auto i : students)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}

