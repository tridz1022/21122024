#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long a, b, k;
    cin >> a >> b >> k;
    
    // Đảm bảo a ≤ b
    if (a > b) swap(a, b);
    
    if (a < k) {
        cout << b - k;
    } else {
        // Tính k*(k+1)/2 một cách an toàn
        long long sum;
        if (k % 2 == 0) {
            sum = (k/2) * (k+1);
        } else {
            sum = k * ((k+1)/2);
        }
        
        // Nếu tổng quá lớn hơn a, ta chỉ có thể bỏ hết a viên ở hộp 1
        if (sum > a) {
            cout << b - k;
        } else {
            cout << (a - sum) + (b - sum);
        }
    }
    
    return 0;
}
