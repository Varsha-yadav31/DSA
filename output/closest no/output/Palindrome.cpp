bool isPalindromeBool(int n) { // Recommended
    int original = n, rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == original;  // returns true/false
}

int isPalindromeInt(int n) {  // Also works
    int original = n, rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(rev == original)
        return 1;
    else
        return 0;
}
/*while(n<0)
int L;
int s;
L = n%10;
s = s*10/L;
s = n/10;

    }*/