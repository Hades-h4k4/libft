#include "libft.h"
#include <fcntl.h> // Para open y las constantes O_*
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // Para read, write, close

void	test_ft_atoi(void)
{
	printf("ft_atoi: ");
	if (ft_atoi("42") == 42 && ft_atoi("-42") == -42 && ft_atoi("0") == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_isascii(void)
{
	printf("ft_isascii: ");
	if (ft_isascii(65) && !ft_isascii(200))
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit: ");
	if (ft_isdigit('0') && ft_isdigit('9') && !ft_isdigit('a'))
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum: ");
	if (ft_isalnum('a') && ft_isalnum('5') && !ft_isalnum('$'))
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_isalpha(void)
{
	printf("ft_isalpha: ");
	if (ft_isalpha('a') && ft_isalpha('Z') && !ft_isalpha('1'))
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_isprint(void)
{
	printf("ft_isprint: ");
	if (ft_isprint(' ') && ft_isprint('~') && !ft_isprint(127))
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_toupper(void)
{
	printf("ft_toupper: ");
	if (ft_toupper('a') == 'A' && ft_toupper('A') == 'A')
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_tolower(void)
{
	printf("ft_tolower: ");
	if (ft_tolower('A') == 'a' && ft_tolower('a') == 'a')
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_memset(void)
{
	char	buf[5] = "abcd";

	ft_memset(buf, 'x', 4);
	printf("ft_memset: ");
	if (memcmp(buf, "xxxx", 4) == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_bzero(void)
{
	char	buf[5] = "abcd";

	ft_bzero(buf, 4);
	printf("ft_bzero: ");
	if (memcmp(buf, "\0\0\0\0", 4) == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_memcpy(void)
{
	char	src[5] = "1234";
	char	dst[5];

	ft_memcpy(dst, src, 4);
	printf("ft_memcpy: ");
	if (memcmp(src, dst, 4) == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_memmove(void)
{
	char	str[10] = "abcdefghi";

	ft_memmove(str + 2, str, 5);
	printf("ft_memmove: ");
	if (memcmp(str, "ababcdehi", 9) == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_memchr(void)
{
	char	str[5] = "abcd";

	printf("ft_memchr: ");
	if (ft_memchr(str, 'c', 4) == str + 2 && ft_memchr(str, 'x', 4) == NULL)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_memcmp(void)
{
	char	a[3] = "abc";
	char	b[3] = "abd";

	printf("ft_memcmp: ");
	if (ft_memcmp(a, b, 3) < 0 && ft_memcmp(a, a, 3) == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strlen(void)
{
	printf("ft_strlen: ");
	if (ft_strlen("") == 0 && ft_strlen("hola") == 4)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strchr(void)
{
	char	*s;

	s = "abc";
	printf("ft_strchr: ");
	if (ft_strchr(s, 'b') == s + 1 && ft_strchr(s, 'x') == NULL)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strrchr(void)
{
	char	*s;

	s = "abca";
	printf("ft_strrchr: ");
	if (ft_strrchr(s, 'a') == s + 3 && ft_strrchr(s, 'x') == NULL)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strncmp(void)
{
	printf("ft_strncmp: ");
	if (ft_strncmp("abc", "abd", 2) == 0 && ft_strncmp("abc", "abd", 3) < 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strlcpy(void)
{
	char	dst[10];
	size_t	r;

	r = ft_strlcpy(dst, "hola", 10);
	printf("ft_strlcpy: ");
	if (r == 4 && strcmp(dst, "hola") == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strlcat(void)
{
	char	dst[10] = "ho";
	size_t	r;

	r = ft_strlcat(dst, "la", 10);
	printf("ft_strlcat: ");
	if (r == 4 && strcmp(dst, "hola") == 0)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strnstr(void)
{
	char	*big;
	char	*little;

	big = "abcdef";
	little = "cd";
	printf("ft_strnstr: ");
	if (ft_strnstr(big, little, 6) == big + 2 && ft_strnstr(big, "xz",
			6) == NULL)
		printf("OK\n");
	else
		printf("MAL\n");
}

void	test_ft_strdup(void)
{
	char	*s;
	char	*dup;

	s = "hola";
	dup = ft_strdup(s);
	printf("ft_strdup: ");
	if (dup && strcmp(dup, s) == 0)
		printf("OK\n");
	else
		printf("MAL\n");
	free(dup);
}

void	test_ft_calloc(void)
{
	char	*p;
	int		ok;

	p = ft_calloc(5, sizeof(char));
	ok = 1;
	for (int i = 0; i < 5; i++)
		if (p[i] != 0)
			ok = 0;
	printf("ft_calloc: ");
	if (p && ok)
		printf("OK\n");
	else
		printf("MAL\n");
	free(p);
}

void	test_ft_substr(void)
{
	char	*result;
	int ok = 1;

	// Test 1: Substring dentro de los límites de la cadena
	result = ft_substr("Hola Mundo", 0, 4);
	if (result && strcmp(result, "Hola") == 0)
		ok = 1;
	else
		ok = 0;
	free(result);

	// Test 2: Substring empieza más allá del inicio de la cadena
	result = ft_substr("Hola Mundo", 5, 5);
	if (result && strcmp(result, "Mundo") == 0)
		ok = 1;
	else
		ok = 0;
	free(result);

	// Test 3: Substring con start mayor que el tamaño de la cadena (Debería devolver un string vacío)
	result = ft_substr("Hola Mundo", 20, 5);
	if (result && result[0] == '\0')
		ok = 1;
	else
		ok = 0;
	free(result);

	// Test 4: Substring con longitud mayor que la cadena disponible
	result = ft_substr("Hola Mundo", 3, 20);
	if (result && strcmp(result, "a Mundo") == 0)
		ok = 1;
	else
		ok = 0;
	free(result);

	// Test 5: Substring en una cadena vacía (Debería devolver una cadena vacía)
	result = ft_substr("", 0, 5);
	if (result && result[0] == '\0')
		ok = 1;
	else
		ok = 0;
	free(result);

	if(ok)
		printf("ft_substr: OK\n");
	else
		printf("ft_substr: MAL!");
}
void	test_ft_strjoin(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*joined;
	int		ok;

	s1 = "Hola";
	s2 = " Mundo";
	s3 = "";
	ok = 1;
	joined = ft_strjoin(s1, s2);
	if (!(joined && !ft_strncmp(joined, "Hola Mundo", ft_strlen(joined))))
		ok = 0;
	free(joined);
	joined = ft_strjoin(s1, s3);
	if (!(joined && !ft_strncmp(joined, "Hola", ft_strlen(joined))))
		ok = 0;
	free(joined);
	joined = ft_strjoin(s3, s2);
	if (!(joined && !ft_strncmp(joined, " Mundo", ft_strlen(joined))))
		ok = 0;
	free(joined);
	joined = ft_strjoin("", "");
	if (!(joined && !ft_strncmp(joined, "", ft_strlen(joined))))
		ok = 0;
	free(joined);
	if (ok)
		printf("ft_strjoin: OK\n");
	else
		printf("MAl\n");
}

void	test_ft_strtrim(void)
{
	char	*s1;
	char	*set;
	char	*test;
	int		ok;

	s1 = "Hola mundo";
	set = "o";
	test = ft_strtrim(s1, set);
	ok = 1;
	if (!(test && !ft_strncmp(test, "Hla mund", ft_strlen(test))))
		ok = 0;
	free(test);
	if (ok)
		printf("ft_strtrim: OK\n");
	else
		printf("MAl\n");
}

int	test_ft_split(void)
{
	char	**split;
	char	*expected[] = {"hola", "mundo", "42", NULL};
	int		i;
	int		j;

	split = ft_split("hola mundo 42", ' ');
	i = 0;
	if (!split)
		return (0); // MAL
	// Comparar cada palabra
	while (expected[i])
	{
		if (!split[i] || strcmp(split[i], expected[i]) != 0)
		{
			// Liberar memoria antes de salir
			j = 0;
			while (split[j])
			{
				free(split[j]);
				j++;
			}
			free(split);
			return (0); // MAL
		}
		i++;
	}
	// Comprobar que no haya palabras extra
	if (split[i] != NULL)
	{
		j = 0;
		while (split[j])
		{
			free(split[j]);
			j++;
		}
		free(split);
		return (0); // MAL
	}
	// Liberar memoria
	j = 0;
	while (split[j])
	{
		free(split[j]);
		j++;
	}
	free(split);
	return (1); // OK
}
void	test_ft_itoa(void)
{
	int			tests[] = {0, 42, -42, 123456, -123456, INT_MAX, INT_MIN};
	const char	*expected[] = {"0", "42", "-42", "123456", "-123456",
			"2147483647", "-2147483648"};
	int			n_tests;
	char		*result;
	int			i;
	int			ok;

	n_tests = sizeof(tests) / sizeof(tests[0]);
	ok = 1;
	i = 0;
	while (i < n_tests)
	{
		result = ft_itoa(tests[i]);
		if (!result || ft_strncmp(result, (char *)expected[i], 20) != 0)
			// 20 es suficiente para todos los ints
		{
			printf("ft_itoa: MAL (n = %d, got = %s, expected = %s)\n", tests[i],
				result ? result : "NULL", expected[i]);
			ok = 0;
		}
		free(result);
		i++;
	}
	if (ok)
		printf("ft_itoa: OK\n");
}

static char	plus_one(unsigned int i, char c)
{
	(void)i;      // no usamos el índice
	return (c + 1); // simplemente devuelve el siguiente carácter ASCII
}

void	test_ft_strmapi(void)
{
	const char	*cases[] = {"abc", "", "123", "Hello!", NULL};
	const char	*expected[] = {"bcd", "", "234", "Ifmmp\""};
	int			passed;
	size_t		i;
	char		*res;
	size_t		j;

	passed = 1;
	i = 0;
	while (cases[i])
	{
		res = ft_strmapi(cases[i], plus_one);
		j = 0;
		while (res[j] && expected[i][j] && res[j] == expected[i][j])
			j++;
		if (res[j] != expected[i][j])
			passed = 0;
		free(res);
		i++;
	}
	if (passed)
		printf("ft_strmapi: OK\n");
	else
		printf("ft_strmapi: MAL!\n");
}

static void	to_upper_idx(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	test_ft_striteri(void)
{
	const char	*cases[] = {"hola mundo", "", "a", "AbC123!", "test STRING",
			" \t\n", NULL};
	const char	*expected[] = {"HOLA MUNDO", "", "A", "ABC123!", "TEST STRING",
			" \t\n"};
	int			passed;
	size_t		i;
	char		*str;

	passed = 1;
	i = 0;
	while (cases[i])
	{
		str = ft_strdup(cases[i]);
		if (!str)
		{
			passed = 0;
			break ;
		}
		ft_striteri(str, to_upper_idx);
		if (ft_strncmp(str, (char *)expected[i], 100) != 0)
			passed = 0;
		free(str);
		i++;
	}
	if (passed)
		printf("ft_striteri: OK\n");
	else
		printf("ft_striteri: MAL!\n");
}

void	test_ft_putchar_fd(void)
{
	const char	test_char = 'A';
	const char	*filename = "test_putchar_fd.tmp";
	int			fd;
	char		read_char;
	int			passed;

	passed = 1;
	// Abrir archivo en modo escritura
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		printf("ft_putchar_fd: MAL!\n");
		return ;
	}
	// Escribir el carácter usando ft_putchar_fd
	ft_putchar_fd(test_char, fd);
	// Cerrar archivo
	close(fd);
	// Abrir archivo en modo lectura
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		printf("ft_putchar_fd: MAL!\n");
		return ;
	}
	// Leer el carácter del archivo
	if (read(fd, &read_char, 1) != 1)
		passed = 0;
	if (read_char != test_char)
		passed = 0;
	// Cerrar archivo y eliminarlo
	close(fd);
	remove(filename);
	// Resultado
	if (passed)
		printf("ft_putchar_fd: OK\n");
	else
		printf("ft_putchar_fd: MAL!\n");
}

void	test_ft_putstr_fd(void)
{
	int		pipe_fd[2];
	char	buffer[100];
	ssize_t	bytes_read;
	int		file_fd;
	ssize_t	bytes_read_file;

	// 1. Test caso básico: Escribir un string en la salida estándar (stdout)
	// Para este test,
	//la salida estándar puede ser capturada si redirigimos la salida.
	int fd_stdout = dup(STDOUT_FILENO);
		// Hacemos una copia del descriptor STDOUT
	pipe(pipe_fd); // Creamos un pipe para capturar la salida
	// Redirigimos la salida estándar hacia el pipe
	dup2(pipe_fd[1], STDOUT_FILENO);
	// Llamamos a ft_putstr_fd y esperamos que imprima en el pipe
	ft_putstr_fd("Hola Mundo\n", STDOUT_FILENO);
	// Cerramos el descriptor de escritura del pipe
	close(pipe_fd[1]);
	// Leemos desde el pipe lo que se imprimió
	bytes_read = read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	if (bytes_read == -1)
	{
		close(pipe_fd[0]);
		dup2(fd_stdout, STDOUT_FILENO); // Restauramos STDOUT
		printf("ft_putstr_fd:MAL!\n");
		return ; // Error en la lectura
	}
	buffer[bytes_read] = '\0'; // Aseguramos que el buffer sea una cadena válida
	// Restauramos STDOUT a su estado original
	dup2(fd_stdout, STDOUT_FILENO);
	close(pipe_fd[0]);
	// Verificamos si la salida es la esperada
	if (strcmp(buffer, "Hola Mundo\n") != 0)
	{
		printf("ft_putstr_fd:MAL!\n");
		return ; // El test ha fallado
	}
	// 2. Test caso con archivo
	file_fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (file_fd == -1)
	{
		printf("ft_putstr_fd:MAL!\n");
		return ; // Error al abrir archivo
	}
	ft_putstr_fd("Test en archivo\n", file_fd);
	close(file_fd);
	// Verificamos el contenido del archivo
	file_fd = open("test_output.txt", O_RDONLY);
	if (file_fd == -1)
	{
		printf("ft_putstr_fd:MAL!\n");
		return ; // Error al abrir archivo
	}
	bytes_read_file = read(file_fd, buffer, sizeof(buffer) - 1);
	if (bytes_read_file == -1)
	{
		close(file_fd);
		printf("ft_putstr_fd:MAL!\n");
		return ; // Error al leer archivo
	}
	buffer[bytes_read_file] = '\0';
		// Aseguramos que el buffer sea una cadena terminada en nulo
	close(file_fd);
	if (strcmp(buffer, "Test en archivo\n") != 0)
	{
		printf("ft_putstr_fd:MAL!\n");
		return ; // El contenido del archivo no es correcto
	}
	// 3. Test caso con cadena vacía
	ft_putstr_fd("", STDOUT_FILENO); // Esto no debería generar errores
	// 4. Test caso con una cadena muy larga
	ft_putstr_fd("Esta es una cadena muy larga para probar si funciona correctamente\n",
		STDOUT_FILENO);
	// Si pasamos todos los tests, imprimimos OK!
	printf("ft_putstr_fd:OK\n");
}

void	test_ft_putendl_fd(void)
{
	int		pipe_fd[2];
	char	buffer[100];
	ssize_t	bytes_read;
	int		file_fd;
	ssize_t	bytes_read_file;

	// 1. Test caso básico: Escribir un string con salto de línea en la salida estándar (stdout)
	// Para este test,
	//la salida estándar puede ser capturada si redirigimos la salida.
	int fd_stdout = dup(STDOUT_FILENO);
		// Hacemos una copia del descriptor STDOUT
	pipe(pipe_fd); // Creamos un pipe para capturar la salida
	// Redirigimos la salida estándar hacia el pipe
	dup2(pipe_fd[1], STDOUT_FILENO);
	// Llamamos a ft_putendl_fd y esperamos que imprima en el pipe con un salto de línea
	ft_putendl_fd("Hola Mundo", STDOUT_FILENO);
	// Cerramos el descriptor de escritura del pipe
	close(pipe_fd[1]);
	// Leemos desde el pipe lo que se imprimió
	bytes_read = read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	if (bytes_read == -1)
	{
		close(pipe_fd[0]);
		dup2(fd_stdout, STDOUT_FILENO); // Restauramos STDOUT
		printf("ft_putendl_fd:MAL!\n");
		return ; // Error en la lectura
	}
	buffer[bytes_read] = '\0'; // Aseguramos que el buffer sea una cadena válida
	// Restauramos STDOUT a su estado original
	dup2(fd_stdout, STDOUT_FILENO);
	close(pipe_fd[0]);
	// Verificamos si la salida es la esperada
	if (strcmp(buffer, "Hola Mundo\n") != 0)
	{
		printf("ft_putendl_fd:MAL!\n");
		return ; // El test ha fallado
	}
	// 2. Test caso con archivo
	file_fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (file_fd == -1)
	{
		printf("ft_putendl_fd:MAL!\n");
		return ; // Error al abrir archivo
	}
	ft_putendl_fd("Test en archivo", file_fd);
	close(file_fd);
	// Verificamos el contenido del archivo
	file_fd = open("test_output.txt", O_RDONLY);
	if (file_fd == -1)
	{
		printf("ft_putendl_fd:MAL!\n");
		return ; // Error al abrir archivo
	}
	bytes_read_file = read(file_fd, buffer, sizeof(buffer) - 1);
	if (bytes_read_file == -1)
	{
		close(file_fd);
		printf("ft_putendl_fd:MAL!\n");
		return ; // Error al leer archivo
	}
	buffer[bytes_read_file] = '\0';
		// Aseguramos que el buffer sea una cadena terminada en nulo
	close(file_fd);
	if (strcmp(buffer, "Test en archivo\n") != 0)
	{
		printf("ft_putendl_fd:MAL!\n");
		return ; // El contenido del archivo no es correcto
	}
	// 3. Test caso con cadena vacía
	ft_putendl_fd("", STDOUT_FILENO); // Esto no debería generar errores
	// 4. Test caso con una cadena muy larga
	ft_putendl_fd("Esta es una cadena muy larga para probar si funciona correctamente\n",
		STDOUT_FILENO);
	// Si pasamos todos los tests, imprimimos OK!
	printf("ft_putendl_fd:OK\n");
}

void	test_ft_putnbr_fd(void)
{
	int		pipe_fd[2];
	char	buffer[100];
	ssize_t	bytes_read;

	// 1. Test con número positivo
	int fd_stdout = dup(STDOUT_FILENO); // Guardamos el descriptor de STDOUT
	pipe(pipe_fd); // Creamos un pipe para capturar la salida
	// Redirigimos la salida estándar hacia el pipe
	dup2(pipe_fd[1], STDOUT_FILENO);
	// Llamamos a ft_putnbr_fd y esperamos que imprima el número
	ft_putnbr_fd(123, STDOUT_FILENO);
	// Cerramos el descriptor de escritura del pipe
	close(pipe_fd[1]);
	// Leemos desde el pipe lo que se imprimió
	bytes_read = read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	if (bytes_read == -1)
	{
		close(pipe_fd[0]);
		dup2(fd_stdout, STDOUT_FILENO); // Restauramos STDOUT
		printf("ft_putnbr_fd:MAL!\n");
		return ; // Error en la lectura
	}
	buffer[bytes_read] = '\0'; // Aseguramos que el buffer sea una cadena válida
	// Restauramos STDOUT a su estado original
	dup2(fd_stdout, STDOUT_FILENO);
	close(pipe_fd[0]);
	// Verificamos si la salida es la esperada
	if (strcmp(buffer, "123") != 0)
	{
		printf("ft_putnbr_fd:MAL!\n");
		return ; // El test ha fallado
	}
	// 2. Test con número negativo
	fd_stdout = dup(STDOUT_FILENO); // Guardamos el descriptor de STDOUT
	pipe(pipe_fd);                  // Creamos otro pipe
	dup2(pipe_fd[1], STDOUT_FILENO); // Redirigimos la salida al pipe
	ft_putnbr_fd(-456, STDOUT_FILENO); // Llamamos con un número negativo
	close(pipe_fd[1]);
	bytes_read = read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	if (bytes_read == -1)
	{
		close(pipe_fd[0]);
		dup2(fd_stdout, STDOUT_FILENO);
		printf("ft_putnbr_fd:MAL!\n");
		return ; // Error en la lectura
	}
	buffer[bytes_read] = '\0';
	dup2(fd_stdout, STDOUT_FILENO); // Restauramos STDOUT
	close(pipe_fd[0]);
	if (strcmp(buffer, "-456") != 0)
	{
		printf("ft_putnbr_fd:MAL!\n");
		return ;
	}
	// 3. Test con número cero
	fd_stdout = dup(STDOUT_FILENO);
	pipe(pipe_fd);
	dup2(pipe_fd[1], STDOUT_FILENO);
	ft_putnbr_fd(0, STDOUT_FILENO); // Llamamos con el número 0
	close(pipe_fd[1]);
	bytes_read = read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	if (bytes_read == -1)
	{
		close(pipe_fd[0]);
		dup2(fd_stdout, STDOUT_FILENO);
		printf("ft_putnbr_fd:MAL!\n");
		return ;
	}
	buffer[bytes_read] = '\0';
	dup2(fd_stdout, STDOUT_FILENO);
	close(pipe_fd[0]);
	if (strcmp(buffer, "0") != 0)
	{
		printf("ft_putnbr_fd:MAL!\n");
		return ;
	}
	// 4. Test con el valor mínimo de un int (INT_MIN)
	fd_stdout = dup(STDOUT_FILENO);
	pipe(pipe_fd);
	dup2(pipe_fd[1], STDOUT_FILENO);
	ft_putnbr_fd(INT_MIN, STDOUT_FILENO); // Llamamos con INT_MIN
	close(pipe_fd[1]);
	bytes_read = read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	if (bytes_read == -1)
	{
		close(pipe_fd[0]);
		dup2(fd_stdout, STDOUT_FILENO);
		printf("ft_putnbr_fd:MAL!\n");
		return ;
	}
	buffer[bytes_read] = '\0';
	dup2(fd_stdout, STDOUT_FILENO);
	close(pipe_fd[0]);
	// INT_MIN es un caso especial debido a la representación en complemento a 2,
	//debe ser "-2147483648"
	if (strcmp(buffer, "-2147483648") != 0)
	{
		printf("ft_putnbr_fd:MAL\n");
		return ;
	}
	// Si pasamos todos los tests, imprimimos OK!
	printf("ft_putnbr_fd:OK\n");
}

void test_ft_lstnew(void)
{
    int *num = malloc(sizeof(int));
    if (!num)
    {
        printf("ft_lstnew: MAL (malloc fallo en test)\n");
        return;
    }
    *num = 42;

    t_list *nodo = ft_lstnew(num);

    int ok = 1;

    // 1. Debe devolver un nodo válido
    if (!nodo)
        ok = 0;

    // 2. El puntero content debe ser el MISMO que enviamos
    if (nodo && nodo->content != num)
        ok = 0;

    // 3. next debe ser NULL
    if (nodo && nodo->next != NULL)
        ok = 0;

    // 4. El contenido no debe ser alterado
    if (nodo && *((int *)nodo->content) != 42)
        ok = 0;

    // Imprimir resultado
    if (ok)
        printf("ft_lstnew: OK\n");
    else
        printf("ft_lstnew: MAL\n");

    // Liberar
    free(num);
    free(nodo);
}

int	main(void)
{
	test_ft_atoi();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isprint();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strlen();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strnstr();
	test_ft_strdup();
	test_ft_calloc();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_lstnew();
	return (0);
}
