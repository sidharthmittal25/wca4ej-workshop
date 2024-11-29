# Assisted by WCA@IBM
# Latest GenAI contribution: ibm/granite-20b-code-instruct-v2

def isPalindrome(string):
    left = 0
    right = len(string) - 1

    while left < right:
        if string[left] != string[right]:
            return False

        left += 1
        right -= 1

    return True



if __name__ == '__main__':
    string = input("Enter a string: ")

    if isPalindrome(string):
        print("The input string is a palindrome.")
    else:
        print("The input string is not a palindrome.")
