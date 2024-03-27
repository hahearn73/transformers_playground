def hamming_distance(str1, str2)
  distance = 0
  [str1.length, str2.length].min.times do |i|
    distance += 1 if str1[i] != str2[i]
  end
  distance += (str1.length - str2.length).abs
  distance
end