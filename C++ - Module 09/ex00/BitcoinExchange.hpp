/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebensalt <ebensalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:52:57 by ebensalt          #+#    #+#             */
/*   Updated: 2023/05/20 17:07:21 by ebensalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <map>
# include <iostream>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
	private	:
		std::map<std::string, double>	db;
		std::string						date;
		double							v;
		int								day;
	public	:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &o);
		~BitcoinExchange(void);

		BitcoinExchange	&operator=(const BitcoinExchange &o);
		
		bool	check_file_input(std::ifstream &i, char *av);
		bool	check_line_input(std::string &l);
		void	exchange(std::ifstream	&i);
		bool	check_date(std::string &date);
};

#endif
