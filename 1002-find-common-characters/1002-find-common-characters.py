from collections import Counter
class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        min_count = Counter(words[0])
    
        # Iterate through the remaining words
        for word in words[1:]:
            # Update the minimum count by taking the intersection with the Counter of the current word
            min_count &= Counter(word)

        # Convert the Counter to a list of characters
        common_chars = list(min_count.elements())

        return common_chars