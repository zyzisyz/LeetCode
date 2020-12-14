class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dic = {}
        for s in strs:
            index = "".join((lambda x: (x.sort(), x)[1])(list(s)))
            if index not in dic:
                dic[index] = []
            dic[index].append(s)

        res = []
        for key in dic:
            res.append(dic[key])
        return res
