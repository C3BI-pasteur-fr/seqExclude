#! /bin/sh

### Set verbose mode
test "x$VERBOSE" = "xx" && set -x

#does it run ?
../src/seqExclude -h &> /dev/null || exit 1

exit 0
