class Solution:
    def longestCommonPrefix(self, v: List[str]) -> str:
        res = ""
        v = sorted(v)
        for i in range(min(len(v[0]),len(v[-1]))):
            if v[0][i] != v[-1][i]:
                return res
            res += v[0][i]
        return res 