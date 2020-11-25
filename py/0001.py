class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        table = {}
        for (idx, item) in enumerate(nums):
            if target-item in table:
                return table[target-item], idx
            table[item] = idx
        return [-1, -1]
