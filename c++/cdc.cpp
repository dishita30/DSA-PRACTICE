#include <iostream>
#include <stack>
using namespace std;

int largestRectangleArea(int heights[], int n) {
    stack<int> s;
    int maxArea = 0;
    int tp;
    int area_with_top;

    int i = 0;
    while (i < n) {
        if (s.empty() || heights[s.top()] <= heights[i])
            s.push(i++);
        else {
            tp = s.top();
            s.pop();

            area_with_top = heights[tp] * (s.empty() ? i : i - s.top() - 1);

            if (maxArea < area_with_top)
                maxArea = area_with_top;
        }
    }

    while (!s.empty()) {
        tp = s.top();
        s.pop();
        area_with_top = heights[tp] * (s.empty() ? i : i - s.top() - 1);

        if (maxArea < area_with_top)
            maxArea = area_with_top;
    }

    return maxArea;
}

int main() {
    int n;
   
    cin >> n;

    int heights[n];
    cout << n ;
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int result = largestRectangleArea(heights, n);
    cout << result << endl;

    return 0;
}


