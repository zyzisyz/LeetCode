class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        try:
            length = len(nums)
            first = nums.index(target)
            second = first
            while second+1 < length and nums[second+1] == target:
                second = second + 1
            return [first, second]
        except:
            return [-1, -1]
