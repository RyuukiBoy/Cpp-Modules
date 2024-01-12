/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:16:35 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/05 12:16:35 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact(void);
        void searchContact(void);
        int getIndex(void);
        void setIndex(int index);
};

#endif