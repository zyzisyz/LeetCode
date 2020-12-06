class Solution:
    def reverseWords(self, s: str) -> str:
        res_list = s.split(' ')
        res_list.reverse()
        res = ""
        first = True
        for item in res_list:
            if item != '':
                if not first:
                    res += ' '
                res += item
                first = False
        return res
