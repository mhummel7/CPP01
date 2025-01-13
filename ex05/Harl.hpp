/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhummel <mhummel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:29:25 by mhummel           #+#    #+#             */
/*   Updated: 2025/01/13 12:31:01 by mhummel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		struct ComplaintLevel
		{
			std::string level;
			void (Harl::*func)(void);
		};

		static ComplaintLevel complaintLevels[4];

	public:
		void complain(std::string level);
};

#endif
