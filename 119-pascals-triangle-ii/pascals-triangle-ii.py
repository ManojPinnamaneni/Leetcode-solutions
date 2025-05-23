class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex == 0:
            return [1]  
        prev_row = self.getRow(rowIndex - 1)  
        new_row = [1]  
        for i in range(1, rowIndex):
            new_row.append(prev_row[i - 1] + prev_row[i])
        new_row.append(1)  
        return new_row