/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
    if (numRows <= 0) return []
    var res = [[1]]
    for (let i = 1; i < numRows; i++) {
        res.push([1])
        for (let j = 1; j < i; j++) {
            res[i].push(res[i - 1][j - 1] + res[i - 1][j])
        }
        res[i].push(1)
    }
    return res
};