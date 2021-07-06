// problem : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        static int ba[2] = {0, 0};
        for (int i = 0; i < n; i++) {
            if (arr[abs(arr[i]) - 1] > 0) {
                arr[abs(arr[i]) - 1] = - arr[abs(arr[i]) - 1];
            } else {
                ba[0] = abs(arr[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                ba[1] = i+1;
            }
        }
        return ba;
    }
};
