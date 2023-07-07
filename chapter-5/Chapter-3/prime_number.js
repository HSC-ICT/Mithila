let i,
  n = 100;

for (i = 2; i < n; i++) {
  if (i < 10 && (i == 2 || i == 3 || i == 5 || i == 7)) {
    console.log(' ' + i + ' ');
  } else if (!(i % 2 && i % 3 && i % 5 && i % 7)) {
    continue;
  } else {
    console.log(' ' + i + ' ');
  }
}
