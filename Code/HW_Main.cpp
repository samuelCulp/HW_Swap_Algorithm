//samuel culp
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Function/Method Declaration - START
//	define function/method declaration signatures between the two markers
string sorts(string s)
{
    char c[s.length() + 1];

    strcpy(c, s.c_str());
 
    sort(c, c + s.length());
 
    int al_c = 0, nu_c = 0;
 
    while (c[al_c] < 97)
        al_c++;
 
    for (int i = 0; i < s.length(); i++) {
 
        if (s[i] < 97)
            s[i] = c[nu_c++];
 
        else
            s[i] = c[al_c++];
    }
    return s;
}// Function/Method Declaration - END


// Function/Method Definition - START
//	define function/method declaration signatures between the two markers
int main ()
{// Variable - START
//define variables that are global between the two Variable markers
    int a = 0, n = 0, nod = 0, i;
    string numa[100] = {""};
    char alpha[100] = {""};
    char opp[100] = {""};
    string input, str, newopp, total, total_opp, total_al, total_num;
    int len;
    // Variable - END

    cout << "Enter things to sort:  ";
    cin >> input;
    cout << "\n";
    len = input.length();
    for(int i = 0; i < len; i++){
        char c = input[i];

        if (c == '%' || c == '/' || c == '*' || c == '+' || c == '-' || c == ' ' || c == '!' || c == '"' || c == '#'|| c == '$'|| c == '&' ||
            c == ')' || c == '(' || c == ',' || c == '.' || c == '=' || c == ':' || c == ';'|| c == '@'|| c == '<'|| c == '>'|| c == '['|| c == '&'|| 
            c == '[' || c == ']'|| c == '{'|| c == '}'|| c == '`'|| c == '~'|| c == '_'|| c == '|' || input[i] == ' ') {
            opp[nod] = c;
            nod++;
            char c = ' ';
        }

        if (isalpha(input[i])){
            str.push_back(c);
            alpha[a] = c;
            char c = ' ';
            a++;
        }

        if (isdigit(input[i])){
            numa[n] = (c);
            char c = ' ';
            n++;
        } 
        }


    newopp = opp;
    newopp = sorts(newopp); //goes to a function
    for(int i = 0; i < nod; ++i){
        total_opp += newopp[i];
    }

    a -= 1;
    total_al = alpha;
    total_al = sorts(total_al);//goes to a function

    sort(numa, numa + n);
    for(int i = 0; i < n; ++i){
        total_num += numa[i];
    }

    total = total_opp + total_al + total_num; // adds all of them together
    cout << total;

    return 0;
}// Function/Method Definition - END
