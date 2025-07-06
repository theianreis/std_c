#include <stdio.h>
int main(){


int moda = a[0];
int maxCount = 0;

for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
        if (a[j] == a[i]) {
            count++;
        }
    }
    if (count > maxCount) {
        maxCount = count;
        moda = a[i];
    }
}
return 0;
}