/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:39:00 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/24 16:04:23 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &o)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = o;
}

PmergeMe::~PmergeMe(void)
{
	std::cout << "Destructor called" << std::endl;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &o)
{
	std::cout << "Copy assignment operator called" << std::endl;
	vec = o.vec;
	deq = o.deq;
	return (*this);
}

void	PmergeMe::vector_fill(char **av)
{
	for (int i = 1; av[i]; i++)
		vec.push_back(std::atoi(av[i]));
}

void	PmergeMe::deque_fill(char **av)
{
	for (int i = 1; av[i]; i++)
		deq.push_back(std::atoi(av[i]));
}

void	PmergeMe::vector_sort(void)
{
	std::vector<int>			v1;
	std::vector<int>			v2;

	if (vec.size() % 2 == 0)
	{
		v1.assign(vec.begin(), vec.end() - (vec.size() / 2));
		v2.assign(vec.begin() + (vec.size() / 2), vec.end());
	}
	else
	{
		v1.assign(vec.begin(), vec.end() - (vec.size() / 2));
		v2.assign(vec.begin() + (vec.size() / 2) + 1, vec.end());
	}
	if (v1.size() > 40)
	{
		vector_merge_sort(v1);
		vector_merge_sort(v2);
	}
	else
	{
		vector_insert_sort(v1);
		vector_insert_sort(v2);
	}
	vector_merge(v1, v2, vec);
}

void	PmergeMe::vector_merge_sort(std::vector<int> &v)
{
	std::vector<int>			v1;
	std::vector<int>			v2;

	if (v.size() % 2 == 0)
	{
		v1.assign(v.begin(), v.end() - (v.size() / 2));
		v2.assign(v.begin() + (v.size() / 2), v.end());
	}
	else
	{
		v1.assign(v.begin(), v.end() - (v.size() / 2));
		v2.assign(v.begin() + (v.size() / 2) + 1, v.end());
	}
	if (v1.size() > 40)
	{
		vector_merge_sort(v1);
		vector_merge_sort(v2);
	}
	else
	{
		vector_insert_sort(v1);
		vector_insert_sort(v2);
	}
	vector_merge(v1, v2, v);
}

void	PmergeMe::vector_insert_sort(std::vector<int> &v)
{
	int				tmp;
	unsigned int	j;

	for (unsigned int i = 1; i < v.size(); i++)
	{
		tmp = v[i];
		j = -1;
		while(i > ++j && tmp < v[i - j - 1])
			v[i - j] = v[i - j - 1];
		v[i - j] = tmp;
	}
}

void	PmergeMe::vector_merge(std::vector<int> &v1, std::vector<int> &v2, std::vector<int> &v)
{
	int i = 0;
	while (!v1.empty() && !v2.empty())
	{
		if (v1[0] < v2[0])
		{
			v[i] = v1[0];
			i++;
			v1.erase(v1.begin());
		}
		else
		{
			v[i] = v2[0];
			i++;
			v2.erase(v2.begin());
		}
	}
	while (!v1.empty())
	{
		v[i] = v1[0];
		i++;
		v1.erase(v1.begin());
	}
	while (!v2.empty())
	{
		v[i] = v2[0];
		i++;
		v2.erase(v2.begin());
	}
}

//***************************************************************************************************************************************

void	PmergeMe::deque_sort(void)
{
	std::deque<int>			v1;
	std::deque<int>			v2;

	if (deq.size() % 2 == 0)
	{
		v1.assign(deq.begin(), deq.end() - (deq.size() / 2));
		v2.assign(deq.begin() + (deq.size() / 2), deq.end());
	}
	else
	{
		v1.assign(deq.begin(), deq.end() - (deq.size() / 2));
		v2.assign(deq.begin() + (deq.size() / 2) + 1, deq.end());
	}
	if (v1.size() > 40)
	{
		deque_merge_sort(v1);
		deque_merge_sort(v2);
	}
	else
	{
		deque_insert_sort(v1);
		deque_insert_sort(v2);
	}
	deque_merge(v1, v2, deq);
}

void	PmergeMe::deque_merge_sort(std::deque<int> &v)
{
	std::deque<int>			v1;
	std::deque<int>			v2;

	if (v.size() % 2 == 0)
	{
		v1.assign(v.begin(), v.end() - (v.size() / 2));
		v2.assign(v.begin() + (v.size() / 2), v.end());
	}
	else
	{
		v1.assign(v.begin(), v.end() - (v.size() / 2));
		v2.assign(v.begin() + (v.size() / 2) + 1, v.end());
	}
	if (v1.size() > 40)
	{
		deque_merge_sort(v1);
		deque_merge_sort(v2);
	}
	else
	{
		deque_insert_sort(v1);
		deque_insert_sort(v2);
	}
	deque_merge(v1, v2, v);
}

void	PmergeMe::deque_insert_sort(std::deque<int> &v)
{
	int				tmp;
	unsigned int	j;

	for (unsigned int i = 1; i < v.size(); i++)
	{
		tmp = v[i];
		j = -1;
		while(i > ++j && tmp < v[i - j - 1])
			v[i - j] = v[i - j - 1];
		v[i - j] = tmp;
	}
}

void	PmergeMe::deque_merge(std::deque<int> &v1, std::deque<int> &v2, std::deque<int> &v)
{
	int i = 0;
	while (!v1.empty() && !v2.empty())
	{
		if (v1[0] < v2[0])
		{
			v[i] = v1[0];
			i++;
			v1.erase(v1.begin());
		}
		else
		{
			v[i] = v2[0];
			i++;
			v2.erase(v2.begin());
		}
	}
	while (!v1.empty())
	{
		v[i] = v1[0];
		i++;
		v1.erase(v1.begin());
	}
	while (!v2.empty())
	{
		v[i] = v2[0];
		i++;
		v2.erase(v2.begin());
	}
}

double	PmergeMe::get_time(void)
{
	timeval	t;
	gettimeofday(&t, NULL);
	return ((static_cast<double>(t.tv_sec) * 1000000) + static_cast<double>(t.tv_usec));
}

bool	PmergeMe::input_check(char **av)
{
	for (int i = 1; av[i]; i++)
		for (int j = 0; av[i][j]; j++)
			if (!std::isdigit(av[i][j]))
			{
				std::cout << "Error : bad input!" << std::endl;
				return (false);
			}
	return (true);
}

void	PmergeMe::print(char **av, double tv, double td)
{
	std::cout << "Before: ";
	for (int i = 1; av[i]; i++)
		std::cout << av[i] << " ";
	std::cout << std::endl;
	std::cout << "After:  ";
	for (unsigned int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << tv << " μs" << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque :  " << td << " μs" << std::endl;
}

// void	PmergeMe::print(void)
// {
// 	for (unsigned int i = 0; i < vec.size(); i++)
// 		std::cout << vec[i] << " ";
// 	std::cout << std::endl;
// 	for (unsigned int i = 0; i < deq.size(); i++)
// 		std::cout << deq[i] << " ";
// 	std::cout << std::endl;
// }
