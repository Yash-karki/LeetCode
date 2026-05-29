bool canArrange(int* arr, int arrSize, int k) {
    int remfreq[k];
    for (int i = 0; i < k; i++) {
        remfreq[i] = 0;
    }
    for (int i = 0; i < arrSize; i++) {
        int remainder = ((arr[i] % k) + k) % k;
        remfreq[remainder]++;
    }

    for (int i = 0; i <= k / 2; i++) {
        if (i == 0) {

            if (remfreq[i] % 2 != 0) {
                return false;
            }
        } else if (i == k - i) {

            if (remfreq[i] % 2 != 0) {
                return false;
            }
        } else {

            if (remfreq[i] != remfreq[k - i]) {
                return false;
            }
        }
    }
    return true;
}