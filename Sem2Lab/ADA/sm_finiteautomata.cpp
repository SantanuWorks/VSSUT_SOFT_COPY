#include<iostream>
#include<string>
#define NO_OF_CHARS 256
using namespace std; 

int getNextState(string pat, int M, int state, int x)
{
    if (state < M && x == pat[state])
        return state + 1;
 
    int ns, i; 
    
    for (ns = state; ns > 0; ns--)
    {
        if (pat[ns - 1] == x)
        {
            for (i = 0; i < ns - 1; i++)
            {
                if (pat[i] != pat[state - ns + 1 + i])
                    break;
            }
            if (i == ns - 1)
                return ns;
        }
    }
 
    return 0;
}
 
void computeTF(string pat, int M, int TF[][NO_OF_CHARS])
{
    int state, x;
    for (state = 0; state <= M; ++state)
        for (x = 0; x < NO_OF_CHARS; ++x)
            TF[state][x] = getNextState(pat, M, state, x);
}
 
void search(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
 
    int TF[M + 1][NO_OF_CHARS];
 
    computeTF(pat, M, TF);

	cout << "\nString Matching Result:\n";

    int i, state = 0;
    for (i = 0; i < N; i++)
    {
        state = TF[state][txt[i]];
        if (state == M)
        {
            cout << "\nValid Shift = " << i - M + 1;
        }
    }
}

int main()
{
    string txt, pat;
    
    cout << "Enter text: ";
    cin >> txt;
    
    cout << "Enter pattern: ";
    cin >> pat;
    
    search(pat, txt);
    return 0;
}

