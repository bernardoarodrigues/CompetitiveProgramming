#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main(void) {
    int n;
    cin >> n;

    vector<pair<int, int>> tasks;

    for(int i=0; i<n; i++) {
        pair<int, int> task;
        cin >> task.first >> task.second;
        tasks.push_back(task);
    }

    sort(tasks.begin(), tasks.end(), cmp);

    int tatual=0, resp=0;

    for(int i=0; i<n; i++) {
        if(i==0) tatual == tasks[i].second;

        if(tasks[i].first >= tatual) {
            tatual=tasks[i].second;
            resp++;
        }
    }

    cout << resp;
}