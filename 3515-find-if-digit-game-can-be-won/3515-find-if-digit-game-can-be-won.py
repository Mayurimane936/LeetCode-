class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        singlesum = 0
        doublesum = 0
        for num in nums:
            if num>=0 and num<=9:
                singlesum+=num
            else:
                doublesum+=num

        if singlesum == doublesum:
            return False
        return True
        