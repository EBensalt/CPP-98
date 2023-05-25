/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:39:11 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/24 16:12:32 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>
# include <iostream>
# include <sys/time.h>

class PmergeMe
{
	private	:
		std::vector<int>	vec;
		std::deque<int>		deq;

		void	vector_merge_sort(std::vector<int> &v);
		void	vector_insert_sort(std::vector<int> &v);
		void	vector_merge(std::vector<int> &v1, std::vector<int> &v2, std::vector<int> &v);
		void	deque_merge_sort(std::deque<int> &v);
		void	deque_insert_sort(std::deque<int> &v);
		void	deque_merge(std::deque<int> &v1, std::deque<int> &v2, std::deque<int> &v);
	public	:
		PmergeMe(void);
		PmergeMe(const PmergeMe &o);
		~PmergeMe(void);

		PmergeMe	&operator=(const PmergeMe &o);
		void	print(char **av, double tv, double td);
		void	vector_fill(char **av);
		void	vector_sort(void);
		void	deque_fill(char **av);
		void	deque_sort(void);
		double	get_time(void);
		bool	input_check(char **av);
};

#endif
