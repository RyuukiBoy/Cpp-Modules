/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:32:15 by marvin            #+#    #+#             */
/*   Updated: 2023/10/03 17:32:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int contacts_count;
        int index;
    public:
        Phonebook(void);
        ~Phonebook(void);
        void addContact(void);
        void searchContact(void);
        int getIndex(void);
        void setIndex(int index);
        void setContactsCount(int contacts_count);
        int getContactsCount(void);
};

#endif