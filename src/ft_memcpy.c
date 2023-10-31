/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonnet <bbonnet@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:43:29 by bbonnet           #+#    #+#             */
/*   Updated: 2023/10/31 13:41:33 by bbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char *src;
	unsigned char *dest;

	src = (unsigned char *) source;
	dest = (unsigned char *) destination;
	if (src == NULL && dest == NULL)
		return (destination);
	while (num)
	{
		dest[num - 1] = src[num - 1];
		num--;
	}
	return ((void *) dest);
}

#include <stdio.h>
#include <string.h>

struct
{
	char name[40];
	int  age;
} person, person_copy, person2, person_copy2;

int main()
{
	char myname[] = "Pierre de Fermat";
	char myname2[] = "Pierre de Fermat";

	/* using memcpy to copy string: */
	memcpy(myname + 2, myname, strlen(myname) + 1);
	ft_memcpy(myname2 + 2, myname2, strlen(myname2) + 1);

	memcpy(person.name, myname, strlen(myname) + 1);
	ft_memcpy(person2.name + 2, myname2, strlen(myname2) + 1);

	person.age = 46;
	person.age = 46;

	/* using memcpy to copy structure: */
	memcpy(&person_copy, &person, sizeof(person));
	ft_memcpy(&person_copy2, &person2, sizeof(person));

	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
	printf("person_copy: %s, %d \n", person_copy2.name, person_copy2.age);

	return 0;
}
