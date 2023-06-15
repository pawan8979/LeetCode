/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
  if (size <= 0 || arr.length === 0) {
    return [];
  }

  var chunkArr = [];
  var i = 0;

  while (i < arr.length) {
    chunkArr.push(arr.slice(i, i + size));
    i += size;
  }

  return chunkArr;
};
