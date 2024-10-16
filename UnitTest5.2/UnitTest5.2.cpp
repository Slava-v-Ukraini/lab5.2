#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Тестування функції S
			double eps = 1e-6;
			int n = 0;

			// Перевірка для x = 0.5
			double result = S(0.5, eps, n, 0);
			double expected = log((1 + 0.5) / (1 - 0.5)) / 2;
			Assert::AreEqual(2 * result, log((1 + 0.5) / (1 - 0.5)), 1e-6);

			// Перевірка для x = 0
			result = S(0.0, eps, n, 0);
			Assert::AreEqual(2 * result, 0.0, 1e-6);

			// Перевірка для x = -0.5
			result = S(-0.5, eps, n, 0);
			Assert::AreEqual(2 * result, log((1 + (-0.5)) / (1 - (-0.5))), 1e-6);
		}

		TEST_METHOD(TestMethod2)
		{
			// Тестування функції A
			double x = 0.5;
			int n = 0;
			double a = 1.0;
			double result = A(x, n, a);
			double expected = (x * x) * (2.0 * n - 1) / (2.0 * n + 1) * a;
			Assert::AreEqual(result, expected, 1e-6);
		}
	};
}
