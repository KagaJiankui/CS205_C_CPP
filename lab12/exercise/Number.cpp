/*  CS205_C_CPP 
    Copyright (C) 2020  nanoseeds

    CS205_C_CPP is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    CS205_C_CPP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
    */
/**
 * @Github: https://github.com/Certseeds/CS205_C_CPP
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-05-07 22:04:08 
 * @LastEditors  : nanoseeds
 */
#include "Number.h"

Number Number::operator++() { // 前缀
    return Number(++number);
}

Number Number::operator++(int) {
    return Number(number++);
}

Number Number::operator--() { // 前缀
    return Number(--number);
}

Number Number::operator--(int) {
    return Number(number--);
}

std::ostream &operator<<(std::ostream &os, const Number &other) {
    os << "x = " << other.number;
    return os;
}
