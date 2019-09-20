
://www.hackerrank.com/challenges/ctci-recursive-staircase/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int stepPerms(int n) {

unordered_map<int,int> hash;
hash[0] = 1;
hash[1] = 1;
hash[2] = 2;
hash[3] = 4;

for(int i = 4 ; i <= n ; ++i )
{
    hash[i] = hash[i-1] + hash[i-2] + hash[i-3];
}

return hash[n];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}

