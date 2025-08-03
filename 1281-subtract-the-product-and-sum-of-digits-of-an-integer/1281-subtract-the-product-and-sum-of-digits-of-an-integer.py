class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        Sum=0
        Prod=1
        temp=n
        while(temp>0):
            Rem=temp%10
            Sum+=Rem
            Prod*=Rem
            temp//=10
        return Prod-Sum
        