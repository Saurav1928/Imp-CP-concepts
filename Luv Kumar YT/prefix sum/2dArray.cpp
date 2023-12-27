void prefixSum(  vector<vector<int>>arr){
int n=a.size(), m=a[0].size();
    vector<vector<int>>pf(n+1, vector<int>(m+1, 0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        pf[i][j]=a[i-1][j-1]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
    }
return pf;
}
