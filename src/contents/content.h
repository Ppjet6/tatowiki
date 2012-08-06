/**
 * Tatoeba wiki  Wiki made with cppcms
 * Copyright (C) 2012 Allan SIMON <allan.simon@supinfo.com> 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * @category Tatoeba wiki
 * @package  Contents
 * @author   Allan SIMON <allan.simon@supinfo.com> 
 * @license  Affero General Public License
 * @link     https://github.com/sysko/tatowiki@
 */

#ifndef CONTENTS_BASE_CONTENT_H
#define CONTENTS_BASE_CONTENT_H

#include <cppcms/view.h>

#include "contents/forms/change_interface_langs.h"

namespace contents {

/**
 * @struct 
 */
struct BaseContent : public cppcms::base_content {
    /**
     * @brief Will contain a flash message to inform the user about the
     *        success/failure of an action.
     *
     * @since 30 August
     */
    std::string message;

    /**
     * @brief Form which permits to change the user interface language
     *
     * @since 2 September
     */
    forms::InterfaceLang interfaceLang;
    
};

}

#endif
