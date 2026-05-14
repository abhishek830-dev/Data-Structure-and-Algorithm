let num = 54145;
let original = num;
let rev = 0;

while (num > 0) {
  let digit = num % 10;
  rev = rev * 10 + digit;
  num = Math.floor(num / 10);
}

if (original == rev) {
  console.log("Palindrome")
} else {
  console.log("not Plaindrome");
}
