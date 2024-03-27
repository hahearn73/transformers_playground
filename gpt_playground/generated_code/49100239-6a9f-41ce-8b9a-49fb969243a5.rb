def palindrome?(string)
  string.downcase.gsub(/\W/, '') == string.downcase.gsub(/\W/, '').reverse
end