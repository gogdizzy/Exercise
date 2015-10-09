g++ main.cc -O2 -o test_empty
g++ main.cc -O2 -D_GCD_RECURSIVE -o test_recur
g++ main.cc -O2 -D_GCD_ITERATIVE -o test_iter
g++ main.cc -O2 -D_GCD_BINARY -o test_bin
g++ main.cc -O2 -D_GCD_BINARY_RECUR -o test_bin_recur
g++ main.cc -O2 -D_GCD_BINARY_BUILTIN -o test_bin_builtin



echo -e '\ntest_empty'
time ./test_empty
echo -e '\ntest_recur'
time ./test_recur
echo -e '\ntest_iter'
time ./test_iter
echo -e '\ntest_bin'
time ./test_bin
echo -e '\ntest_bin_recur'
time ./test_bin_recur
echo -e '\ntest_bin_builtin'
time ./test_bin_builtin



