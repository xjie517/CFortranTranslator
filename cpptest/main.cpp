//#include "../for90std/for90std.h"

//double ss(const double & r, const foroptional<double> & h)
//{
//	double ss_result;
//	double temp_h;
//	if ((forpresent(h))) {
//		temp_h = h;
//	}
//	else {
//		temp_h = 1.0;
//	}
//	ss_result = 3.1415926 * power(r, 2) * temp_h;
//	return ss_result;
//}
//int main()
//{
//	printf(" %s%10.3f", "vol=", ss(2.5, 9));
//	return 0;
//}

///******************************************************************/
///* File:                                                          */
///* Author:                                                        */
///* Generated by CFortranTranslator                                */
///* CFortranTranslator is a open-source software under GPL license */
///* visit https://github.com/CalvinNeo/CFortranTranslator/ for more*/
///******************************************************************/
//#include "../for90std/for90std.h"
//int main()
//{
//
//	for1array<int> a(1, 10 + 1);
//
//	int i;
//	a(1) = 0;
//	a(2) = 1;
//	for (i = 3; i <= 10; i += 1) {
//		a(i) = a(i - 2) + a(i - 1);
//	}
//	forprint(" %8d%8d%8d%8d%8d%d%d", a);
//	return 0;
//}


///******************************************************************/
///* File:                                                          */
///* Author:                                                        */
///* Generated by CFortranTranslator                                */
///* CFortranTranslator is a open-source software under GPL license */
///* visit https://github.com/CalvinNeo/CFortranTranslator/ for more*/
///******************************************************************/
//#include "../for90std/for90std.h"
//int sum(const int & x, const int & y)
//{
//	int sum_result;
//	sum_result = x + y;
//	return sum_result;
//}
//
//int minu(const int & x, const int & y)
//{
//	int minu_result;
//	minu_result = x - y;
//	return minu_result;
//}
//
//void proc(const int & a, const int & b, std::function<int(const int & x, const int & y)> fun)
//{
//	cout << fun(a, b) << endl;
//	return;
//}
//
//int main()
//{
//
//	int a, b;
//	cin >> a >> b;
//	proc(a, b, sum);
//	proc(a, b, minu);
//	return 0;
//}

///******************************************************************/
///* File:                                                          */
///* Author:                                                        */
///* Generated by CFortranTranslator                                */
///* CFortranTranslator is a open-source software under GPL license */
///* visit https://github.com/CalvinNeo/CFortranTranslator/ for more*/
///******************************************************************/
//#include "../for90std/for90std.h"
//
//template<typename T>
//void test1(T x, for1array_matcher<T>) {
//	cout << "match" << endl;
//}
//template<typename T>
//void test1(T x, ...) {
//	cout << "no match" << endl;
//}
//
//int main()
//{	
//	for1array<int > d({ 5 }, { 3 }, forslice(a, { { 5,7 } }) + {5}, { 3 }, b(5)(6) + {5}, { 3 }, f1a_init_hiddendo(1, 4, [](int i) {return to_int(i) + 1; }));
//	for1array< for1array< for1array<int>  > > aaa({ 5,6,7 }, { 2,2,2 }, { 1, 2, 3, 4, 5, 6, 7, 8 });
//	forprintfree(aaa);
//	for1array< for1array< for1array<int>  > > b(1, 3);
//	f1a_init(b, {1, 1, 1}, {1, 2, 3}, {1, 2, 3, 4, 5, 6});
//	vector<fsize_t> size = f1a_getsize(b);
//	forwritefree(stdout, b);
//	std::vector< int * >  xxxx = f1a_flatternedptr(b);
//	for (auto i = 0; i < xxxx.size(); i++)
//	{
//		*xxxx[i] = 1;
//	}
//	forwritefree(stdout, b);
//	
//	//auto reshaped_array = forreshape({ 1,2,3,4,5,6 }, {2, 3});
//	//forwritefree(stdout, reshaped_array);
//
//	return 0;
//}

/*******************************************************************/
/* File:                                                           */
/* Author:                                                         */
/* Generated by CFortranTranslator                                 */
/* CFortranTranslator is an open-source software under GPL license */
/* visit https://github.com/CalvinNeo/CFortranTranslator/ for more */
/*******************************************************************/
#include "../for90std/for90std.h"
#define USE_FORARRAY

int main()
{
	//farray<int, 2> e({ 1,1 }, { 2,2 }, [](const fsize_t(&current)[2]) {return [](fsize_t i, fsize_t j) {return i + j; }(current[0], current[1]); });
	//forprintfree(e);
	farray<int, 3> a{};

	a = forreshape({ 1, 2, 3, 4, 5, 6, 7, 8 }, { 2, 2, 2 });
	//forprintfree(formaxloc(a));
	forprintfree(formaxloc(a, 1));
	return 0;
}

///*******************************************************************/
///* File:                                                           */
///* Author:                                                         */
///* Generated by CFortranTranslator                                 */
///* CFortranTranslator is an open-source software under GPL license */
///* visit https://github.com/CalvinNeo/CFortranTranslator/ for more */
///*******************************************************************/
//#include "../for90std/for90std.h"
//#define USE_FORARRAY
//
//int main()
//{
//
//	for1array< for1array<int>  > m(1, 5 + 1);
//
//	string ch = "";
//	int i, j, k = 0;
//	for (i = 1; i <= 5; i += 1) {
//		for (j = 1; j <= 5; j += 1) {
//			k = k + 1;
//			m(i, j) = k;
//		}
//	}
//	for (i = 1; i <= 5; i += 1) {
//		forprint(" %4d%4d%4d%4d%4d\n", slice(m(i), 1, i + 1));
//	}
//	forwrite(stdout, "----%s");
//	for (i = 1; i <= 5; i += 1) {
//		forprint(" %s%4d%4d%4d%4d%4d\n", slice(ch, 1, 4 * (i - 1) + 1), slice(m(i), i, 5 + 1));
//	}
//	forreshape<int, 2>({ 1,2,3,4,5,6 }, { 2,3 });
//	system("pause");
//}