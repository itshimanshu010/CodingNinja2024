int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int frm=N*(N+1)/2;
    int sum=0;
    for (int i = 0; i < N - 1; i++) {
        sum+=a[i];
      }

      return frm-sum;
}
