class Solution {
public:
int minBitFlips(int start, int goal) {
    int n=start^goal;
    int cnt=0;
    for(int i=0;i<32;i++) {
        if(((n>>i)&1)==1) cnt++;
    } return cnt;
}
};