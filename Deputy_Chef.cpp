#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    if(T > 100 || T<1) return 0;

    do{
        vector<long int> ans;
        int N;
        cin>>N;
        if(N > 100 || N<3) return 0;
        vector<int> attackArray(N), defArray(N);

        for (int i =0; i<N; i++) {
            cin>>attackArray.at(i);
        }
        for (int i =0; i<N; i++) {
            cin>>defArray.at(i);
        }
        if (defArray.at(0) > attackArray.at(1) && 
    defArray.at(0) > attackArray.at(N-1) && 
    defArray.at(0)> attackArray.at(1) + attackArray.at(N-1)){

        ans.push_back(defArray.at(0));

    }
    if (defArray.at(N-1) > attackArray.at(0) && 
    defArray.at(N-1) > attackArray.at(N-2) && 
    defArray.at(N-1)> attackArray.at(0) + attackArray.at(N-2)){

        ans.push_back(defArray.at(N-1));

    }


        for (int i =1; i<N-1; i++) {
   int nexti, previ;

    nexti = i + 1;
    previ = i - 1;

if (defArray.at(i) > attackArray.at(nexti) && 
    defArray.at(i) > attackArray.at(previ) && 
    defArray.at(i)> attackArray.at(nexti) + attackArray.at(previ)){

        ans.push_back(defArray.at(i));

    }
else {ans.push_back(-1); break;}

}

        sort(ans.begin(), ans.end(), greater<int>());
        cout<<ans[0]<<endl;

        T--;
    }while (T !=0);


    return 0;
}
