#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

static char	ft_plus1_even(unsigned int i, char c)
{	
	c = c + 1;
	return (c);
}

void	aff_list(t_list *begin)
{
	while (begin)
	{
		printf("%d\n", *(int*)begin->content);
		begin = begin->next;
	}
}

int	main(int argc, char **argv)
{
//********************************************PART 1******************************************
//********************************************PART 1******************************************
//********************************************************************************************
//********************************************************************************************
/*	int c;
	c = (int)argv[1][0];
	
	ft_islower(c) == 0 ? printf("ft_islow : caractere NON minuscule\n") : printf("ft_islow : caractere minuscule\n");
	islower(c) == 0 ? printf("islow : caractere NON minuscule\n") : printf("islow : caractere minuscule\n");
	printf("=================ISUPPER==================\n");
	ft_isupper(c) == 0 ? printf("ft_isup : caractere NON majuscule\n") : printf("ft_isup : caractere majuscule\n");
	isupper(c) == 0 ? printf("isup : caractere NON majuscule\n") : printf("isup : caractere majuscule\n");
	printf("=================ISALPHA==================\n");
	ft_isalpha(c) == 0 ? printf("ft_isal : caractere NON alphabetique\n") : printf("ft_isal : caractere alphabetique\n");
	isalpha(c) == 0 ? printf("isal : caractere NON alphabetique\n") : printf("isal : caractere alphabetique\n");
	printf("=================ISDIGIT==================\n");
	ft_isdigit(c) == 0 ? printf("ft_isdig : caractere NON numerique\n") : printf("ft_isdig : caractere numerique\n");
	isdigit(c) == 0 ? printf("isdig : caractere NON numerique\n") : printf("isdig : caractere numerique\n");
	printf("=================ISALNUM==================\n");
	ft_isalnum(c) == 0 ? printf("ft_isalnum : caractere NON numerique\n") : printf("ft_isalnum : caractere numerique\n");
	isalnum(c) == 0 ? printf("isalnum : caractere NON numerique\n") : printf("isalnum : caractere numerique\n");
	printf("=================ISPRINT==================\n");
	ft_isprint(126) == 0 ? printf("ft_ispr : caractere NON printable\n") : printf("ft_ispr : caractere printable\n");
	isprint(126) == 0 ? printf("ispr : caractere NON printable\n") : printf("ispr : caractere printable\n");	
	printf("=================ISASCII==================\n");
	ft_isascii(126) == 0 ? printf("ft_isasc : caractere NON ascii\n") : printf("ft_isasc : caractere ascii\n");
	isascii(126) == 0 ? printf("isasc : caractere NON ascii\n") : printf("isasc : caractere ascii\n");
*/
//********************************************************************************************
//********************************************************************************************
/*	printf("=================STRLEN==================\n");
	printf("ft_strlen = %lu\n", ft_strlen(""));
	printf("strlen = %lu\n", strlen(""));
	printf("=================TOLOWER==================\n");
	char str1[] = "cCouCCC.Cou";
	char str2[] = "cCouCCC.Cou";
	int i = 0; 
	while (str1[i] && str2[i])
	{
		str1[i] = ft_tolower(str1[i]);
		str2[i] = tolower(str2[i]);
		i++;
	}
	printf("ft_tolower = %s\n tolower = %s\n", str1, str2);
	printf("=================TOUPPER==================\n");
	char str3[] = "cCouCCC.Cou";
	char str4[] = "cCouCCC.Cou";
	i = 0; 
	while (str3[i] && str4[i])
	{
		str3[i] = ft_toupper(str3[i]);
		str4[i] = toupper(str4[i]);
		i++;
	}
	printf("ft_toupper = %s\n toupper = %s\n", str3, str4);
	printf("=================STRCHR==================\n");
	printf("ft_strchr = %s\n", ft_strchr("cocouu", 'u'));
	printf("strchr = %s\n", strchr("cocouu", 'u'));
	printf("ft_strchr = %s\n", ft_strchr("cocouu", 'a'));
	printf("strchr = %s\n", strchr("cocouu", 'a'));
	printf("=================STRRCHR==================\n");
	printf("ft_strrchr = %s\n", ft_strrchr("coucou", 'u'));
	printf("strrchr = %s\n", strrchr("coucou", 'u'));
	printf("ft_strrchr = %s\n", ft_strrchr("coucou", 'a'));
	printf("strrchr = %s\n", strrchr("coucou", 'a'));
    printf("ft_strrchr = %s\n", ft_strrchr("hello", 'h'));
    printf("strrchr = %s\n", strrchr("hello", 'h'));
    printf("ft_strrchr = %s\n", ft_strrchr("hello", '\0'));
    printf("strrchr = %s\n", strrchr("hello", '\0'));
	printf("=================STRNCMP==================\n");
	printf("ft_strncmp = %d\n", ft_strncmp("coucou", "couczou", 7));
	printf("strncmp = %d\n", strncmp("coucou", "couczou", 7)); 
	printf("=================STRLCPY==================\n");// nexiste pas sur linux
	size_t len;
	char chaine[100] = "coucou coucou coucou coucou coucou";
	char copy[10]; 
	len = ft_strlcpy(copy, chaine, 10);
	//len = strlcpy(copy, chaine, 10);
	printf("%s %lu\n", copy, len);
	printf("=================STRLCAT==================\n");//nexiste pas sur linux
        char src[] = "aurelie";
        char dest[13] = "je suis";
        printf("%lu, %s\n", ft_strlcat(dest, src, 13), dest);
	//printf("%d", strlcat(dest, src, 13));
	printf("=================STRNSTR==================\n");//nexiste pas sur linux
	char haystack[] = "hey ou tu te chaches";
	char needle[] = "te";
	char *result;
	result = ft_strnstr(haystack, needle, 30);
	//result = strnstr(haystack, needle, 5);
	printf("%s\n", result);
	printf("=================ATOI==================\n");
	char nb[] = "21474836477";
	char nb1[] = "   -234549";
	char nb2[] = "   --+-435";
	char nb3[] = "-2147483648";
	printf("%s, %s, %s, %s\n", nb, nb1, nb2, nb3);
	printf("ft_atoi = %d, %d, %d, %d\n", ft_atoi(nb), ft_atoi(nb1), ft_atoi(nb2), ft_atoi(nb3));
	printf("atoi = %d, %d, %d, %d\n", atoi(nb), atoi(nb1), atoi(nb2), atoi(nb3));
	printf("=================STRDUP==================\n");
	printf("ft_strdup = %s\n", ft_strdup("coucou"));
	printf("strdup = %s\n", strdup("coucou"));
	printf("ft_strdup = %s\n", ft_strdup(""));
	printf("strdup = %s\n", strdup(""));
	printf("=================CALLOC==================\n");
	char *fcall = ft_calloc(1,7);
	fcall = "coucou";
	printf("ft_calloc = %s\n", fcall);
	char *call = calloc(1,7);
	call = "coucou";
	printf("calloc = %s\n", call);
	i = -1;
	int *fcall_tab = ft_calloc((sizeof (int)),3);
	printf("ft_calloc = ");
	while(++i < 3)
	{
		fcall_tab[i] = i;
		printf("%d, ", fcall_tab[i]);
	}
	i = -1;
	int *call_tab = calloc((sizeof (int)),3);
	printf("\ncalloc = ");
	while(++i < 3)
	{
		call_tab[i] = i;
		printf("%d, ", call_tab[i]);
	}
	printf("\n");*/
//********************************************************************************************
//********************************************************************************************
/*	printf("=================BZERO==================\n");	
	unsigned char fbz[] = "aurelie";
	unsigned char bz[] = "aurelie";
	ft_bzero(fbz, 4);	
	bzero(bz, 4);
	int i = 0;
	printf("result ft_bzero : ");	
	while(i < 7)
		printf("%c", fbz[i++]);
	printf("\n");
	i = 0;
	printf("result bzero : ");
	while(i < 7)		
		printf("%c", bz[i++]);
	printf("\n");
	printf("=================MEMSET==================\n");
	unsigned char fmset[] = "aurelie";
	unsigned char mset[] = "aurelie";
	printf("result ft_memset: %s\n", (char *)ft_memset(fmset, 2345, 7));	
	printf("result memset: %s\n", (char *)memset(mset, 2345, 7));
	printf("=================MEMCPY==================\n");
	printf("===test1===\n");
	unsigned char dst[] = "coucou";
	unsigned char src[] = "salut";
	printf("ft_memcpy : %s\n", (char *)ft_memcpy(dst, src, 3));
	unsigned char dst1[] = "coucou";
	unsigned char src1[] = "salut";	
	printf("memcpy : %s\n", (char *)memcpy(dst1, src1, 3));
	printf("===test2===\n");
	unsigned char dst2[] = "coucou";
	unsigned char src2[] = "salut";
	printf("ft_memcpy : %s\n", (char *)ft_memcpy(dst2, src2, 0));
	unsigned char dst3[] = "coucou";
	unsigned char src3[] = "salut";
	printf("memcpy : %s\n", (char *)memcpy(dst3, src3, 0));
	printf("===test3===\n");//difference est ce normal?
	unsigned char dst4[] = "coucou";
	unsigned char src4[] = "salut cest moi";
	printf("ft_memcpy : %s\n", (char *)ft_memcpy(dst4, src4, 8));
	unsigned char dst5[] = "coucou";
	unsigned char src5[] = "salut cest moi";
	printf("memcpy : %s\n", (char *)memcpy(dst5, src5, 8));
	printf("===test4===\n");
	unsigned char dst6[] = "";
	unsigned char src6[] = "salut";
	printf("ft_memcpy : %s\n", (char *)ft_memcpy(dst6, src6, 5));
	unsigned char dst7[] = "";
	unsigned char src7[] = "salut";
	printf("memcpy : %s\n", (char *)memcpy(dst7, src7, 5));
	printf("===test5===\n");//segfault avec les deux
	//unsigned char *dst8 = NULL;
	//unsigned char *src8 = NULL;
	//printf("ft_memcpy : %s\n", (char *)ft_memcpy(dst8, src8, 5));
	//unsigned char *dst9 = NULL;
	//unsigned char *src9 = NULL;
	//printf("memcpy : %s\n", (char *)memcpy(dst9, src9, 5));
	printf("=================MEMCCPY==================\n");
	unsigned char fmccp[] = "aurelie";
	printf("ft_memccpy = %s, %s\n", (char *)ft_memccpy(fmccp, "saluut",'u', 0), fmccp);
	unsigned char mccp[] = "aurelie";
	printf("memccpy = %s, %s\n", (char *)memccpy(mccp, "saluut", 'u', 0), mccp);
	unsigned char fmccp1[] = "aurelie";
	printf("ft_memccpy = %s, %s\n", (char *)ft_memccpy(fmccp1, "saluut",'u', 6), fmccp1);
	unsigned char mccp1[] = "aurelie";
	printf("memccpy = %s, %s\n", (char *)memccpy(mccp1, "saluut", 'u', 6), mccp1);
	printf("=================MEMCHR==================\n");
	printf("ft_memchr = %s\n",  (char *)ft_memchr("salutt", 0, 7));
	printf("memchr = %s\n", (char *)memchr("salutt", 0, 7));
	printf("ft_memchr = %s\n",  (char *)ft_memchr("salutt", 't', 7));
	printf("memchr = %s\n", (char *)memchr("salutt", 't', 7));
	printf("=================MEMCMP==================\n");
	printf("ft_memcmp = %d\n", ft_memcmp("coucou", "couaou", 0));
	printf("memcmp = %d\n", memcmp("coucou", "couaou", 0));
	printf("ft_memcmp = %d\n", ft_memcmp("coucou", "couaou", 6));
	printf("memcmp = %d\n", memcmp("coucou", "couaou", 6));
	printf("ft_memcmp = %d\n", ft_memcmp("coucou", "coucou", 6));
	printf("memcmp = %d\n", memcmp("coucou", "coucou", 6));
	printf("=================MEMMOVE==================\n");
	char fmmv[23] = "hello, nice to meet you";
	char fmmvsrc[] = "hi how are you?";
	ft_memmove(fmmv, fmmvsrc, 6);
	printf("ft_memmove : %s\n", fmmv);
	char mmv[23] = "hello, nice to meet you";
	char mmvsrc[] = "hi how are you?";
	memmove(mmv, mmvsrc, 6);
	printf("memmove : %s\n", mmv);	
	printf("=====================\n");
	char fmmv1[23] = "hello, nice to meet you";
	ft_memmove(fmmv1, fmmv1 + 7, 10);
	printf("ft_memmove : %s\n", fmmv1);
	char mmv1[23] = "hello, nice to meet you";
	memmove(mmv1, mmv1 + 7, 10);
	printf("memmove : %s\n", mmv1);*/	
//********************************************PART 2******************************************
//********************************************PART 2******************************************
//********************************************************************************************
//********************************************************************************************
/*	printf("=================SUBSTR==================\n");
	printf("substr = %s(ja nai)\n", ft_substr("suki ja nai", 5, 20));
	printf("substr = %s(suki ja nai)\n", ft_substr("suki ja nai", 0, 20));
	printf("substr = %s(ki ja)\n", ft_substr("suki ja nai", 2, 5));
	printf("substr = %s()\n", ft_substr("suki ja nai", 5, 0));
	printf("substr = %s()\n", ft_substr("suki ja nai", 30, 0));
	printf("=================STRJOIN==================A FAIRE\n");
	
	printf("=================STRTRIM==================\n");
	printf("test 1 = %s(quand les poules auront des dents)\n", ft_strtrim("+++++<+<+<+<quand les poules auront des dents>+>+>+>+++++++++", "+><?"));
	printf("test 2 = %s()\n", ft_strtrim("", "+><?"));
	printf("test 3 = %s()\n", ft_strtrim("", ""));
	char *trim = NULL;
	char *set = NULL;
	printf("test 4 = %s((null))\n", ft_strtrim(trim, set));
    printf("test 5 = %s()\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", "\t \n"));
	printf("=================STRJOIN==================\n");
	printf("%s (Hajime-mashite, dôzo yoroshiku onegai shimasu) \n", ft_strjoin("Hajime-mashite, ", "dôzo yoroshiku onegai shimasu"));
	printf("%s(null) \n", ft_strjoin(trim, set));
	printf("=================STRSPLIT==================\n");
	printf("(Hajime-mashite,/dôzo/yoroshiku/onegai/shimasu/)");
	char **split = ft_split("Hajime-mashite, dôzo yoroshiku onegai shimasu", ' ');
	int i = 0;
	while (split[i])
		printf("%s/", split[i++]);
    printf("\n(Hajime-mashite,/dôzo/yoroshiku/onegai/shimasu/)");
    split = ft_split("   Hajime-mashite,   dôzo   yoroshiku onegai shimasu   ", ' ');
    i = 0;
    while (split[i])
        printf("%s/", split[i++]);
	printf("\n=================ITOA==================\n");
	printf("(-2345) %s\n", ft_itoa(-2345));
	printf("(-2147483648) %s\n", ft_itoa(-2147483648));
	printf("(0) %s\n", ft_itoa(0));
    printf("(123409) %s\n", ft_itoa(123409));
    printf("(2147483647) %s\n", ft_itoa(2147483647));
	printf("=================STRMAPI==================\n");
	printf("%s(bcdefghi)\n", ft_strmapi("abcdefgh", &ft_plus1_even));
	printf("=================PUTCHAR_FD==================\n");
	printf("%s", "(a)");
    ft_putchar_fd('a', 1);
    printf("\n%s", "()");
    ft_putchar_fd('a', -1);
	printf("\n=================PUTSTR_FD==================\n");
	printf("%s", "(Watashi no namae wa Aurelie desu)");
    ft_putstr_fd("Watashi no namae wa Aurelie desu", 1);
    printf("\n%s", "()");
    ft_putstr_fd("Watashi no namae wa Aurelie desu", -1);
    printf("\n%s", "()");
    ft_putstr_fd(trim, 1);
	printf("\n=================PUTENDL_FD==================\n");
	ft_putendl_fd("Watashi no namae wa Aurelie desu", 1);
	printf("\n=================PUTNBR_FD==================\n");
	ft_putnbr_fd(-2147483648, 1);
    printf("%s\n", "(-2147483648)");
	*/
//********************************************BONUS ******************************************
//********************************************BONUS ******************************************
//********************************************************************************************
//********************************************************************************************
	int *tab = NULL;
	int i = -1;
	int size = 0;
	tab = malloc(sizeof(int) * 4);
	while (++i < 4)
		tab[i] = i;
	t_list *begin;
	begin = NULL;//initialiser a null sinon seg fault
  	
	ft_lstadd_front(&begin,ft_lstnew(&tab[0]));
	ft_lstadd_back(&begin,ft_lstnew(&tab[1]));
	ft_lstadd_back(&begin,ft_lstnew(&tab[2]));
	ft_lstadd_back(&begin,ft_lstnew(&tab[3]));
	size = ft_lstsize(begin);
	printf("size = %d\n", size);
	aff_list(begin);
	return(0); 
}
