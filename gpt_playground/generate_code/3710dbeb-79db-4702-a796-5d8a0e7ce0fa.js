function areAnagrams(str1, str2) {
  const normalizeStr = (str) => str.replace(/[^\w]/g, '').toLowerCase().split('').sort().join('');
  return normalizeStr(str1) === normalizeStr(str2);
}