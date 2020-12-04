class Solution:
    def isValid(self, s: str) -> bool:

        stk = []
        dic = {'(': ')', '{': '}', '[': ']'}

        for c in s:
            if c == '(' or c == '[' or c == '{':
                stk.append(c)
            else:
                if len(stk) == 0:
                    return False
                top = stk[-1]
                if c != dic[top]:
                    return False
                else:
                    stk.pop()
        if len(stk):
            return False
        return True
