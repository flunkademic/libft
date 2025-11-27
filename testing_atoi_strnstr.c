/* test.c
 * Self-contained tests for ft_strnstr and ft_atoi.
 * Compile: gcc -Wall -Wextra -Werror test.c && ./a.out
 */

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stddef.h>

/* ---------- Implementations (same as before) ---------- */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	size_t	i;

	sign = 1;
	result = 0;
	i = 0;
	/* skip whitespace */
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	/* optional sign */
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	/* digits */
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/* ---------- Test harness ---------- */

int main(void)
{
	char *res;
	int ival;

	printf("=== ft_strnstr tests ===\n\n");

	/* 1) needle is empty -> should return haystack pointer */
	{
		const char *h = "hello";
		const char *n = "";
		/* expecting: pointer to "hello" (i.e., the whole haystack) */
		res = ft_strnstr(h, n, 5); /* len doesn't matter when needle == "" */
		printf("1) empty needle: hay=\"%s\" needle=\"%s\" len=5 -> %s\n",
		       h, n, res ? res : "NULL");
	}

	/* 2) haystack empty, needle non-empty -> NULL */
	{
		const char *h = "";
		const char *n = "a";
		/* expecting: NULL */
		res = ft_strnstr(h, n, 1);
		printf("2) empty haystack: hay=\"%s\" needle=\"%s\" len=1 -> %s\n",
		       h, n, res ? res : "NULL");
	}

	/* 3) len == 0 -> should always fail unless needle == "" */
	{
		const char *h = "abcdef";
		const char *n = "a";
		/* expecting: NULL because len==0 and needle != "" */
		res = ft_strnstr(h, n, 0);
		printf("3) len==0: hay=\"%s\" needle=\"%s\" len=0 -> %s\n",
		       h, n, res ? res : "NULL");
	}

	/* 4) needle at very start within len */
	{
		const char *h = "start middle end";
		const char *n = "start";
		/* expecting pointer to start of haystack */
		res = ft_strnstr(h, n, strlen(h));
		printf("4) at start: hay=\"%s\" needle=\"%s\" len=%zu -> %s\n",
		       h, n, strlen(h), res ? res : "NULL");
	}

	/* 5) needle fully inside but partially beyond len -> should not match */
	{
		const char *h = "0123456789";
		const char *n = "345";
		/* set len so that only '3' and maybe '4' are within len, but not all */
		res = ft_strnstr(h, n, 5); /* indexes 0..4 -> "01234" -> "345" would start at 3, needs 3 bytes (3,4,5) but index 5 is out */
		printf("5) partial inside but past len: hay=\"%s\" needle=\"%s\" len=5 -> %s\n",
		       h, n, res ? res : "NULL");
	}

	/* 6) needle at end and len includes the end -> should match */
	{
		const char *h = "find me at the end";
		const char *n = "end";
		res = ft_strnstr(h, n, strlen(h)); /* full length */
		printf("6) at end: hay=\"%s\" needle=\"%s\" len=%zu -> %s\n",
		       h, n, strlen(h), res ? res : "NULL");
	}

	/* 7) needle longer than haystack -> should be NULL */
	{
		const char *h = "short";
		const char *n = "shorterthan";
		res = ft_strnstr(h, n, 100);
		printf("7) needle longer than hay: hay=\"%s\" needle=\"%s\" len=100 -> %s\n",
		       h, n, res ? res : "NULL");
	}

	/* 8) needle appears multiple times -> returns first occurrence */
	{
		const char *h = "abc abc abc";
		const char *n = "abc";
		res = ft_strnstr(h, n, strlen(h));
		printf("8) multiple occurrences: hay=\"%s\" needle=\"%s\" -> %s\n",
		       h, n, res ? res : "NULL");
	}

	/* 9) overlapping characters in haystack shouldn't affect matching */
	{
		const char *h = "aaaaa";
		const char *n = "aaa";
		/* should return pointer to the first 'a' */
		res = ft_strnstr(h, n, 5);
		printf("9) repeating chars: hay=\"%s\" needle=\"%s\" -> %s\n",
		       h, n, res ? res : "NULL");
	}

	printf("\n=== ft_atoi tests ===\n\n");

	/* For each test we'll show the input string and the integer result. */

	/* 1) Leading spaces */
	{
		const char *s = "    42";
		ival = ft_atoi(s); /* expects 42 */
		printf("A1) leading spaces: \"%s\" -> %d\n", s, ival);
	}

	/* 2) Leading tabs and newlines are whitespace too */
	{
		const char *s = "\t\n  \v  -17";
		ival = ft_atoi(s); /* expects -17 */
		printf("A2) mixed whitespace: \"\\t\\n  \\v -17\" -> %d\n", ival);
	}

	/* 3) plus sign */
	{
		const char *s = "+123";
		ival = ft_atoi(s); /* expects 123 */
		printf("A3) plus sign: \"%s\" -> %d\n", s, ival);
	}

	/* 4) minus sign only (no digits) -> 0 because no digits follow sign */
	{
		const char *s = "-";
		ival = ft_atoi(s); /* expects 0 */
		printf("A4) sign only: \"%s\" -> %d\n", s, ival);
	}

	/* 5) no digits at all -> 0 */
	{
		const char *s = "hello";
		ival = ft_atoi(s); /* expects 0 */
		printf("A5) no digits: \"%s\" -> %d\n", s, ival);
	}

	/* 6) digits followed by letters -> stop at first non-digit */
	{
		const char *s = "987abc";
		ival = ft_atoi(s); /* expects 987 */
		printf("A6) digits then letters: \"%s\" -> %d\n", s, ival);
	}

	/* 7) letters before digits -> 0 */
	{
		const char *s = "abc123";
		ival = ft_atoi(s); /* expects 0 */
		printf("A7) letters before digits: \"%s\" -> %d\n", s, ival);
	}

	/* 8) multiple signs (undefined in standard atoi) - by our code it reads the first sign then stops at second char if not digit -> 0 or behavior depends */
	{
		const char *s = "+-12"; /* our implementation: sees '+' then '-' is not digit -> returns 0 */
		ival = ft_atoi(s);
		printf("A8) multiple signs: \"%s\" -> %d (expected behavior: implementation-defined; here: 0)\n", s, ival);
	}

	/* 9) big number exceeding int range (overflow) */
	{
		const char *s = "999999999999999999999999";
		ival = ft_atoi(s); /* overflow — result is implementation dependent; our function will wrap in long -> int cast */
		printf("A9) big number overflow: \"%s\" -> %d (overflow/undefined for atoi)\n", s, ival);
	}

	/* 10) INT_MAX and INT_MIN textual tests */
	{
		char buf[64];
		/* print INT_MAX */
		snprintf(buf, sizeof(buf), "%d", INT_MAX);
		ival = ft_atoi(buf);
		printf("A10a) INT_MAX: \"%s\" -> %d\n", buf, ival);

		/* print INT_MIN (note leading '-' included) */
		snprintf(buf, sizeof(buf), "%d", INT_MIN);
		ival = ft_atoi(buf);
		printf("A10b) INT_MIN: \"%s\" -> %d\n", buf, ival);
	}

	/* 11) leading zeros */
	{
		const char *s = "0000123";
		ival = ft_atoi(s); /* expects 123 */
		printf("A11) leading zeros: \"%s\" -> %d\n", s, ival);
	}

	/* 12) +0 and -0 */
	{
		printf("A12) \"+0\" -> %d, \"-0\" -> %d\n", ft_atoi("+0"), ft_atoi("-0"));
	}

	/* 13) spaces between sign and digits (should be invalid; stops at space) */
	{
		const char *s = "- 42";
		ival = ft_atoi(s); /* expects 0 because '-' is followed by space -> no digits immediately after sign */
		printf("A13) sign then space then digits: \"%s\" -> %d\n", s, ival);
	}

	/* 14) very long valid digits but within long range for accumulation demonstration */
	{
		const char *s = "2147483648"; /* INT_MAX + 1 */
		ival = ft_atoi(s); /* may overflow int (implementation-defined), but we show the value returned by this impl */
		printf("A14) INT_MAX+1: \"%s\" -> %d (overflow behaviour)\n", s, ival);
	}

	return (0);
}
