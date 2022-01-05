#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const double OO = 1e9;
const double EPS = 1e9 * -1;
const int MOD = 1e9;


void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


int main(){
    fast();
    int T;  // cin >> T;
    string s;

    while(cin >> s){

        if(s[0] == '#')
            break;
        vector<stack<string>> cards;
        stack<string> st;
        st.push(s);
        cards.push_back(st);

        for(int i = 1; i < 52; i++){
            stack<string>st;
            cin >> s;
            st.push(s);
            cards.push_back(st);
        }

        for(int i = 0 ; i < cards.size(); i++){
            if(i >= 3 &&
                (cards[i].top()[1] == cards[i - 3].top()[1]
                || cards[i].top()[0] == cards[i - 3].top()[0])){

                cards[i - 3].push(cards[i].top());
                cards[i].pop();
                if(cards[i].empty()){
                    cards.erase(cards.begin() + i , cards.begin() + i + 1);
                }
                i -= 4;

                if(i - 4 >= 0)
                    i -= 4;
                else if(i - 2 >= 0)
                    i -= 2;
            }
            else if(i > 0 &&
                (cards[i].top()[1] == cards[i - 1].top()[1]
                || cards[i].top()[0] == cards[i - 1].top()[0])){

                cards[i - 1].push(cards[i].top());
                cards[i].pop();
                if(cards[i].empty()){
                    cards.erase(cards.begin() + i , cards.begin() + i + 1);
                }
                i -= 2;

                if(i - 4 >= 0)
                    i -= 4;
                else if(i - 2 >= 0)
                    i -= 2;
            }

        }

        cout << cards.size() << " pile" << (cards.size() > 1 ?"s " : " ") << "remaining: ";
        for(int i = 0; i < cards.size(); i++){
            if(i != 0)
                cout << ' ';
            cout << cards[i].size();
        }
        cout << endl;

    }


  return 0;
}
