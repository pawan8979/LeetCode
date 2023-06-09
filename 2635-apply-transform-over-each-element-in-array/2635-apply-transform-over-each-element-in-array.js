/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    arr.forEach(function(current, index, arr)
    {
        arr[index] = fn(current, index);
        
    })
    return arr;
};