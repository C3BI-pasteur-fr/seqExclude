#! /bin/sh

### Set verbose mode
test "x$VERBOSE" = "xx" && set -x

# filter

# zero by default
../src/seqExclude -o tmp.out $srcdir/test.fa 2> tmp.err || exit 1
diff $srcdir/test.fa tmp.out > /dev/null || exit 1

# zero set
../src/seqExclude -l 0 -o tmp.out  $srcdir/test.fa  2> tmp.err || exit 1
diff $srcdir/test.fa tmp.out > /dev/null || exit 1

../src/seqExclude -l 160 -o tmp.out  $srcdir/test.fa  2> tmp.err || exit 1
diff $srcdir/filter_160.out tmp.out > /dev/null || exit 1
diff $srcdir/filter_160.err tmp.err > /dev/null || exit 1

## Clean
rm -f tmp.*

exit 0
