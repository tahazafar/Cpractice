void
password (
  char *pass,
  int level,
  int *letter,
  int *digit,
  int n
  )
{
  static int stop = 0, STOP = 1000; // Stop after STOP password
  int i;

  if (level == L2) {
    for (i=0; i<L2; i++) {
      fprintf (stdout, "%c", pass[i]);
    }
    fprintf (stdout, "\n");

    stop++;
    if (stop==STOP) exit (1);

    return;
  }

  if (level<3) {
    // Select a letter
    for (i=0; i<26; i++) {
      if (letter[i]<n) {
        letter[i]++;
        pass[level] = (char) (((int) 'a') + i);
        password (pass, level+1, letter, digit, n);
        letter[i]--;
      }
    }
  } else {
    // Select a digit
    for (i=0; i<10; i++) {
      if (digit[i]<n) {
        digit[i]++;
        pass[level] = (char) (((int) '0') + i);
        password (pass, level+1, letter, digit, n);
        digit[i]--;
      }
    }
  }


  return;
}
