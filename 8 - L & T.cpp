#include<bits/stdc++.h>
using namespace std;
int main() {
vector<pair<char, string>> prod;
prod.push_back({'A', "aB"});
prod.push_back({'B', "cA"});
prod.push_back({'C', "b"});
prod.push_back({'A', "B"});
vector<vector<int>> ans(3, vector<int>(3, 0));
for (int i = 0; i < 4; i ++) {
int curr = prod[i].first - 'A';
char ele = prod[i].second[0];
if (isupper(ele)) {
int from = ele - 'A';
for (int i = 0; i < 3; i ++) {
if (ans[from][i] == 1) 
ans[curr][i] = 1;
}}
else {
ans[curr][ele - 'a'] = 1;
}
} 
for (int i = 0; i < 3; i ++) { 
cout << "Leading of " << char('A' + i) << " is: ";
for (int j = 0; j < 3; j ++) {
if (ans[i][j]) cout << char('a' + j) << ',';
ans[i][j] = 0;
}
cout << endl;
}
cout << endl;
for (int i = 0; i < 4; i ++) {
int curr = prod[i].first - 'A';
string e = prod[i].second;
char ele = e[e.length() - 1];
if (isupper(ele)) {
int from = ele - 'A';
for (int i = 0; i < 3; i ++) {
if (ans[from][i] == 1) 
ans[curr][i] = 1;
} }
else {
ans[curr][ele - 'a'] = 1;
} } 
for (int i = 0; i < 3; i ++) { 
cout << "Trailing of " << char('A' + i) << " is: ";
for (int j = 0; j < 3; j ++) {
if (ans[i][j]) cout << char('a' + j) << ',';
}
cout << endl;
}}
