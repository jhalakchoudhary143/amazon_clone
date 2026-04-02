#include <stdio.h>

int lowerbound(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    for (int t = 1; t <= 3; t++) {
        int n, m;
        printf("\n=== Test Case %d ===\n", t);
        printf("Enter number of rows: ");
        scanf("%d", &n);
        printf("Enter number of columns: ");
        scanf("%d", &m);

        int arr[n][m];
        printf("Enter the elements of row-wise sorted binary matrix (0s before 1s):\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                scanf("%d", &arr[i][j]);
        }

        int cnt_max = 0, indx = -1;
        for (int i = 0; i < n; i++) {
            int cnt_ones = m - lowerbound(arr[i], m, 1);
            if (cnt_ones > cnt_max) {
                cnt_max = cnt_ones;
                indx = i;
            }
        }

        if (cnt_max == 0)
            printf("Not Present\n");
        else
            printf("Row-%d\n", indx);
    }
    return 0;
}